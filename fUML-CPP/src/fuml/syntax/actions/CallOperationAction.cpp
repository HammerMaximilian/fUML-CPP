/*
 * CallOperationAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/CallOperationAction.h>

void CallOperationAction::setTarget(const InputPinPtr& target)
{
	Action::addInput(target);
	this->target = target;
}

void CallOperationAction::setOperation(
	const OperationPtr& operation)
{
	this->operation = operation;
} // setOperation
