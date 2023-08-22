/*
 * UnlimitedNaturalValue.cpp
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#include "UnlimitedNaturalValue.h"

#include "IntegerValue.h"
#include "fuml/syntax/simpleclassifiers/PrimitiveType.h"
#include "fuml/syntax/values/LiteralUnlimitedNatural.h"

using namespace fuml::semantics::simpleclassifiers;

std::shared_ptr<fuml::syntax::values::ValueSpecification> UnlimitedNaturalValue::specify()
{
	// Return a literal unlimited natural with the value of this unlimited natural value.

	std::shared_ptr<fuml::syntax::values::LiteralUnlimitedNatural> literal(new fuml::syntax::values::LiteralUnlimitedNatural());

	literal->type = this->type;
	literal->value = this->value;

	return literal;
} // specify

bool UnlimitedNaturalValue::equals(const std::shared_ptr<fuml::semantics::values::Value>& otherValue)
{
	// Test if this unlimited natural value is equal to the otherValue.
	// To be equal, the otherValue must have the same value as this unlimited natural
	// value.

	bool isEqual = false;
	std::shared_ptr<UnlimitedNaturalValue> unlimitedNaturalValue = std::dynamic_pointer_cast<UnlimitedNaturalValue>(otherValue);
	if (unlimitedNaturalValue) {
		isEqual = (unlimitedNaturalValue->value == this->value);
	}

	return isEqual;
} // equals

std::shared_ptr<fuml::semantics::values::Value> UnlimitedNaturalValue::copy()
{
	// Create a new unlimited natural value with the same value as this unlimited natural value.

	std::shared_ptr<UnlimitedNaturalValue> newValue = std::dynamic_pointer_cast<UnlimitedNaturalValue>(PrimitiveValue::copy());

	newValue->value = this->value;
	return newValue;
} // copy

std::string UnlimitedNaturalValue::toString()
{
	std::string stringValue = "*";

	if (this->value >= 0) {
		std::shared_ptr<IntegerValue> integerValue(new IntegerValue());
		integerValue->value = this->value;
		stringValue = integerValue->toString();
	}

	return stringValue;
} // toString

std::shared_ptr<fuml::semantics::values::Value> UnlimitedNaturalValue::new_()
{
	// Return a new unlimited natural value with no value.

	return std::shared_ptr<UnlimitedNaturalValue>(new UnlimitedNaturalValue());
}
