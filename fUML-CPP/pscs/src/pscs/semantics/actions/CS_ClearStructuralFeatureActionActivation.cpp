/*
 * CS_ClearStructuralFeatureActionActivation.cpp
 *
 *  Created on: 01.02.2024
 *      Author: maha6913
 */

#include <pscs/semantics/actions/CS_ClearStructuralFeatureActionActivation.h>

#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/FeatureValue.h>
#include <pscs/semantics/fwd.h>
#include <pscs/semantics/structuredclassifiers/CS_InteractionPoint.h>
#include <pscs/semantics/structuredclassifiers/CS_Link.h>
#include <pscs/semantics/structuredclassifiers/CS_Object.h>
#include <pscs/semantics/structuredclassifiers/CS_Reference.h>
#include <uml/actions/ClearStructuralFeatureAction.h>
#include <uml/structuredclassifiers/Port.h>

void CS_ClearStructuralFeatureActionActivation::doAction()
{
    // Get the value of the object input pin.
    // If the given feature is an association end, then
    // destroy all links that have the object input on the opposite end.
    // Otherwise, if the object input is a structured value, then
    // set the appropriate feature of the input value to be empty.
    ClearStructuralFeatureActionPtr action = AS(ClearStructuralFeatureAction, this->node);
    const StructuralFeaturePtr& feature = action->structuralFeature;
    AssociationPtr association = this->getAssociation(feature);
    ValuePtr value = this->takeTokens(action->object)->at(0);
    if (association != nullptr)
    {
        LinkListPtr links = this->getMatchingLinks(association, feature, value);
        for (const LinkPtr& link : *links)
        {
            link->destroy();
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
        else
        {
            // extension to fUML
            CS_LinkListPtr linksToDestroy = this->getLinksToDestroy(structuredValue, feature);
            for(const CS_LinkPtr& cS_Link : *linksToDestroy)
            {
                cS_Link->destroy();
            }
            //
        }
        structuredValue->setFeatureValue(action->structuralFeature, ValueListPtr(new ValueList()), 0);
    }
    if (action->result != nullptr)
    {
        this->putToken(action->result, value);
    }
}

CS_LinkListPtr CS_ClearStructuralFeatureActionActivation::getLinksToDestroy(const StructuredValuePtr& value, const StructuralFeaturePtr& feature)
{
    CS_LinkListPtr linksToDestroy(new CS_LinkList());
    if (CS_ReferencePtr context = AS(CS_Reference, value))
    {
        // Retrieves the feature values for the structural feature associated with this
        // action,
        // in the context of this reference
        FeatureValuePtr featureValue = context->getFeatureValue(feature);
        if (IS(Port, feature))
        {
            // all values are interaction points
            // any link targeting this interaction point must be destroyed
        	const ValueListPtr& values = featureValue->values;
            for (const ValuePtr& value : *values)
            {
                CS_InteractionPointPtr interactionPoint = AS(CS_InteractionPoint, value);
                CS_LinkListPtr connectorInstances = context->compositeReferent->getLinks(interactionPoint);
                for (const CS_LinkPtr& link : *connectorInstances)
                {
                    linksToDestroy->push_back(link);
                }
            }
        }
        else
        { // feature is an attribute
          // Retrieve all potential link ends,
          // separating potential link ends corresponding to the given feature,
          // and potential link ends corresponding to other features.
          // By "potential link ends", we refer to the values of a given feature,
          // as well as interaction points associated with this value, if any.
            ValueListPtr allValuesForFeature(new ValueList());
            ValueListPtr allOtherValues(new ValueList());
            FeatureValueListPtr featureValues = context->referent->getFeatureValues();
            for (const FeatureValuePtr featureValue : *featureValues)
            {
                const StructuralFeaturePtr& currentFeature = featureValue->feature;
                ValueListPtr values = this->getPotentialLinkEnds(context, currentFeature);
                for (const ValuePtr& v : *values)
                {
                    if (currentFeature != feature)
                    {
                        allOtherValues->push_back(v);
                    }
                    else
                    {
                        allValuesForFeature->push_back(v);
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
            // Retrieves links representing connector instances in the context object
            for (const CS_LinkPtr& link : *allLinks)
            {
                bool linkHasToBeDestroyed = false;
                unsigned int allValuesForFeatureSize = allValuesForFeature->size();
                for (unsigned int j = 0; j < allValuesForFeatureSize && !linkHasToBeDestroyed; j++)
                {
                    const ValuePtr& v = allValuesForFeature->at(j);
                    StructuralFeaturePtr featureForV = link->getFeature(v);
                    if (featureForV != nullptr)
                    {
                        // Check if feature values of this link for other features
                        // contains elements identified in allOtherValue
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
                                	unsigned int allOtherValuesSize = allOtherValues->size();
                                    for (unsigned int m = 0; m < allOtherValuesSize && !linkHasToBeDestroyed; m++)
                                    {
                                        if (otherFeatureValue->values->at(l) == allOtherValues->at(m))
                                        {
                                            linkHasToBeDestroyed = true;
                                        }
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

ValueListPtr CS_ClearStructuralFeatureActionActivation::getPotentialLinkEnds(const CS_ReferencePtr& context, const StructuralFeaturePtr& feature)
{
    // Retrieves all feature values for the context object for the given feature,
    // as well as all interaction point for these values
    ValueListPtr potentialLinkEnds(new ValueList());
    FeatureValuePtr featureValue = context->getFeatureValue(feature);
    const ValueListPtr& values = featureValue->values;
    for (const ValuePtr& v : *values)
    {
        potentialLinkEnds->push_back(v);
        if (CS_ReferencePtr cS_Reference = AS(CS_Reference, v))
        {
            // add all interaction points associated with v
        	FeatureValueListPtr referentFeatureValues = cS_Reference->referent->getFeatureValues();
            for (const FeatureValuePtr& featureValue : *referentFeatureValues)
            {
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
