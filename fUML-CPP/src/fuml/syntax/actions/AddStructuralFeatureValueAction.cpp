/*
 * AddStructuralFeatureValueAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/AddStructuralFeatureValueAction.h>

void AddStructuralFeatureValueAction::setIsReplaceAll(bool isReplaceAll)
{
	this->isReplaceAll = isReplaceAll;
} // setIsReplaceAll

void AddStructuralFeatureValueAction::setInsertAt(const InputPinPtr& insertAt)
{
	if(insertAt != nullptr)
	{
		Action::addInput(insertAt);
	}
	this->insertAt = insertAt;
} // setInsertAt
