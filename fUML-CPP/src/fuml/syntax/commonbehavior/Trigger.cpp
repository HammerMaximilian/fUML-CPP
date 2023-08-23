/*
 * Trigger.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <Trigger.h>

using namespace fuml::syntax::commonbehavior;

void Trigger::setEvent(const std::shared_ptr<fuml::syntax::commonbehavior::Event>& event)
{
	this->event = event;
} // setEvent
