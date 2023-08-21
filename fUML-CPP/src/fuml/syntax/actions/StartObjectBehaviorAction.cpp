/*
 * StartObjectBehaviorAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "StartObjectBehaviorAction.h"

using namespace fuml::syntax::actions;

void StartObjectBehaviorAction::setObject(const std::shared_ptr<InputPin>& object)
{
	Action::addInput(object);
	this->object = object;
} // setObject
