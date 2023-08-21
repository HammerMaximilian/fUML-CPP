/*
 * InvocationAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "InvocationAction.h"

using namespace fuml::syntax::actions;

InvocationAction::~InvocationAction()
{
}

void InvocationAction::addArgument(const std::shared_ptr<InputPin>& argument)
{
	Action::addInput(argument);
	this->argument->push_back(argument);
} // addArgument
