/*
 * Feature.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/classification/Feature.h>

Feature::~Feature()
{
}

void Feature::_addFeaturingClassifier(const ClassifierPtr& featuringClassifier)
{
	this->featuringClassifier->push_back(featuringClassifier);
} // _addFeaturingClassifier
