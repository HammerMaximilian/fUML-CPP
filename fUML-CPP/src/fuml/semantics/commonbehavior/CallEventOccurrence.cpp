/*
 * CallEventOccurrence.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/commonbehavior/CallEventOccurrence.h>

#include <fuml/semantics/commonbehavior/CallEventExecution.h>
#include <fuml/syntax/commonbehavior/CallEvent.h>
#include <fuml/syntax/commonbehavior/Trigger.h>

OperationPtr CallEventOccurrence::getOperation()
{
	// Get the operation being called by this call event occurrence.

	return this->execution->getOperation();
} // getOperation

bool CallEventOccurrence::match(
		const TriggerPtr& trigger)
{
	// Match a trigger if it references a call event whose operation is the
	// operation of this call event occurrence.

	bool matches = false;
	CallEventPtr callEvent = std::dynamic_pointer_cast<CallEvent>(trigger->event);
	if (callEvent) {
		matches = (callEvent->operation == this->getOperation());
	}
	return matches;
} // match

ParameterValueListPtr CallEventOccurrence::getParameterValues(
		const EventPtr&)
{
	// Return the input parameter values from the call event execution for
	// this call event occurrence, which correspond to the values of the
	// operation input parameters for the call.

	return this->execution->getInputParameterValues();
} // getParameterValues

void CallEventOccurrence::setOutputParameterValues(
		const ParameterValueListPtr& parameterValues)
{
	// Set the output parameter values of the call event execution for
	// this call event occurrence, which correspond to the values of the
	// operation output parameters for the call.

	this->execution->setOutputParameterValues(parameterValues);
} // setOutputParameterValues

void CallEventOccurrence::returnFromCall()
{
	// Release the caller on return from the call.

	this->execution->releaseCaller();
} // returnFromCall
