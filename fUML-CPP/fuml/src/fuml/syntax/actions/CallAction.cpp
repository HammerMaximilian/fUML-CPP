/*
 * CallAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/CallAction.h>

CallAction::~CallAction()
{
}

void CallAction::addResult(const OutputPinPtr& result)
{
	Action::addOutput(result);
	this->result->push_back(result);
} // addResult
