/*
 * PrimitiveValue.cpp
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#include <fuml/semantics/simpleclassifiers/PrimitiveValue.h>

#include <uml/simpleclassifiers/PrimitiveType.h>

PrimitiveValue::~PrimitiveValue()
{
}

ValuePtr PrimitiveValue::copy()
{
	// Create a new value that is equal to this primitive value.

	PrimitiveValuePtr newValue = AS(PrimitiveValue, Value::copy());

	newValue->type = this->type;
	return newValue;
} // copy

ClassifierListPtr PrimitiveValue::getTypes()
{
	// Return the single primitive type of this value.

	ClassifierListPtr types(new ClassifierList());
	types->push_back(this->type);
	return types;
} // getTypes
