/*
 * AddStructuralFeatureValueAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "AddStructuralFeatureValueAction.h"

using namespace fuml::syntax::actions;

void AddStructuralFeatureValueAction::setIsReplaceAll(bool isReplaceAll)
{
	this->isReplaceAll = isReplaceAll;
} // setIsReplaceAll

void AddStructuralFeatureValueAction::setInsertAt(const std::shared_ptr<InputPin>& insertAt)
{
	if(insertAt != nullptr)
	{
		Action::addInput(insertAt);
	}
	this->insertAt = insertAt;
} // setInsertAt
