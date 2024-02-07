/*
 * CS_Link.cpp
 *
 *  Created on: 30.01.2024
 *      Author: maha6913
 */

#include <pscs/semantics/structuredclassifiers/CS_Link.h>

#include <fuml/semantics/simpleclassifiers/FeatureValue.h>
#include <pscs/semantics/fwd.h>

bool CS_Link::hasValueForAFeature(const ValuePtr& value)
{
	// Returns true if the given value object is used as a value for a FeatureValue
	// of this link
	return this->getFeature(value) == nullptr;
}

StructuralFeaturePtr CS_Link::getFeature(const ValuePtr& value)
{
	FeatureValueListPtr allFeatureValues = this->getFeatureValues();
	unsigned int i = 1;
	StructuralFeaturePtr feature = nullptr;
	unsigned int allFeatureValuesSize = allFeatureValues->size();
	while (i <= allFeatureValuesSize && feature == nullptr)
	{
		const FeatureValuePtr& featureValue = allFeatureValues->at(i - 1);
		if (not featureValue->values->size() && featureValue->values->at(0) == value)
		{
			feature = featureValue->feature;
		}
		i++;
	}
	return feature;
}
