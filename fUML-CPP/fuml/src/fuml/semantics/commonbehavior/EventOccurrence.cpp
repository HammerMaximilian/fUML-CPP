/*
 * EventOccurrence.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/commonbehavior/EventOccurrence.h>

#include <fuml/semantics/commonbehavior/EventOccurrence_SendingBehaviorExecution.h>
#include <fuml/semantics/structuredclassifiers/Reference.h>

EventOccurrence::~EventOccurrence()
{
}

void EventOccurrence::setThisEventOccurrencePtr(EventOccurrencePtr_w thisEventOccurrencePtr)
{
	this->thisEventOccurrencePtr = thisEventOccurrencePtr;
	this->behavior.reset(new EventOccurrence_SendingBehaviorExecution(this->thisEventOccurrencePtr.lock()));
}

void EventOccurrence::sendTo(const ReferencePtr& target)
{
	// Set the target reference and start the SendingBehavior, which
	// will send this event occurrence to the target.

	this->target = target;
	this->_startObjectBehavior();
} // sendTo

bool EventOccurrence::matchAny(const TriggerListPtr& triggers)
{
	// Check that at least one of the given triggers is matched by this
	// event occurrence.

	bool matches = false;
	unsigned int i = 1;
	unsigned int triggersSize = triggers->size();
	while (!matches && i <= triggersSize)
	{
		if (this->match(triggers->at(i - 1)))
		{
			matches = true;
		}
		i = i + 1;
	}
	return matches;
} // matchAny

void EventOccurrence::doSend()
{
	// Send this event occurrence to the target.

	this->target->send(this->thisEventOccurrencePtr.lock());
} // doSend

void EventOccurrence::_startObjectBehavior()
{
	this->behavior->_startObjectBehavior();
} // _startObjectBehavior
