/*
 * AddVariableValueAction.cpp
 *
 *  Created on: 01.12.2025
 *      Author: maxs
 */

#include <uml/actions/AddVariableValueAction.h>

void AddVariableValueAction::setIsReplaceAll(bool isReplaceAll)
{
	this->isReplaceAll = isReplaceAll;
}

void AddVariableValueAction::setInsertAt(const InputPinPtr& insertAt)
{
	Action::addInput(insertAt);
	this->insertAt = insertAt;
} // setInsertAt
