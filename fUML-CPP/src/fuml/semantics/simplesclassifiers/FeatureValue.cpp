/*
 * FeatureValue.cpp
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#include "FeatureValue.h"

#include "fuml/syntax/classification/StructuralFeature.h"
#include "fuml/semantics/values/Value.h"

using namespace fuml::semantics::simpleclassifiers;

bool FeatureValue::hasEqualValues(const std::shared_ptr<FeatureValue>& other)
{
	// Determine if this feature value has an equal set of values as another
	// feature value.
	// If the feature is ordered, then the values also have to be in the
	// same order.

	bool equal = true;

	if (this->values->size() != other->values->size())
	{
		equal = false;
	}
	else
	{
		if (this->feature->isOrdered)
		{
			unsigned int i = 1;
			while (equal && i <= this->values->size())
			{
				equal = this->values->at(i - 1)->equals(
						other->values->at(i - 1));
				i = i + 1;
			}
		}
		else
		{
			// Note: otherFeatureValues is used here solely as a holder for
			// a copy of the list of other values,
			// since the Java to UML mapping conventions do not allow
			// "remove" on a local list variable.

			std::shared_ptr<FeatureValue> otherFeatureValues(new FeatureValue());
			for (const std::shared_ptr<fuml::semantics::values::Value> value : *(other->values))
			{
				otherFeatureValues->values->push_back(value);
			}

			unsigned int i = 1;
			while (equal && i <= this->values->size())
			{
				bool matched = false;
				unsigned int j = 1;
				while (!matched && j <= otherFeatureValues->values->size())
				{
					if (this->values->at(i - 1)->equals(
							otherFeatureValues->values->at(j - 1)))
					{
						matched = true;
						otherFeatureValues->values->erase(otherFeatureValues->values->begin() + (j - 1));
					}
					j = j + 1;
				}

				equal = matched;
				i = i + 1;
			}
		}
	}

	return equal;
}

std::shared_ptr<FeatureValue> FeatureValue::copy()
{
	// Create a copy of this feature value.

	std::shared_ptr<FeatureValue> newValue(new FeatureValue());

	newValue->feature = this->feature;
	newValue->position = this->position;

	for (const std::shared_ptr<fuml::semantics::values::Value> value : *(this->values))
	{
		newValue->values->push_back(value->copy());
	}

	return newValue;
}
