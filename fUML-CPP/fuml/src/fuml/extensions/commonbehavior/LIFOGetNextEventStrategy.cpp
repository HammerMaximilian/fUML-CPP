/*
 * LIFOGetNextEventStrategy.cpp
 *
 *  Created on: 08.01.2024
 *      Author: Maximilian
 */

#include <fuml/extensions/commonbehavior/LIFOGetNextEventStrategy.h>

#include <fuml/semantics/commonbehavior/ObjectActivation.h>

using namespace fuml::extensions::commonbehavior;

EventOccurrencePtr LIFOGetNextEventStrategy::getNextEvent(const ObjectActivationPtr& objectActivation)
{
	// Get the last event from the given event pool. The event is removed
	// from the pool.

	EventOccurrencePtr eventOccurrence = objectActivation->eventPool->back();
	objectActivation->eventPool->pop_back();
	return eventOccurrence;
} // getNextEvent
