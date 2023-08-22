/*
 * BooleanValue.cpp
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#include "BooleanValue.h"

#include "fuml/syntax/simpleclassifiers/PrimitiveType.h"
#include "fuml/syntax/values/LiteralBoolean.h"

using namespace fuml::semantics::simpleclassifiers;

std::shared_ptr<fuml::syntax::values::ValueSpecification> BooleanValue::specify()
{
	// Return a literal boolean with the value of this boolean value.

	std::shared_ptr<fuml::syntax::values::LiteralBoolean> literal(new fuml::syntax::values::LiteralBoolean());

	literal->type = this->type;
	literal->value = this->value;

	return literal;
} // specify

bool BooleanValue::equals(const std::shared_ptr<fuml::semantics::values::Value>& otherValue)
{
	// Test if this boolean value is equal to the otherValue.
	// To be equal, the otherValue must have the same value as this boolean
	// value.

	bool isEqual = false;
	std::shared_ptr<BooleanValue> booleanValue = std::dynamic_pointer_cast<BooleanValue>(otherValue);
	if (booleanValue) {
		isEqual = (booleanValue->value == this->value);
	}

	return isEqual;
} // equals

std::shared_ptr<fuml::semantics::values::Value> BooleanValue::copy()
{
	// Create a new boolean value with the same value as this boolean value.

	std::shared_ptr<BooleanValue> newValue = std::dynamic_pointer_cast<BooleanValue>(PrimitiveValue::copy());

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

std::shared_ptr<fuml::semantics::values::Value> BooleanValue::new_()
{
	// Return a new boolean value with no value.

	return std::shared_ptr<BooleanValue>(new BooleanValue());
}
