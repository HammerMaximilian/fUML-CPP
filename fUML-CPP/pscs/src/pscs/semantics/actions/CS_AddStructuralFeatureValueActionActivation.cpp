/*
 * CS_AddStructuralFeatureValueActionActivation.cpp
 *
 *  Created on: 01.02.2024
 *      Author: maha6913
 */

#include <pscs/semantics/actions/CS_AddStructuralFeatureValueActionActivation.h>

#include <fuml/semantics/loci/ChoiceStrategy.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/FeatureValue.h>
#include <fuml/semantics/simpleclassifiers/UnlimitedNaturalValue.h>
#include <pscs/semantics/fwd.h>
#include <pscs/semantics/structuredclassifiers/CS_InteractionPoint.h>
#include <pscs/semantics/structuredclassifiers/CS_Link.h>
#include <pscs/semantics/structuredclassifiers/CS_Reference.h>
#include <uml/actions/AddStructuralFeatureValueAction.h>
#include <uml/structuredclassifiers/Port.h>

void CS_AddStructuralFeatureValueActionActivation::doAction()
{
    // If the feature is a port and the input value to be added is a
    // Reference,
    // Replaces this Reference by an InteractionPoint, and then behaves
    // as usual.
    // If the feature is not a port, behaves as usual
    AddStructuralFeatureValueActionPtr action = AS(AddStructuralFeatureValueAction, node);
    const StructuralFeaturePtr& feature = action->structuralFeature;
    if (!IS(Port, feature))
    {
        // Behaves as usual
        this->doActionDefault();
    }
    else
    {
        ValueListPtr inputValues = this->takeTokens(action->value);
        // NOTE: Multiplicity of the value input pin is required to be 1..1.
        const ValuePtr& inputValue = inputValues->at(0);
        if (ReferencePtr reference = AS(Reference, inputValue))
        {
            // First constructs an InteractionPoint from the inputValue
            CS_InteractionPointPtr interactionPoint(new CS_InteractionPoint());
            interactionPoint->referent = reference->referent;
            interactionPoint->definingPort = AS(Port, feature);
            // The value on action.object is necessarily instanceof
            // ReferenceToCompositeStructure (otherwise, the feature cannot
            // be a port)
            CS_ReferencePtr owner = AS(CS_Reference, this->takeTokens(action->object)->at(0));
            interactionPoint->owner = owner;
            // Then replaces the Reference by an InteractionPoint
            // in the inputValues
            inputValues->erase(inputValues->begin());
            inputValues->insert(inputValues->begin(), interactionPoint);
            // Finally concludes with usual fUML behavior of
            // AddStructuralFeatureValueAction (i.e., the usual behavior
            // when
            // the value on action.object pin is a StructuredValue)
            int insertAt = 0;
            if (action->insertAt != nullptr)
            {
                insertAt = (AS(UnlimitedNaturalValue, this->takeTokens(action->insertAt)->at(0)))->value;
            }
            if (action->isReplaceAll)
            {
                owner->setFeatureValue(feature, inputValues, 0);
            }
            else
            {
                FeatureValuePtr featureValue = owner->getFeatureValue(feature);
                if (featureValue->values->size() > 0 && insertAt == 0)
                {
                    // If there is no insertAt pin, then the structural
                    // feature must
                    // be unordered, and the insertion position is
                    // immaterial.
                    insertAt = (AS(ChoiceStrategy, this->getExecutionLocus()->factory->getStrategy("choice")))->choose(featureValue->values->size());
                }
                if (feature->isUnique)
                {
                    // Remove any existing value that duplicates the input
                    // value
                    int j = this->position(interactionPoint, featureValue->values, 1);
                    if (j > 0)
                    {
                        featureValue->values->erase(featureValue->values->begin() + (j - 1));
                        if (insertAt > 0 && j < insertAt)
                        {
                            insertAt--;
                        }
                    }
                }
                if (insertAt <= 0)
                {
                    // Note: insertAt = -1 indicates an unlimited value of
                    // "*"
                    featureValue->values->push_back(interactionPoint);
                }
                else
                {
                    featureValue->values->insert(featureValue->values->begin() + (insertAt - 1), interactionPoint);
                }
            }
            if (action->result != nullptr)
            {
                this->putToken(action->result, owner);
            }
        }
        else
        {
            // behaves as usual
            this->doActionDefault();
        }
    }
}

