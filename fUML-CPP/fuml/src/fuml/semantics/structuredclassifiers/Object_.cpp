/*
 * Object_.cpp
 *
 *  Created on: 26.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/structuredclassifiers/Object_.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ObjectActivation.h>
#include <fuml/semantics/commonbehavior/ObjectActivation_EventDispatchLoopExecution.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/structuredclassifiers/DispatchStrategy.h>
#include <fuml/syntax/structuredclassifiers/Class_.h>

void Object_::setThisObject_Ptr(Object_Ptr_w thisObject_Ptr)
{
	this->thisObject_Ptr = thisObject_Ptr;
	ExtensionalValue::setThisExtensionalValuePtr(thisObject_Ptr);
}

void Object_::startBehavior(const Class_Ptr& classifier, const ParameterValueListPtr& inputs)
{
	// Create an object activation for this object (if one does not already
	// exist) and start its behavior(s).

	if (this->objectActivation == nullptr)
	{
		this->objectActivation.reset(new ObjectActivation());
		this->objectActivation->setThisObjectActivationPtr(this->objectActivation);
		this->objectActivation->object = thisObject_Ptr.lock();
	}

	this->objectActivation->startBehavior(classifier, inputs);
} // startBehavior

ExecutionPtr Object_::dispatch(const OperationPtr& operation)
{
	// Dispatch the given operation to a method execution, using a dispatch
	// strategy.

	DispatchStrategyPtr dispatchStrategy = std::dynamic_pointer_cast<DispatchStrategy>(
		this->locus->factory->getStrategy("dispatch"));

	return dispatchStrategy->dispatch(this->thisObject_Ptr.lock(), operation);
} // dispatch

void Object_::send(const EventOccurrencePtr& eventOccurrence)
{
	// If the object is active, add the given event occurrence to the event
	// pool and signal that a new event occurrence has arrived.

	if (this->objectActivation != nullptr)
	{
		this->objectActivation->send(eventOccurrence);
	}

} // send

void Object_::destroy()
{
	// Stop the object activation (if any), clear all types and feature values,
	// and destroy the object as an extensional value.

	fuml::Debug::println(std::string("[destroy] object = " + this->identifier));

	if (this->objectActivation != nullptr)
	{
		this->objectActivation->stop();
		this->objectActivation.reset();
	}

	this->types->clear();
	this->featureValues->clear();
	ExtensionalValue::destroy();

} // destroy

void Object_::register_(const EventAccepterPtr& accepter)
{
	// Register the given accept event accepter to wait for a dispatched
	// signal event.

	if (this->objectActivation != nullptr)
	{
		this->objectActivation->register_(accepter);
	}
} // register_

void Object_::unregister(const EventAccepterPtr& accepter)
{
	// Remove the given event accepter for the list of waiting event
	// accepters.

	if (this->objectActivation != nullptr)
	{
		this->objectActivation->unregister(accepter);
	}
} // unregister

ValuePtr Object_::copy()
{
	// Create a new object that is a copy of this object at the same locus
	// as this object.
	// However, the new object will NOT have any object activation (i.e, its
	// classifier behaviors will not be started).

	Object_Ptr newObject = std::dynamic_pointer_cast<Object_>(ExtensionalValue::copy());
	newObject->setThisObject_Ptr(newObject);

	Class_ListPtr types = this->types;
	for (const Class_Ptr& type : *types)
	{
		newObject->types->push_back(type);
	}

	return newObject;
} // copy

bool Object_::equals(const ValuePtr& otherValue)
{
	// Test if this object is equal to the otherValue.
	// To be equal, the otherValue must be the same object as this object.

	return (this->thisObject_Ptr.lock() == otherValue);
} // equals

ClassifierListPtr Object_::getTypes()
{
	// Return the types of this object.

	ClassifierListPtr types(new ClassifierList());
	Class_ListPtr myTypes = this->types;
	for (const Class_Ptr& type : *myTypes)
	{
		types->push_back(type);
	}

	return types;
} // getTypes

ValuePtr Object_::new_()
{
	// Create a new object with no type, feature values or locus.

	Object_Ptr newObject(new Object_());
	newObject->setThisObject_Ptr(newObject);
	return newObject;
} // new_
