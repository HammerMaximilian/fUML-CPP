/*
 * CS_RemoveStructuralFeatureValueActionActivation.cpp
 *
 *  Created on: 01.02.2024
 *      Author: maha6913
 */

#include <pscs/semantics/actions/CS_RemoveStructuralFeatureValueActionActivation.h>

#include <pscs/semantics/fwd.h>
#include <pscs/semantics/structuredclassifiers/CS_Link.h>
#include <pscs/semantics/structuredclassifiers/CS_Reference.h>
#include <pscs/semantics/structuredclassifiers/CS_InteractionPoint.h>
#include <pscs/semantics/structuredclassifiers/CS_Object.h>
#include <uml/actions/RemoveStructuralFeatureValueAction.h>
#include <fuml/semantics/simpleclassifiers/UnlimitedNaturalValue.h>
#include <fuml/semantics/loci/ChoiceStrategy.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/FeatureValue.h>
#include <UMLPrimitiveTypes/intList.h>
#include <uml/structuredclassifiers/Port.h>

void CS_RemoveStructuralFeatureValueActionActivation::doAction()
{
    // Get the values of the object and value input pins.
    // If the given feature is an association end, then Destroy any
    // matching links. Otherwise, if the object input is a structural
    // value, remove values from the given feature and Destroy all links
    // in which the removed values are involved.
    // If isRemoveDuplicates is true, then Destroy all current matching
    // links or remove all values equal to the input value.
    // If isRemoveDuplicates is false and there is no removeAt input pin,
    // remove any one feature value equal to the input value (if there are
    // any that are equal).
    // If isRemoveDuplicates is false, and there is a removeAt input pin
    // remove the feature value at that position.
    RemoveStructuralFeatureValueActionPtr action = AS(RemoveStructuralFeatureValueAction, this->node);
    const StructuralFeaturePtr& feature = action->structuralFeature;
    AssociationPtr association = this->getAssociation(feature);
    ValuePtr value = this->takeTokens(action->object)->at(0);
    ValuePtr inputValue = nullptr;
    if (action->value != nullptr)
    {
        // NOTE: Multiplicity of the value input pin is required to be 1..1.
        inputValue = this->takeTokens(action->value)->at(0);
    }
    int removeAt = 0;
    if (action->removeAt != nullptr)
    {
        removeAt = (AS(UnlimitedNaturalValue, this->takeTokens(action->removeAt)->at(0)))->value;
    }
    if (association != nullptr)
    {
        LinkListPtr links = this->getMatchingLinksForEndValue(association, feature, value, inputValue);
        if (action->isRemoveDuplicates)
        {
            for (const LinkPtr& link : *links)
            {
                link->destroy();
            }
        }
        else if (action->removeAt == nullptr)
        {
            // *** If there is more than one matching link,
            // non-deterministically Choose one. ***
            if (links->size() > 0)
            {
                int i = (AS(ChoiceStrategy, this->getExecutionLocus()->factory->getStrategy("choice")))->choose(links->size());
                links->at(i - 1)->destroy();
            }
        }
        else
        {
            bool notFound = true;
            unsigned int i = 1,
            				linksSize = links->size();
            while (notFound && i <= linksSize)
            {
                const LinkPtr& link = links->at(i - 1);
                if (link->getFeatureValue(feature)->position == removeAt)
                {
                    notFound = false;
                    link->destroy();
                }
            }
        }
    }
    else if (StructuredValuePtr structuredValue = AS(StructuredValue, value))
    {
        // If the value is a data value, then it must be copied before
        // any change is made.
        if (!IS(Reference, value))
        {
            value = value->copy();
        }
        FeatureValuePtr featureValue = structuredValue->getFeatureValue(action->structuralFeature);
        ValueListPtr removedValues(new ValueList());
        if (action->isRemoveDuplicates)
        {
            int j = this->position(inputValue, featureValue->values, 1);
            while (j > 0)
            {
                removedValues->push_back(featureValue->values->at(j - 1));
                featureValue->values->erase(featureValue->values->begin() + (j - 1));
                j = this->position(inputValue, featureValue->values, j);
            }
        }
        else if (action->removeAt == nullptr)
        {
            UMLPrimitiveTypes::intList positions;
            int j = this->position(inputValue, featureValue->values, 1);
            while (j > 0)
            {
                positions.push_back(j);
                j = this->position(inputValue, featureValue->values, j + 1);
            }
            if (positions.size() > 0)
            {
                // *** Nondeterministically Choose which value to remove.
                // ***
                int k = (AS(ChoiceStrategy, this->getExecutionLocus()->factory->getStrategy("choice")))->choose(positions.size());
                removedValues->push_back(featureValue->values->at(positions.at(k - 1) - 1));
                featureValue->values->erase(featureValue->values->begin() + (positions.at(k - 1) - 1));
            }
        }
        else
        {
            if ((int)featureValue->values->size() >= removeAt) // cast required here
            {
                removedValues->push_back(featureValue->values->at(removeAt - 1));
                featureValue->values->erase(featureValue->values->begin() + (removeAt - 1));
            }
        }
        // When values are removed from the list of values associated to the feature
        // (in the context of the target), these latter may be involved in links representing
        // instance of connectors. If this is the case, links in which the removed values are
        // involved are Destroyed.
        for (const ValuePtr& removedValue : *removedValues)
        {
            CS_LinkListPtr linksToDestroy = this->getLinksToDestroy(structuredValue, feature, removedValue);
            for (const CS_LinkPtr& linkToDestroy : *linksToDestroy)
            {
                linkToDestroy->destroy();
            }
        }
    }
    if (action->result != nullptr)
    {
        this->putToken(action->result, value);
    }
}

