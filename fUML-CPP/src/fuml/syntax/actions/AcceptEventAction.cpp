/*
 * AcceptEventAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/AcceptEventAction.h>

void AcceptEventAction::setIsUnmarshall(bool isUnmarshall)
{
	this->isUnmarshall = isUnmarshall;
} // setIsUnmarshall

void AcceptEventAction::addTrigger(
	const TriggerPtr& trigger)
{
	this->trigger->push_back(trigger);
} // addTrigger

void AcceptEventAction::addResult(const OutputPinPtr& result)
{
	Action::addOutput(result);
	this->result->push_back(result);
} // addResult
