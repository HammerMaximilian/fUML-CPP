/*
 * AddStructuralFeatureValueActionActivation.cpp
 *
 *  Created on: 29.08.2023
 *      Author: maha6913
 */

#include <fuml/semantics/actions/AddStructuralFeatureValueActionActivation.h>

#include <fuml/semantics/loci/ChoiceStrategy.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/FeatureValue.h>
#include <fuml/semantics/simpleclassifiers/UnlimitedNaturalValue.h>
#include <fuml/semantics/structuredclassifiers/Link.h>
#include <fuml/semantics/structuredclassifiers/Reference.h>
#include <uml/actions/AddStructuralFeatureValueAction.h>
#include <uml/classification/Property.h>
#include <uml/structuredclassifiers/Association.h>

void AddStructuralFeatureValueActionActivation::doAction()
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

	AddStructuralFeatureValueActionPtr action = AS(AddStructuralFeatureValueAction, this->node);
	StructuralFeaturePtr feature = action->structuralFeature;
	AssociationPtr association = this->getAssociation(feature);

	ValuePtr value = this->takeTokens(action->object)->at(0);
	ValueListPtr inputValues = this->takeTokens(action->value);

	// NOTE: Multiplicity of the value input pin is required to be 1..1.
	ValuePtr inputValue = inputValues->at(0);

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
			position = this->getMatchingLinks(association, oppositeEnd, inputValue)->size() + 1;
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
			bool destroyed = false;
			for (const LinkPtr& link : *links)
			{
				FeatureValuePtr featureValue = link->getFeatureValue(feature);
				if (featureValue->values->at(0)->equals(inputValue))
				{
					position = link->getFeatureValue(oppositeEnd)->position;
					link->destroy();
					destroyed = true;
				}
				if (destroyed)
					break;
			}
		}

		LinkPtr newLink(new Link());
		newLink->type = association;

		newLink->setFeatureValue(feature, inputValues, insertAt);

		ValueListPtr oppositeValues(new ValueList());
		oppositeValues->push_back(value);
		newLink->setFeatureValue(oppositeEnd, oppositeValues, position);

		newLink->addTo(this->getExecutionLocus());

	}
	else
	{
		StructuredValuePtr structuredValue = AS(StructuredValue, value);
		if (structuredValue)
		{
			ReferencePtr reference = AS(Reference, structuredValue);

			// If the value is a data value, then it must be copied before
			// any change is made.
			if (!(reference))
			{
				value = value->copy();
			}

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
					insertAt = (AS(ChoiceStrategy,
						this->getExecutionLocus()->factory->getStrategy("choice")))->choose(
						featureValue->values->size());
				}

				if (feature->isUnique)
				{
					// Remove any existing value that duplicates the input value
					int j = position(inputValue, featureValue->values, 1);
					if (j > 0)
					{
						featureValue->values->erase(featureValue->values->begin() + (j - 1));
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
	}

	if (action->result != nullptr)
	{
		this->putToken(action->result, value);
	}
} // doAction
