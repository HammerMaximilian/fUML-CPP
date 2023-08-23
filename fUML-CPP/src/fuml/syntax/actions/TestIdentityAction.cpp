/*
 * TestIdentityAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/TestIdentityAction.h>

void TestIdentityAction::setFirst(const InputPinPtr& first)
{
	Action::addInput(first);
	this->first = first;
} // setFirst

void TestIdentityAction::setSecond(const InputPinPtr& second)
{
	Action::addInput(second);
	this->second = second;
} // setSecond

void TestIdentityAction::setResult(const OutputPinPtr& result)
{
	Action::addOutput(result);
	this->result = result;
} // setResult
