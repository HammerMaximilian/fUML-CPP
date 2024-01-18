/*
 * SignalInstance.cpp
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#include <fuml/semantics/simpleclassifiers/SignalInstance.h>

#include <uml/simpleclassifiers/Signal.h>

ClassifierListPtr SignalInstance::getTypes()
{
	// Return the single type of this signal instance.

	ClassifierListPtr types(new ClassifierList());

	types->push_back(this->type);

	return types;
} // getTypes

ValuePtr SignalInstance::copy()
{
	// Create a new signal instance with the same type and feature values as
	// this signal instance.

	SignalInstancePtr newValue = std::dynamic_pointer_cast<SignalInstance>(CompoundValue::copy());

	newValue->type = this->type;

	return newValue;
} // copy

ValuePtr SignalInstance::new_()
{
	// Create a new signal instance with no type or feature values.

	return SignalInstancePtr(new SignalInstance());
} // new_

