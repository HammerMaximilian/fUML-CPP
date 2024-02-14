/*
 * CS_CallEventExecution.cpp
 *
 *  Created on: 01.02.2024
 *      Author: maha6913
 */

#include <pscs/semantics/commonbehavior/CS_CallEventExecution.h>

#include <pscs/semantics/commonbehavior/CS_EventOccurrence.h>

EventOccurrencePtr CS_CallEventExecution::createEventOccurrence()
{
	// Wrap the created event occurrence within a CS_EventOccurrence which
	// references the behavior port on which the call was dispatched.
	CS_EventOccurrencePtr wrappingEventOccurrence(new CS_EventOccurrence());
	wrappingEventOccurrence->setThisCS_EventOccurrencePtr(wrappingEventOccurrence);
	wrappingEventOccurrence->interactionPoint = this->interactionPoint;
	wrappingEventOccurrence->wrappedEventOccurrence = CallEventExecution::createEventOccurrence();

	return wrappingEventOccurrence;
}

ValuePtr CS_CallEventExecution::new_()
{
	// Create a new call event execution.
	return CS_CallEventExecutionPtr(new CS_CallEventExecution());
}

ValuePtr CS_CallEventExecution::copy()
{
	// Create a new call event execution that is a copy of this execution, no
	// referenced interaction point.
	CS_CallEventExecutionPtr copy = std::dynamic_pointer_cast<CS_CallEventExecution>(CallEventExecution::copy());
	copy->interactionPoint = nullptr;
	return copy;
}
