/*
 * CS_InteractionPoint.cpp
 *
 *  Created on: 30.01.2024
 *      Author: maha6913
 */

#include <pscs/semantics/structuredclassifiers/CS_InteractionPoint.h>

#include <fuml/semantics/structuredclassifiers/Object_.h>
#include <pscs/semantics/commonbehavior/CS_EventOccurrence.h>
#include <pscs/semantics/structuredclassifiers/CS_Reference.h>

void CS_InteractionPoint::setThisCS_InteractionPoint_Ptr(CS_InteractionPointPtr_w thisCS_InteractionPointPtr)
{
	this->thisCS_InteractionPoint_Ptr = thisCS_InteractionPointPtr;
}

void CS_InteractionPoint::startBehavior(const Class_Ptr& classifier, const ParameterValueListPtr& inputs)
{
	// Overridden to do nothing
}

ExecutionPtr CS_InteractionPoint::dispatch(const OperationPtr& operation)
{
	// Delegates dispatching to the owning object
	return this->owner->dispatchIn(operation, thisCS_InteractionPoint_Ptr.lock());
}

void CS_InteractionPoint::send(const EventOccurrencePtr& eventOccurrence)
{
	// An event occurrence that passes through a CS_InteractionPoint is
	// (if necessary) wrapped in a CS_EventOccurrence. This event occurrence
	// is then sent to the owning object.
	CS_EventOccurrencePtr wrappingEventOccurrence;
	if (CS_EventOccurrencePtr cS_EventOccurrence = std::dynamic_pointer_cast<CS_EventOccurrence>(eventOccurrence))
	{
		wrappingEventOccurrence = cS_EventOccurrence;
	}
	else
	{
		wrappingEventOccurrence.reset(new CS_EventOccurrence());
		wrappingEventOccurrence->wrappedEventOccurrence = eventOccurrence;
	}

	wrappingEventOccurrence->interactionPoint = thisCS_InteractionPoint_Ptr.lock();
	this->owner->sendIn(wrappingEventOccurrence, thisCS_InteractionPoint_Ptr.lock());
}

bool CS_InteractionPoint::checkAllParents(const ClassifierPtr& type, const ClassifierPtr& classifier)
{
	// Delegates the type checking to the reference
	return this->referent->checkAllParents(type, classifier);
}
