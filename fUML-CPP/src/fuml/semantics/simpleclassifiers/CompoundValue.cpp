/*
 * CompoundValue.cpp
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#include <fuml/semantics/simpleclassifiers/CompoundValue.h>
#include <fuml/semantics/simpleclassifiers/FeatureValue.h>
#include <fuml/semantics/structuredclassifiers/Object_.h>
#include <fuml/semantics/structuredclassifiers/Reference.h>
#include <fuml/syntax/classification/Classifier.h>
#include <fuml/syntax/classification/StructuralFeature.h>

CompoundValue::~CompoundValue()
{
}

bool CompoundValue::equals(
		const ValuePtr& otherValue)
{
	// Test if this data value is equal to the otherValue.
	// To be equal, the otherValue must also be a compund value with the
	// same types and equal values for each feature.

	CompoundValuePtr otherCompoundValue = std::dynamic_pointer_cast<CompoundValue>(otherValue);

	bool isEqual = (otherCompoundValue != nullptr);

	if (isEqual)
	{

		isEqual = (Value::equals(otherValue))
					&& (otherCompoundValue->featureValues->size() == this->featureValues->size());

		unsigned int i = 1;
		unsigned int featureValuesSize = this->featureValues->size();
		while (isEqual && i <= featureValuesSize)
		{
			FeatureValuePtr thisFeatureValue = this->featureValues->at(i - 1);

			bool matched = false;
			unsigned int j = 1;
			unsigned int otherFeatureValuesSize = otherCompoundValue->featureValues->size();

			while (!matched && j <= otherFeatureValuesSize)
			{
				FeatureValuePtr otherFeatureValue = otherCompoundValue->featureValues->at(j - 1);

				if (thisFeatureValue->feature == otherFeatureValue->feature)
				{
					matched = thisFeatureValue->hasEqualValues(otherFeatureValue);
				}
				j = j + 1;
			}

			isEqual = matched;
			i = i + 1;
		}
	}

	return isEqual;
} // equals

ValuePtr CompoundValue::copy()
{
	// Create a new data value with the same featureValues as this data
	// value.

	CompoundValuePtr newValue = std::dynamic_pointer_cast<CompoundValue>(Value::copy());

	FeatureValueListPtr featureValues = this->featureValues;
	for (const FeatureValuePtr& featureValue : *featureValues) {
		newValue->featureValues->push_back(featureValue->copy());
	}

	return newValue;
} //copy

FeatureValuePtr CompoundValue::getFeatureValue(
		const StructuralFeaturePtr& feature)
{
	// Get the value(s) of the member of featureValues for the given
	// feature.

	FeatureValuePtr featureValue = nullptr;
	unsigned int i = 1;
	unsigned int featureValuesSize = this->featureValues->size();
	while (featureValue == nullptr && i <= featureValuesSize) {
		FeatureValuePtr thisFeatureValue = this->featureValues->at(i - 1);
		if (thisFeatureValue->feature == feature) {
			featureValue = thisFeatureValue;
		}
		i = i + 1;
	}

	return featureValue;
} // getFeatureValue

void CompoundValue::setFeatureValue(
		const StructuralFeaturePtr& feature, const ValueListPtr& values, int position)
{
	// Set the value(s) of the member of featureValues for the given
	// feature.

	FeatureValuePtr featureValue = this->getFeatureValue(feature);

	if (featureValue == nullptr) {
		featureValue.reset(new FeatureValue());
		this->featureValues->push_back(featureValue);
	}

	featureValue->feature = feature;
	featureValue->values = values;
	featureValue->position = position;
} // setFeatureValue

FeatureValueListPtr CompoundValue::getFeatureValues()
{
	// Return the feature values for this compound value.

	return this->featureValues;
} // getFeatureValues

std::string CompoundValue::toString()
{
	std::string buffer = "(";

	ClassifierListPtr types = this->getTypes();

	unsigned int i = 1;
	unsigned int typesSize = types->size();
	while (i <= typesSize)
	{
		if (i != 1)
		{
			buffer = buffer + " ";
		}
		buffer = buffer + types->at(i - 1)->name;
		i = i + 1;
	}

	for (const FeatureValuePtr& featureValue : *(this->featureValues))
	{
		buffer = buffer + "\n\t\t" + featureValue->feature->name + "["
				+ std::to_string(featureValue->position) + "]  =";

		for (const ValuePtr& value : *(featureValue->values))
		{
			ReferencePtr reference = std::dynamic_pointer_cast<Reference>(value);
			if (reference) {
				Object_Ptr object = reference->referent;
				buffer = buffer + " Reference to " + object->identifier + "(";
				types = object->getTypes();
				unsigned int n = 1;
				unsigned int typesSize = types->size();
				while (n <= typesSize) {
					if (n != 1) {
						buffer = buffer + " ";
					}
					buffer = buffer + types->at(n - 1)->name;
					n = n + 1;
				}
				buffer = buffer + ")";
			} else {
				buffer = buffer + " " + value->toString();
			}
		}
	}

	return buffer + ")";
} // toString