CS_LinkListPtr CS_RemoveStructuralFeatureValueActionActivation::getLinksToDestroy(const StructuredValuePtr& value, const StructuralFeaturePtr& feature, const ValuePtr& removedValue)
{
    // Get all links that are required to be Destroyed due to the removal of the removedValue
    CS_LinkListPtr linksToDestroy(new CS_LinkList());
    if (CS_ReferencePtr context = AS(CS_Reference, value))
    {
        // Retrieves the feature values for the structural feature associated with this action,
        // in the context of this reference
        if (IS(Port, value))
        {
            // The removed value is an interaction point.
            // All links in which this interaction is involved must be Destroyed.
            CS_InteractionPointPtr interactionPoint = AS(CS_InteractionPoint, removedValue);
            CS_LinkListPtr connectorInstances = context->compositeReferent->getLinks(interactionPoint);
            for (const CS_LinkPtr& link : *connectorInstances)
            {
                linksToDestroy->push_back(link);
            }
        }
        else
        {
            // Feature is not a Port. Search for all potential link
            // ends existing in the context of this object.
            ValueListPtr allValuesForFeature(new ValueList());
            FeatureValueListPtr referentFeatureValues = context->referent->getFeatureValues();
            for (const FeatureValuePtr& featureValue : *referentFeatureValues)
            {
                const StructuralFeaturePtr& currentFeature = featureValue->feature;
                if (feature != currentFeature)
                {
                    ValueListPtr values = this->getPotentialLinkEnds(context, currentFeature);
                    for (const ValuePtr& value : *values)
                    {
                        allValuesForFeature->push_back(value);
                    }
                }
            }
            // Retrieves all links available at the locus
            const ExtensionalValueListPtr& extensionalValues = this->getExecutionLocus()->extensionalValues;
            CS_LinkListPtr allLinks(new CS_LinkList());
            for (const ExtensionalValuePtr& extensionalValue : *extensionalValues)
            {
                if (CS_LinkPtr cS_Link = AS(CS_Link, extensionalValue))
                {
                    allLinks->push_back(cS_Link);
                }
            }
            // In the set of links involving potential link ends. Search for all
            // links that involve the removed value in other end. Any link in that
            // fulfill this condition is registered in the set of link to be Destroyed.
            for (const CS_LinkPtr link : *allLinks)
            {
                bool linkHasToBeDestroyed = false;
                unsigned int allValuesForFeatureSize = allValuesForFeature->size();
                for (unsigned int j = 0; j < allValuesForFeatureSize && !linkHasToBeDestroyed; j++)
                {
                    const ValuePtr& v = allValuesForFeature->at(j);
                    StructuralFeaturePtr featureForV = link->getFeature(v);
                    if (featureForV != nullptr)
                    {
                    	FeatureValueListPtr linkFeatureValues = link->getFeatureValues();
                    	unsigned int linkFeatureValuesSize = linkFeatureValues->size();
                        for (unsigned int k = 0; k < linkFeatureValuesSize && !linkHasToBeDestroyed; k++)
                        {
                            const FeatureValuePtr& otherFeatureValue = linkFeatureValues->at(k);
                            if (otherFeatureValue->feature != featureForV)
                            {
                            	unsigned int otherFeatureValueValuesSize = otherFeatureValue->values->size();
                                for (unsigned int l = 0; l < otherFeatureValueValuesSize && !linkHasToBeDestroyed; l++)
                                {
                                    if (otherFeatureValue->values->at(l) == removedValue)
                                    {
                                        linkHasToBeDestroyed = true;
                                    }
                                }
                            }
                        }
                    }
                }
                if (linkHasToBeDestroyed)
                {
                    linksToDestroy->push_back(link);
                }
            }
        }
    }
    return linksToDestroy;
}

ValueListPtr CS_RemoveStructuralFeatureValueActionActivation::getPotentialLinkEnds(const CS_ReferencePtr& context, const StructuralFeaturePtr& feature)
{
    // Retrieves all feature values for the context object for the given feature,
    // as well as all interaction point for these values
    ValueListPtr potentialLinkEnds(new ValueList());
    FeatureValuePtr featureValue = context->getFeatureValue(feature);
    for (const ValuePtr& v : *(featureValue->values))
    {
        potentialLinkEnds->push_back(v);
        if (CS_ReferencePtr valueReference = AS(CS_Reference, v))
        {
            // Add all interaction points associated with v
        	FeatureValueListPtr referentFeatureValues = valueReference->getFeatureValues();
        	unsigned int referentFeatureValuesSize = referentFeatureValues->size();
            for (unsigned int j = 0; j < referentFeatureValuesSize; j++)
            {
            	const FeatureValuePtr& featureValue = referentFeatureValues->at(j);
                if (IS(Port, featureValue->feature))
                {
                    const ValueListPtr& interactionPoints = featureValue->values;
                    for (const ValuePtr& interactionPoint : *interactionPoints)
                    {
                        potentialLinkEnds->push_back(interactionPoint);
                    }
                }
            }
        }
    }
    return potentialLinkEnds;
}
