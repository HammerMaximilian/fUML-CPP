/*
 * RemoveStructuralFeatureValueAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/RemoveStructuralFeatureValueAction.h>

using namespace fuml::syntax::actions;

void RemoveStructuralFeatureValueAction::setIsRemoveDuplicates(bool isRemoveDuplicates)
{
	this->isRemoveDuplicates = isRemoveDuplicates;
} // setIsRemoveDuplicates

void RemoveStructuralFeatureValueAction::setRemoveAt(const std::shared_ptr<InputPin>& removeAt)
{
	if(removeAt != nullptr)
	{
		Action::addInput(removeAt);
	}
	this->removeAt = removeAt;
} // setRemoveAt
