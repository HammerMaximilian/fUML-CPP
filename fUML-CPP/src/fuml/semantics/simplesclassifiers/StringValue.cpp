/*
 * StringValue.cpp
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#include "StringValue.h"

#include "fuml/syntax/simpleclassifiers/PrimitiveType.h"
#include "fuml/syntax/values/LiteralString.h"

using namespace fuml::semantics::simpleclassifiers;

std::shared_ptr<fuml::syntax::values::ValueSpecification> StringValue::specify()
{
	// Return a literal string with the value of this string value.

	std::shared_ptr<fuml::syntax::values::LiteralString> literal(new fuml::syntax::values::LiteralString());

	literal->type = this->type;
	literal->value = this->value;

	return literal;
} // specify

bool StringValue::equals(const std::shared_ptr<fuml::semantics::values::Value>& otherValue)
{
	// Test if this string value is equal to the otherValue.
	// To be equal, the otherValue must have the same value as this string
	// value.

	bool isEqual = false;
	std::shared_ptr<StringValue> stringValue = std::dynamic_pointer_cast<StringValue>(otherValue);
	if (stringValue) {
		isEqual = (stringValue->value == this->value);
	}

	return isEqual;
} // equals

std::shared_ptr<fuml::semantics::values::Value> StringValue::copy()
{
	// Create a new string value with the same value as this string value.

	std::shared_ptr<StringValue> newValue = std::dynamic_pointer_cast<StringValue>(PrimitiveValue::copy());

	newValue->value = this->value;
	return newValue;
} // copy

std::string StringValue::toString()
{
	return this->value;
} // toString

std::shared_ptr<fuml::semantics::values::Value> StringValue::new_()
{
	// Return a new string value with no value.

	return std::shared_ptr<StringValue>(new StringValue());
}
