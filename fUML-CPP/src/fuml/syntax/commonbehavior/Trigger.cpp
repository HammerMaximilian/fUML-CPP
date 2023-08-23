/*
 * Trigger.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/commonbehavior/Trigger.h>

void Trigger::setEvent(const EventPtr& event)
{
	this->event = event;
} // setEvent
