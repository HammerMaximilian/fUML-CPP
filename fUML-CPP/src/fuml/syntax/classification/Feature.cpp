/*
 * Feature.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include "Feature.h"

using namespace fuml::syntax::classification;

Feature::~Feature()
{
}

void Feature::_addFeaturingClassifier(
		const std::shared_ptr<fuml::syntax::classification::Classifier>& featuringClassifier)
{
	this->featuringClassifier->push_back(featuringClassifier);
} // _addFeaturingClassifier
