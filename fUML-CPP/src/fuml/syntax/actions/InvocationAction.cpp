/*
 * InvocationAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/InvocationAction.h>

InvocationAction::~InvocationAction()
{
}

void InvocationAction::addArgument(const InputPinPtr& argument)
{
	Action::addInput(argument);
	this->argument->push_back(argument);
} // addArgument
