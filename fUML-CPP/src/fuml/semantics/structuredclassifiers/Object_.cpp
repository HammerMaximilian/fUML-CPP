/*
 * Object_.cpp
 *
 *  Created on: 26.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/structuredclassifiers/Object_.h>

#include <fuml/semantics/commonbehavior/ObjectActivation.h>

void Object_::setThisObject_Ptr(
		std::weak_ptr<Object_> thisObject_Ptr)
{
	this->thisObject_Ptr = thisObject_Ptr;
	ExtensionalValue::setThisExtensionalValuePtr(thisObject_Ptr);
}

void Object_::startBehavior(
		const Class_Ptr& classifier, const ParameterValueListPtr& inputs)
{
	// Create an object activation for this object (if one does not already
	// exist) and start its behavior(s).

	if (this->objectActivation == nullptr) {
		this->objectActivation.reset(new ObjectActivation());
		this->objectActivation->object = thisObject_Ptr.lock();
	}


	this->objectActivation->startBehavior(classifier, inputs);
} // startBehavior

ExecutionPtr Object_::dispatch(
		const OperationPtr&)
{
} // dispatch

void Object_::send(
		const EventOccurrencePtr&)
{
} // send

void Object_::destroy()
{
} // destroy

void Object_::register_(
		const EventAccepterPtr&)
{
} // register_

void Object_::unregister(
		const EventAccepterPtr&)
{
} // unregister

ValuePtr Object_::copy()
{
} // copy

bool Object_::equals(const ValuePtr&)
{
} // equals

ClassifierListPtr Object_::getTypes()
{
} // getTypes

ValuePtr Object_::new_()
{
} // new_
