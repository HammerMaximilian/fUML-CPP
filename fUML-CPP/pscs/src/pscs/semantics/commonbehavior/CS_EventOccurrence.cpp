/*
 * CS_EventOccurrence.cpp
 *
 *  Created on: 01.02.2024
 *      Author: maha6913
 */

#include <pscs/semantics/commonbehavior/CS_EventOccurrence.h>

#include <pscs/semantics/structuredclassifiers/CS_InteractionPoint.h>
#include <pscs/semantics/structuredclassifiers/CS_Reference.h>
#include <uml/commonbehavior/Trigger.h>

void CS_EventOccurrence::setThisCS_EventOccurrencePtr(CS_EventOccurrencePtr_w thisCS_EventOccurrencePtr)
{
	this->thisCS_EventOccurrencePtr = thisCS_EventOccurrencePtr;
	EventOccurrence::setThisEventOccurrencePtr(thisCS_EventOccurrencePtr);
}

bool CS_EventOccurrence::match(const TriggerPtr& trigger)
{
	// If the trigger references ports then to match this latter it is required that
	// 1] the interaction point is instance of port referenced by the trigger
	// 2] the referenced event occurrence match operation returns true.
	// If the trigger does not reference ports then the behavior is the same than for fUML.
	bool matches = false;
	if (!trigger->port->empty())
	{
		unsigned int i = 1;
		unsigned int portCount = trigger->port->size();
		while (!matches && i <= portCount)
		{
			if (this->interactionPoint->definingPort == trigger->port->at(i - 1))
			{
				matches = true;
			}
			i++;
		}
		if (matches)
		{
			matches = this->wrappedEventOccurrence->match(trigger);
		}
	}
	else
	{
		matches = this->wrappedEventOccurrence->match(trigger);
	}
	return matches;
}

void CS_EventOccurrence::doSend()
{
	// If the specified target is a CS_Reference and the propagation must be done
	// to the environment, then the operation sendOut(EventOccurrence, Port) is called
	// and make the propagation to continue.
	// If the specified target is a CS_Reference but the propagation must be done to
	// the internals then the operation sendIn(EventOccurrence, Port) is called.
	// In the case were the target is not a CS_EventOccurrence then send(EventOccurence)
	// is called.
	if (CS_ReferencePtr reference = std::dynamic_pointer_cast<CS_Reference>(target))
	{
		if (this->propagationInward == true)
		{
			reference->sendIn(thisCS_EventOccurrencePtr.lock(), onPort);
		}
		else
		{
			reference->sendOut(thisCS_EventOccurrencePtr.lock(), onPort);
		}
	}
	else
	{
		EventOccurrence::doSend();
	}
}

void CS_EventOccurrence::sendInTo(const CS_ReferencePtr& target, const PortPtr& port)
{
	// Propagate the sending of the event occurrence to the internals
	this->onPort = port;
	this->propagationInward = true;
	this->sendTo(target);
}

void CS_EventOccurrence::sendOutTo(const CS_ReferencePtr& target, const PortPtr& port)
{
	// Propagate the sending of the event occurrence to the environment
	this->onPort = port;
	this->propagationInward = false;
	this->sendTo(target);
}

ParameterValueListPtr CS_EventOccurrence::getParameterValues(const EventPtr& event_)
{
	// Return the parametric data of the referenced event occurrence
	return this->wrappedEventOccurrence->getParameterValues(event_);
}
