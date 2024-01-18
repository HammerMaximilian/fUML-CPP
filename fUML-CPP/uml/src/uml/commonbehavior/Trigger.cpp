/*
 * Trigger.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <uml/commonbehavior/Trigger.h>

void Trigger::setEvent(const EventPtr& event)
{
	this->event = event;
} // setEvent

void Trigger::addPort(const PortPtr& port)
{
	this->port->push_back(port);
}
