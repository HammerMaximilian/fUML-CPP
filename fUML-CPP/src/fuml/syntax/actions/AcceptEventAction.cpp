/*
 * AcceptEventAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "AcceptEventAction.h"

using namespace fuml::syntax::actions;

void AcceptEventAction::setIsUnmarshall(bool isUnmarshall)
{
	this->isUnmarshall = isUnmarshall;
} // setIsUnmarshall

void AcceptEventAction::addTrigger(
	const std::shared_ptr<fuml::syntax::commonbehavior::Trigger>& trigger)
{
	this->trigger->push_back(trigger);
} // addTrigger

void AcceptEventAction::addResult(const std::shared_ptr<fuml::syntax::actions::OutputPin>& result)
{
	Action::addOutput(result);
	this->result->push_back(result);
} // addResult
