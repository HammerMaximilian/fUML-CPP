/*
 * RemoveStructuralFeatureValueActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/RemoveStructuralFeatureValueActionActivation.h>

#include <fuml/semantics/loci/ChoiceStrategy.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/FeatureValue.h>
#include <fuml/semantics/simpleclassifiers/UnlimitedNaturalValue.h>
#include <fuml/semantics/structuredclassifiers/Link.h>
#include <fuml/semantics/structuredclassifiers/Reference.h>
#include <fuml/syntax/actions/RemoveStructuralFeatureValueAction.h>
#include <UMLPrimitiveTypes/intList.h>

void RemoveStructuralFeatureValueActionActivation::doAction()
{
	// Get the values of the object and value input pins.
	// If the given feature is an association end, then destroy any matching
	// links.
	// Otherwise, if the object input is a structural value, remove values
	// from the given feature.
	// If isRemoveDuplicates is true, then destroy all current matching
	// links or remove all values equal to the input value.
	// If isRemoveDuplicates is false and there is no removeAt input pin,
	// remove any one feature value equal to the input value (if there are
	// any that are equal).
	// If isRemoveDuplicates is false, and there is a removeAt input pin
	// remove the feature value at that position.

	RemoveStructuralFeatureValueActionPtr action = std::dynamic_pointer_cast<RemoveStructuralFeatureValueAction>(
		this->node);
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
		removeAt = std::dynamic_pointer_cast<UnlimitedNaturalValue>(this->takeTokens(action->removeAt)->at(0))->value;
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
			// non-deterministically choose one. ***
			if (links->size() > 0)
			{
				int i = std::dynamic_pointer_cast<ChoiceStrategy>(
					this->getExecutionLocus()->factory->getStrategy("choice"))->choose(links->size());
				links->at(i - 1)->destroy();
			}

		}
		else
		{
			bool notFound = true;
			for (const LinkPtr& link : *links)
			{
				if (link->getFeatureValue(feature)->position == removeAt)
				{
					notFound = false;
					link->destroy();
				}
				if (!notFound)
					break;
			}
		}

	}
	else
	{
		StructuredValuePtr structuredValue = std::dynamic_pointer_cast<StructuredValue>(value);

		if (structuredValue)
		{

			ReferencePtr reference = std::dynamic_pointer_cast<Reference>(value);

			// If the value is a data value, then it must be copied before
			// any change is made.
			if (!reference)
			{
				value = value->copy();
			}

			FeatureValuePtr featureValue = structuredValue->getFeatureValue(action->structuralFeature);

			if (action->isRemoveDuplicates)
			{
				int j = this->position(inputValue, featureValue->values, 1);
				while (j > 0)
				{
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
					// *** Nondeterministically choose which value to remove.
					// ***
					int k = std::dynamic_pointer_cast<ChoiceStrategy>(
						this->getExecutionLocus()->factory->getStrategy("choice"))->choose(positions.size());
					featureValue->values->erase(featureValue->values->begin() + positions.at(k - 1) - 1);
				}
			}
			else
			{
				if (featureValue->values->size() >= (unsigned int) removeAt)
				{
					featureValue->values->erase(featureValue->values->begin() + (removeAt - 1));
				}
			}
		}
	}

	if (action->result != nullptr)
	{
		this->putToken(action->result, value);
	}

} // doAction
