/*
 * StringValue.cpp
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#include <fuml/semantics/simpleclassifiers/StringValue.h>

#include <uml/simpleclassifiers/PrimitiveType.h>
#include <uml/values/LiteralString.h>

ValueSpecificationPtr StringValue::specify()
{
	// Return a literal string with the value of this string value.

	LiteralStringPtr literal(new LiteralString());

	literal->type = this->type;
	literal->value = this->value;

	return literal;
} // specify

bool StringValue::equals(const ValuePtr& otherValue)
{
	// Test if this string value is equal to the otherValue.
	// To be equal, the otherValue must have the same value as this string
	// value.

	bool isEqual = false;
	StringValuePtr stringValue = std::dynamic_pointer_cast<StringValue>(otherValue);
	if (stringValue)
	{
		isEqual = (stringValue->value == this->value);
	}

	return isEqual;
} // equals

ValuePtr StringValue::copy()
{
	// Create a new string value with the same value as this string value.

	StringValuePtr newValue = std::dynamic_pointer_cast<StringValue>(PrimitiveValue::copy());

	newValue->value = this->value;
	return newValue;
} // copy

std::string StringValue::toString()
{
	return this->value;
} // toString

ValuePtr StringValue::new_()
{
	// Return a new string value with no value.

	return StringValuePtr(new StringValue());
}
