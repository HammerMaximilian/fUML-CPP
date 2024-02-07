/*
 * CS_Reference.cpp
 *
 *  Created on: 30.01.2024
 *      Author: maha6913
 */

#include <pscs/semantics/structuredclassifiers/CS_Reference.h>

#include <pscs/semantics/structuredclassifiers/CS_Object.h>

ExecutionPtr CS_Reference::dispatchIn(const OperationPtr& operation, const CS_InteractionPointPtr& interactionPoint)
{
	// Delegates dispatching to composite referent
	return this->compositeReferent->dispatchIn(operation, interactionPoint);
}

void CS_Reference::sendIn(const EventOccurrencePtr& eventOccurrence, const CS_InteractionPointPtr& interactionPoint)
{
	// delegates sending to composite referent
	this->compositeReferent->sendIn(eventOccurrence, interactionPoint);
}

void CS_Reference::sendOut(const EventOccurrencePtr& eventOccurrence, const PortPtr& onPort)
{
	// delegates sending to composite referent
	this->compositeReferent->sendOut(eventOccurrence, onPort);
}

ExecutionPtr CS_Reference::dispatchOut(const OperationPtr& operation, const PortPtr& onPort)
{
	// delegates dispatching to composite referent
	return this->compositeReferent->dispatchOut(operation, onPort);
}

ExecutionPtr CS_Reference::dispatchIn(const OperationPtr& operation, const PortPtr& onPort)
{
	// delegates dispatching to composite referent
	return this->compositeReferent->dispatchIn(operation, onPort);
}

void CS_Reference::sendIn(const EventOccurrencePtr& eventOccurrence, const PortPtr& onPort)
{
	// delegates sending to composite referent
	this->compositeReferent->sendIn(eventOccurrence, onPort);
}

ExecutionPtr CS_Reference::dispatchOut(const OperationPtr& operation, const CS_InteractionPointPtr& interactionPoint)
{
	// Delegates dispatching (through the interaction point, to the environment)
	// to compositeReferent
	return this->compositeReferent->dispatchOut(operation, interactionPoint);
}

void CS_Reference::sendOut(const EventOccurrencePtr& eventOccurrence, const CS_InteractionPointPtr& interactionPoint)
{
	// Delegates sending (through the interaction point, to the environment)
	// to compositeReferent
	this->compositeReferent->sendOut(eventOccurrence, interactionPoint);
}

ValuePtr CS_Reference::copy()
{
	// Create a new reference with the same referent and composite referent as this
	// reference.
	CS_ReferencePtr newValue(new CS_Reference());
	newValue->referent = referent;
	newValue->compositeReferent = compositeReferent;
	return newValue;
}
