/*
 * ReadVariableAction.cpp
 *
 *  Created on: 01.12.2025
 *      Author: maxs
 */

#include <uml/actions/ReadVariableAction.h>

void ReadVariableAction::setResult(const OutputPinPtr& result)
{
	Action::addOutput(result);
	this->result = result;
} // setResult
