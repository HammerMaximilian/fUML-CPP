/*
 * RemoveVariableValueAction.cpp
 *
 *  Created on: 01.12.2025
 *      Author: maxs
 */

#include <uml/actions/RemoveVariableValueAction.h>

void RemoveVariableValueAction::setIsRemoveDuplicates(bool isRemoveDuplicates)
{
	this->isRemoveDuplicates = isRemoveDuplicates;
}

void RemoveVariableValueAction::setRemoveAt(const InputPinPtr& removeAt)
{
	Action::addInput(removeAt);
	this->removeAt = removeAt;
} // setRemoveAt
