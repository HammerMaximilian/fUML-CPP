/*
 * WriteVariableAction.cpp
 *
 *  Created on: 01.12.2025
 *      Author: maxs
 */

#include <uml/actions/WriteVariableAction.h>

WriteVariableAction::~WriteVariableAction()
{
}

void WriteVariableAction::setValue(const InputPinPtr& value)
{
	Action::addInput(value);
	this->value = value;
} // setValue
