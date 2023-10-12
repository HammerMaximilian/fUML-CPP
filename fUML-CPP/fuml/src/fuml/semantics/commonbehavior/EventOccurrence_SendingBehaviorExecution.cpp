/*
 * EventOccurrence_SendingBehaviorExecution.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/commonbehavior/EventOccurrence_SendingBehaviorExecution.h>

#include <fuml/semantics/commonbehavior/EventOccurrence.h>
#include <fuml/semantics/commonbehavior/ExecutionQueue.h>
#include <fuml/semantics/structuredclassifiers/Reference.h>
#include <sstream>

EventOccurrence_SendingBehaviorExecution::EventOccurrence_SendingBehaviorExecution(const EventOccurrencePtr& self)
{
	this->self = self;
}

void EventOccurrence_SendingBehaviorExecution::setThisEventOccurrence_SendingBehaviorExecution(
	std::weak_ptr<EventOccurrence_SendingBehaviorExecution> thisEventOccurrence_SendingBehaviorExecutionPtr)
{
	this->thisEventOccurrence_SendingBehaviorExecutionPtr = thisEventOccurrence_SendingBehaviorExecutionPtr;
	Object_::setThisObject_Ptr(thisEventOccurrence_SendingBehaviorExecutionPtr);
}

void EventOccurrence_SendingBehaviorExecution::_startObjectBehavior()
{
	this->context = self->target->referent;
	ExecutionQueue::enqueue(this->thisEventOccurrence_SendingBehaviorExecutionPtr.lock());
} // _startObjectBehavior

void EventOccurrence_SendingBehaviorExecution::execute()
{
	this->self->doSend();
} // execute

ValuePtr EventOccurrence_SendingBehaviorExecution::new_()
{
	EventOccurrence_SendingBehaviorExecutionPtr newValue(new EventOccurrence_SendingBehaviorExecution(this->self));
	newValue->setThisEventOccurrence_SendingBehaviorExecution(newValue);
	return newValue;
} // new_

std::string EventOccurrence_SendingBehaviorExecution::toString()
{
	std::stringstream sstream;
	sstream << this->self;
	std::string selfString = sstream.str();
	return "SendingBehaviorExecution(" + selfString + ")";
} // toString