void CS_AddStructuralFeatureValueActionActivation::doActionDefault()
{
    // Get the values of the object and value input pins.
    // If the given feature is an association end, then create a link
    // between the object and value inputs.
    // Otherwise, if the object input is a structural value, then add a
    // value to the values for the feature.
    // If isReplaceAll is true, first remove all current matching links or
    // feature values.
    // If isReplaceAll is false and there is an insertAt pin, insert the
    // value at the appropriate position.
    // This operation captures same semantics as fUML
    // AddStructuralFeatureValueActionActivation.doAction(), except that
    // when the feature is an association end, a CS_Link will be created instead
    // of a Link
	AddStructuralFeatureValueActionPtr action = AS(AddStructuralFeatureValueAction, node);
	const StructuralFeaturePtr& feature = action->structuralFeature;
    AssociationPtr association = this->getAssociation(feature);
    ValuePtr value = this->takeTokens(action->object)->at(0);
    ValueListPtr inputValues = this->takeTokens(action->value);
    // NOTE: Multiplicity of the value input pin is required to be 1..1.
    const ValuePtr& inputValue = inputValues->at(0);
    int insertAt = 0;
    if (action->insertAt != nullptr)
    {
    	insertAt = (AS(UnlimitedNaturalValue, this->takeTokens(action->insertAt)->at(0)))->value;
    }
    if (association != nullptr)
    {
        LinkListPtr links = this->getMatchingLinks(association, feature, value);
        PropertyPtr oppositeEnd = this->getOppositeEnd(association, feature);
        int position = 0;
        if (oppositeEnd->isOrdered)
        {
            position = -1;
        }
        if (action->isReplaceAll)
        {
            for (const LinkPtr& link : *links)
            {
                link->destroy();
            }
        }
        else if (feature->isUnique)
        {
            for (const LinkPtr& link : *links)
            {
                FeatureValuePtr featureValue = link->getFeatureValue(feature);
                if (featureValue->values->at(0)->equals(inputValue))
                {
                    position = link->getFeatureValue(oppositeEnd)->position;
                    if (insertAt > 0 && featureValue->position < insertAt)
                    {
                        insertAt--;
                    }
                    link->destroy();
                }
            }
        }
        CS_LinkPtr newLink(new CS_Link());
        newLink->type = association;
        // This is necessary when setting a feature value with an insertAt
        // position
        newLink->locus = this->getExecutionLocus();
        newLink->setFeatureValue(feature, inputValues, insertAt);
        ValueListPtr oppositeValues(new ValueList());
        oppositeValues->push_back(value);
        newLink->setFeatureValue(oppositeEnd, oppositeValues, position);
        newLink->locus->add(newLink);
    }
    else if (StructuredValuePtr structuredValue = AS(StructuredValue, value)) {
        if (action->isReplaceAll)
        {
            structuredValue->setFeatureValue(feature, inputValues, 0);
        }
        else
        {
            FeatureValuePtr featureValue = structuredValue->getFeatureValue(feature);
            if (featureValue->values->size() > 0 && insertAt == 0)
            {
                // *** If there is no insertAt pin, then the structural
                // feature must be unordered, and the insertion position is
                // immaterial. ***
            	insertAt = (AS(ChoiceStrategy, this->getExecutionLocus()->factory->getStrategy("choice")))->choose(featureValue->values->size());
            }
            if (feature->isUnique)
            {
                // Remove any existing value that duplicates the input value
                int j = this->position(inputValue, featureValue->values, 1);
                if (j > 0)
                {
                    featureValue->values->erase(featureValue->values->begin() + (j - 1));
                    if (insertAt > 0 && j < insertAt)
                    {
                        insertAt--;
                    }
                }
            }
            if (insertAt <= 0)
            { // Note: insertAt = -1 indicates an
              // unlimited value of "*"
                featureValue->values->push_back(inputValue);
            }
            else
            {
                featureValue->values->insert(featureValue->values->begin() + (insertAt - 1), inputValue);
            }
        }
    }
    if (action->result != nullptr)
    {
        this->putToken(action->result, value);
    }
}
