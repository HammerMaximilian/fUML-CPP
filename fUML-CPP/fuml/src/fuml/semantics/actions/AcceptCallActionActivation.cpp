/*
 * AcceptCallActionActivation.cpp
 *
 *  Created on: 29.08.2023
 *      Author: maha6913
 */

#include <fuml/semantics/actions/AcceptCallActionActivation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/actions/ReturnInformation.h>
#include <fuml/semantics/commonbehavior/CallEventOccurrence.h>
#include <uml/actions/AcceptCallAction.h>
#include <uml/actions/OutputPin.h>

void AcceptCallActionActivation::accept(const EventOccurrencePtr& eventOccurrence)
{
	// Accept the given event occurrence, which must be a call event occurrence.
	// Place return information for the call on the return information
	// output pin. Then complete the acceptance of the event occurrence
	// as usual.

	AcceptCallActionPtr action = AS(AcceptCallAction, this->node);
	const OutputPinPtr& returnInformationPin = action->returnInformation;

	ReturnInformationPtr returnInformation(new ReturnInformation());
	returnInformation->callEventOccurrence = AS(CallEventOccurrence, eventOccurrence);

	this->putToken(returnInformationPin, returnInformation);

	fuml::Debug::println(
		"[accept] action = " + action->name + ", returnInformation = " + std::to_string(returnInformation->hashCode()));

	AcceptEventActionActivation::accept(eventOccurrence);
} // accept
