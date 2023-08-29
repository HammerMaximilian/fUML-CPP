/*
 * AcceptEventActionEventAccepter.cpp
 *
 *  Created on: 29.08.2023
 *      Author: maha6913
 */

#include <fuml/semantics/actions/AcceptEventActionEventAccepter.h>

#include <fuml/semantics/actions/AcceptEventActionActivation.h>

void AcceptEventActionEventAccepter::accept(
		const EventOccurrencePtr& eventOccurrence)
{
	// Accept an event occurrence and forward it to the action activation.

	this->actionActivation->accept(eventOccurrence);
} // accept

bool  AcceptEventActionEventAccepter::match(
		const EventOccurrencePtr& eventOccurrence)
{
	// Return true if the given event occurrence matches a trigger of the accept event
	// action of the action activation.

	return this->actionActivation->match(eventOccurrence);
} // match
