/*
 * TestIdentityAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "TestIdentityAction.h"

using namespace fuml::syntax::actions;

void TestIdentityAction::setFirst(const std::shared_ptr<InputPin>& first)
{
	Action::addInput(first);
	this->first = first;
} // setFirst

void TestIdentityAction::setSecond(const std::shared_ptr<InputPin>& second)
{
	Action::addInput(second);
	this->second = second;
} // setSecond

void TestIdentityAction::setResult(const std::shared_ptr<OutputPin>& result)
{
	Action::addOutput(result);
	this->result = result;
} // setResult
