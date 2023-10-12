/*
 * DispatchStrategy.cpp
 *
 *  Created on: 26.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/structuredclassifiers/DispatchStrategy.h>

#include <fuml/semantics/commonbehavior/CallEventBehavior.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/structuredclassifiers/Object_.h>

DispatchStrategy::~DispatchStrategy()
{
}

std::string DispatchStrategy::getName()
{
	// Dispatch strategies are always named "dispatch".

	return "dispatch";
} // getName

ExecutionPtr DispatchStrategy::dispatch(const Object_Ptr& object, const OperationPtr& operation)
{
	// Get the behavior for the given operation as determined by the type(s)
	// of the given object, compile the behavior at the locus of the object,
	// and return the resulting execution object.

	return object->locus->factory->createExecution(this->getMethod(object, operation), object);
} // dispatch

BehaviorPtr DispatchStrategy::getMethod(const Object_Ptr& object, const OperationPtr& operation)
{
	// Get the method that corresponds to the given operation for the given object.
	// By default, the operation is treated as being called via a call event occurrence,
	// with a call even behavior as its effective method. Concrete dispatch strategy
	// subclasses may override this default to provide other dispatching behavior.

	CallEventBehaviorPtr method(new CallEventBehavior());
	method->setThisClass_Ptr(method);
	method->setOperation(operation);
	return method;
} // getMethod
