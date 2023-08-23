/*
 * CallAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/CallAction.h>
#include <vector>

using namespace fuml::syntax::actions;

CallAction::~CallAction()
{
}

void CallAction::addResult(const std::shared_ptr<OutputPin>& result)
{
	Action::addOutput(result);
	this->result->push_back(result);
} // addResult
