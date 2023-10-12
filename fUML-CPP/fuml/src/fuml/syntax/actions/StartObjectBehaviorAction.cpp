/*
 * StartObjectBehaviorAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/StartObjectBehaviorAction.h>

void StartObjectBehaviorAction::setObject(const InputPinPtr& object)
{
	Action::addInput(object);
	this->object = object;
} // setObject
