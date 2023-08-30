/*
 * Reference.cpp
 *
 *  Created on: 26.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/structuredclassifiers/Reference.h>

#include <fuml/semantics/structuredclassifiers/Object_.h>

void Reference::startBehavior(const Class_Ptr& classifier, const ParameterValueListPtr& inputs)
{
	// Asynchronously start the behavior of the given classifier for the
	// referent object.

	this->referent->startBehavior(classifier, inputs);
} // startBehavior

ExecutionPtr Reference::dispatch(const OperationPtr& operation)
{
	// Dispatch the given operation to the referent object.

	return this->referent->dispatch(operation);
} // dispatch

void Reference::send(const EventOccurrencePtr& eventOccurrence)
{
	// Send the given event occurrence to the referent object.

	this->referent->send(eventOccurrence);
} // send

void Reference::destroy()
{
	// Destroy the referent.

	this->referent->destroy();
} // destroy

bool Reference::equals(const ValuePtr& otherValue)
{
	// Test if this reference is equal to the otherValue.
	// To be equal, the otherValue must also be a reference, with the same
	// referent as this reference.

	bool isEqual = false;
	ReferencePtr reference = std::dynamic_pointer_cast<Reference>(otherValue);
	if (reference)
	{
		if (this->referent == nullptr)
		{
			isEqual = (reference->referent == nullptr);
		}
		else
		{
			isEqual = this->referent->equals(reference->referent);
		}
	}

	return isEqual;
} // equals

ValuePtr Reference::copy()
{
	// Create a new reference with the same referent as this reference.

	ReferencePtr newValue = std::dynamic_pointer_cast<Reference>(StructuredValue::copy());

	newValue->referent = this->referent;

	return newValue;
} // copy

ClassifierListPtr Reference::getTypes()
{
	// Get the types of the referent object.

	return this->referent->getTypes();
} // getTypes

FeatureValuePtr Reference::getFeatureValue(const StructuralFeaturePtr& feature)
{
	// Get the feature value associated with the given feature in the
	// referent object.

	return this->referent->getFeatureValue(feature);
} // getFeatureValue

void Reference::setFeatureValue(const StructuralFeaturePtr& feature, const ValueListPtr& values, int position)
{
	// Set the values associated with the given feature in the referent
	// object.

	this->referent->setFeatureValue(feature, values, position);
} // setFeatureValue

FeatureValueListPtr Reference::getFeatureValues()
{
	// Return the feature values of the referent.

	return this->referent->getFeatureValues();
} // getFeatureValues

std::string Reference::toString()
{
	return "Reference to " + this->referent->toString();
}

ValuePtr Reference::new_()
{
	// Create a new reference with no referent.

	return ReferencePtr(new Reference());
} // new_
