/*
 * VariableAction.cpp
 *
 *  Created on: 01.12.2025
 *      Author: maxs
 */

#include <uml/actions/VariableAction.h>

VariableAction::~VariableAction()
{
}

void VariableAction::setVariable(const VariablePtr& variable)
{
	this->variable = variable;
} // setVariable
