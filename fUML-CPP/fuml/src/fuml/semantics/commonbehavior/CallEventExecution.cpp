/*
 * CallEventExecution.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/commonbehavior/CallEventExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/CallEventBehavior.h>
#include <fuml/semantics/commonbehavior/CallEventOccurrence.h>
#include <fuml/semantics/commonbehavior/ExecutionQueue.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/structuredclassifiers/Reference.h>
#include <fuml/syntax/classification/Operation.h>
#include <fuml/syntax/classification/Parameter.h>

void fuml::semantics::commonbehavior::CallEventExecution::setThisCallEventExecutionPtr(
	std::weak_ptr<CallEventExecution> thisCallEventExecutionPtr)
{
	this->thisCallEventExecutionPtr = thisCallEventExecutionPtr;
	Object_::setThisObject_Ptr(thisCallEventExecutionPtr);
}

bool CallEventExecution::isCallerSuspended()
{
	// Check if the caller is still suspended.
	// This is done in isolation from possible concurrent updates to this flag.

	_beginIsolation();
	bool isSuspended = this->callerSuspended;
	fuml::Debug::println(
		"[isCallerSuspended] operation = " + this->getOperation()->name + ", callerSuspended = "
			+ std::to_string(isSuspended));
	_endIsolation();

	return isSuspended;
} // isCallerSuspended

void CallEventExecution::setCallerSuspended(bool callerSuspended)
{
	// Set the caller suspended flag to the given value.
	// This is done in isolation from possible concurrent queries to this flag.

	_beginIsolation();
	this->callerSuspended = callerSuspended;
	fuml::Debug::println(
		"[setCallerSuspended] operation = " + this->getOperation()->name + ", callerSuspended = "
			+ std::to_string(callerSuspended));
	_endIsolation();
} // setCallerSuspended

void CallEventExecution::suspendCaller()
{
	// Suspend the caller until the caller is released.

	while (this->isCallerSuspended())
	{
		this->wait_();
	}
} // suspendCaller

void CallEventExecution::releaseCaller()
{
	// Release the caller, if suspended.

	this->setCallerSuspended(false);
} // releaseCaller

void CallEventExecution::execute()
{
	// Make the call on the target object (which is the context of this execution)
	// and suspend the caller until the call is completed.

	// Note: The callerSuspended flag needs to be set before the call is made,
	// in case the call is immediately handled and returned, even before the
	// suspend loop is started.
	this->setCallerSuspended(true);

	this->makeCall();
	this->suspendCaller();
} // execute

void CallEventExecution::makeCall()
{
	// Make the call on the target object (which is the context of this execution)
	// by sending a call event occurrence. (Note that the call will never be
	// completed if the target is not an active object, since then the object
	// would then have no event pool in which the event occurrence could be placed.)

	ReferencePtr reference(new Reference());
	reference->referent = this->context;
	this->createEventOccurrence()->sendTo(reference);
} // makeCall

EventOccurrencePtr CallEventExecution::createEventOccurrence()
{
	// Create a call event occurrence associated with this call event execution.
	// (This operation may be overridden in subclasses to alter how the event
	// occurrence is create, e.g., if it is necessary to wrap it.)

	CallEventOccurrencePtr eventOccurrence(new CallEventOccurrence());
	eventOccurrence->execution = this->thisCallEventExecutionPtr.lock();
	return eventOccurrence;
} // createEventOccurrence

OperationPtr CallEventExecution::getOperation()
{
	// Return the operation being called by this call event execution.

	return std::dynamic_pointer_cast<CallEventBehavior>(this->getBehavior())->operation;
} // getOperation

ParameterValueListPtr CallEventExecution::getInputParameterValues()
{
	// Return input parameter values for this execution

	ParameterValueListPtr parameterValues(new ParameterValueList());
	for (const ParameterValuePtr& parameterValue : *(this->parameterValues))
	{
		if (parameterValue->parameter->direction == ParameterDirectionKind::in
			|| parameterValue->parameter->direction == ParameterDirectionKind::inout)
		{
			parameterValues->push_back(parameterValue);
		}
	}
	return parameterValues;
} // getInputParameterValues

void CallEventExecution::setOutputParameterValues(const ParameterValueListPtr& parameterValues)
{
	// Set the output parameter values for this execution.

	const ParameterListPtr& parameters = this->getBehavior()->ownedParameter;
	unsigned int j = 1;
	for (const ParameterPtr& parameter : *parameters)
	{
		if (parameter->direction == ParameterDirectionKind::inout || parameter->direction == ParameterDirectionKind::out
			|| parameter->direction == ParameterDirectionKind::return_)
		{
			ParameterValuePtr parameterValue = parameterValues->at(j - 1);
			parameterValue->parameter = parameter;
			this->setParameterValue(parameterValue);
			j = j + 1;
		}
	}
} // setOutputParameterValues

ValuePtr CallEventExecution::new_()
{
	// Create a new call event execution.
	CallEventExecutionPtr newValue(new CallEventExecution());
	newValue->setThisCallEventExecutionPtr(newValue);
	return newValue;
} // new_

ValuePtr CallEventExecution::copy()
{
	// Create a new call event execution that is a copy of this execution, with the
	// caller initially not suspended.

	CallEventExecutionPtr copy = std::dynamic_pointer_cast<CallEventExecution>(Execution::copy());
	copy->setThisCallEventExecutionPtr(copy);
	copy->callerSuspended = false;
	return copy;
} // copy

void CallEventExecution::wait_()
{
	// Wait for an indeterminate amount of time to allow other concurrent
	// executions to proceed.
	// [There is no further formal specification for this operation.]

	fuml::Debug::println(!ExecutionQueue::step(), "[wait] Stuck!");
} // wait_
