/*
 * CallOperationAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/CallOperationAction.h>

using namespace fuml::syntax::actions;

void CallOperationAction::setTarget(const std::shared_ptr<InputPin>& target)
{
	Action::addInput(target);
	this->target = target;
}

void CallOperationAction::setOperation(
	const std::shared_ptr<fuml::syntax::classification::Operation>& operation)
{
	this->operation = operation;
} // setOperation
