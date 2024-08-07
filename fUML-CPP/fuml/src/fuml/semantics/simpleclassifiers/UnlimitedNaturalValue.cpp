/*
 * UnlimitedNaturalValue.cpp
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#include <fuml/semantics/simpleclassifiers/UnlimitedNaturalValue.h>

#include <fuml/semantics/simpleclassifiers/IntegerValue.h>
#include <uml/simpleclassifiers/PrimitiveType.h>
#include <uml/values/LiteralUnlimitedNatural.h>

ValueSpecificationPtr UnlimitedNaturalValue::specify()
{
	// Return a literal unlimited natural with the value of this unlimited natural value.

	LiteralUnlimitedNaturalPtr literal(new LiteralUnlimitedNatural());

	literal->type = this->type;
	literal->value = this->value;

	return literal;
} // specify

bool UnlimitedNaturalValue::equals(const ValuePtr& otherValue)
{
	// Test if this unlimited natural value is equal to the otherValue.
	// To be equal, the otherValue must have the same value as this unlimited natural
	// value.

	bool isEqual = false;
	UnlimitedNaturalValuePtr unlimitedNaturalValue = AS(UnlimitedNaturalValue, otherValue);
	if (unlimitedNaturalValue)
	{
		isEqual = (unlimitedNaturalValue->value == this->value);
	}

	return isEqual;
} // equals

ValuePtr UnlimitedNaturalValue::copy()
{
	// Create a new unlimited natural value with the same value as this unlimited natural value.

	UnlimitedNaturalValuePtr newValue = AS(UnlimitedNaturalValue, PrimitiveValue::copy());

	newValue->value = this->value;
	return newValue;
} // copy

std::string UnlimitedNaturalValue::toString()
{
	std::string stringValue = "*";

	if (this->value >= 0)
	{
		IntegerValuePtr integerValue(new IntegerValue());
		integerValue->value = this->value;
		stringValue = integerValue->toString();
	}

	return stringValue;
} // toString

ValuePtr UnlimitedNaturalValue::new_()
{
	// Return a new unlimited natural value with no value.

	return UnlimitedNaturalValuePtr(new UnlimitedNaturalValue());
}
