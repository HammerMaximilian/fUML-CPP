/*
 * ObjectActivation_EventDispatchLoopExecution.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/commonbehavior/ObjectActivation_EventDispatchLoopExecution.h>

#include <fuml/semantics/commonbehavior/ExecutionQueue.h>
#include <fuml/semantics/commonbehavior/ObjectActivation.h>

ObjectActivation_EventDispatchLoopExecution::ObjectActivation_EventDispatchLoopExecution(
	const ObjectActivationPtr& self)
{
	this->self = self;
}

void ObjectActivation_EventDispatchLoopExecution::setThisObjectActivation_EventDispatchLoopExecutionPtr(
	std::weak_ptr<ObjectActivation_EventDispatchLoopExecution> thisObjectActivation_EventDispatchLoopExecutionPtr)
{
	this->thisObjectActivation_EventDispatchLoopExecutionPtr = thisObjectActivation_EventDispatchLoopExecutionPtr;
	Object_::setThisObject_Ptr(thisObjectActivation_EventDispatchLoopExecutionPtr);
}

void ObjectActivation_EventDispatchLoopExecution::_startObjectBehavior()
{
	// *** This should start the EventDispatchLoop ***

	this->context = self->object;
} // _startObjectBehavior

void ObjectActivation_EventDispatchLoopExecution::_send(const ArrivalSignalPtr&)
{
	// Signal the arrival of a new signal instance in the event pool.
	// *** This should send an ArrivalSignal to the EventDispatchLoop. ***

	this->signalCount = this->signalCount + 1;
	if (this->signalCount == 1)
	{
		ExecutionQueue::enqueue(this->thisObjectActivation_EventDispatchLoopExecutionPtr.lock());
	}
} // _send

void ObjectActivation_EventDispatchLoopExecution::execute()
{
	this->self->dispatchNextEvent();
	signalCount = signalCount - 1;
	if (this->signalCount > 0)
	{
		ExecutionQueue::enqueue(this->thisObjectActivation_EventDispatchLoopExecutionPtr.lock());
	}
} // execute

ValuePtr ObjectActivation_EventDispatchLoopExecution::new_()
{
	ObjectActivation_EventDispatchLoopExecutionPtr newValue(
		new ObjectActivation_EventDispatchLoopExecution(this->self));
	newValue->setThisObjectActivation_EventDispatchLoopExecutionPtr(newValue);
	return newValue;
} // new_

std::string ObjectActivation_EventDispatchLoopExecution::toString()
{
	return "EventDispatchLoopExecution(" + this->self->object->toString() + ")";
} // toString
