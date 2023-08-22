/*
 * PrimitiveValue.cpp
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#include "PrimitiveValue.h"

#include "fuml/syntax/simpleclassifiers/PrimitiveType.h"

using namespace fuml::semantics::simpleclassifiers;

PrimitiveValue::~PrimitiveValue()
{
}

std::shared_ptr<fuml::semantics::values::Value> PrimitiveValue::copy()
{
	// Create a new value that is equal to this primitive value.

	std::shared_ptr<PrimitiveValue> newValue = std::dynamic_pointer_cast<PrimitiveValue>(fuml::semantics::values::Value::copy());

	newValue->type = this->type;
	return newValue;
} // copy

std::shared_ptr<fuml::syntax::classification::ClassifierList> PrimitiveValue::getTypes()
{
	// Return the single primitive type of this value.

	std::shared_ptr<fuml::syntax::classification::ClassifierList> types(new fuml::syntax::classification::ClassifierList());
	types->push_back(this->type);
	return types;
} // getTypes
