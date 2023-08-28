/*
 * FIFOGetNextEventStrategy.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/commonbehavior/FIFOGetNextEventStrategy.h>

#include <fuml/semantics/commonbehavior/EventOccurrence.h>
#include <fuml/semantics/commonbehavior/ObjectActivation.h>

EventOccurrencePtr FIFOGetNextEventStrategy::getNextEvent(
		const ObjectActivationPtr& objectActivation)
{
	// Get the first event from the given event pool. The event is removed
	// from the pool.

	EventOccurrencePtr eventOccurrence = objectActivation->eventPool->at(0);
	objectActivation->eventPool->erase(objectActivation->eventPool->begin());
	return eventOccurrence;
} // getNextEvent
