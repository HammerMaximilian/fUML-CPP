/*
 * BooleanValue.cpp
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#include <fuml/semantics/simpleclassifiers/BooleanValue.h>
#include <fuml/syntax/simpleclassifiers/PrimitiveType.h>
#include <fuml/syntax/values/LiteralBoolean.h>

ValueSpecificationPtr BooleanValue::specify()
{
	// Return a literal boolean with the value of this boolean value.

	LiteralBooleanPtr literal(new LiteralBoolean());

	literal->type = this->type;
	literal->value = this->value;

	return literal;
} // specify

bool BooleanValue::equals(const ValuePtr& otherValue)
{
	// Test if this boolean value is equal to the otherValue.
	// To be equal, the otherValue must have the same value as this boolean
	// value.

	bool isEqual = false;
	BooleanValuePtr booleanValue = std::dynamic_pointer_cast<BooleanValue>(otherValue);
	if (booleanValue) {
		isEqual = (booleanValue->value == this->value);
	}

	return isEqual;
} // equals

ValuePtr BooleanValue::copy()
{
	// Create a new boolean value with the same value as this boolean value.

	BooleanValuePtr newValue = std::dynamic_pointer_cast<BooleanValue>(PrimitiveValue::copy());

	newValue->value = this->value;
	return newValue;
} // copy

std::string BooleanValue::toString()
{
	std::string stringValue = "false";

	if (this->value) {
		stringValue = "true";
	}

	return stringValue;
} // toString

ValuePtr BooleanValue::new_()
{
	// Return a new boolean value with no value.

	return BooleanValuePtr(new BooleanValue());
}
