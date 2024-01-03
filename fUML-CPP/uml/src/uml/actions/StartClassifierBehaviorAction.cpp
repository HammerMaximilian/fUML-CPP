/*
 * StartClassifierBehaviorAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <uml/actions/StartClassifierBehaviorAction.h>

void StartClassifierBehaviorAction::setObject(const InputPinPtr& object)
{
	Action::addInput(object);
	this->object = object;
} // setObject
