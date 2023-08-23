/*
 * IntegerValue.cpp
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#include <fuml/semantics/simplesclassifiers/IntegerValue.h>
#include <fuml/syntax/simpleclassifiers/PrimitiveType.h>
#include "fuml/syntax/values/LiteralInteger.h"

ValueSpecificationPtr IntegerValue::specify()
{
	// Return a literal integer with the value of this integer value.

	LiteralIntegerPtr literal(new LiteralInteger());

	literal->type = this->type;
	literal->value = this->value;

	return literal;
} // specify

bool IntegerValue::equals(const ValuePtr& otherValue)
{
	// Test if this integer value is equal to the otherValue.
	// To be equal, the otherValue must have the same value as this integer
	// value.

	bool isEqual = false;
	IntegerValuePtr integerValue = std::dynamic_pointer_cast<IntegerValue>(otherValue);
	if (integerValue) {
		isEqual = (integerValue->value == this->value);
	}

	return isEqual;
} // equals

ValuePtr IntegerValue::copy()
{
	// Create a new integer value with the same value as this integer value.

	IntegerValuePtr newValue = std::dynamic_pointer_cast<IntegerValue>(PrimitiveValue::copy());

	newValue->value = this->value;
	return newValue;
} // copy

std::string IntegerValue::toString()
{
	std::string stringValue = "";

	if (this->value == 0) {
		stringValue = "0";
	} else {
		int positiveValue = this->value;

		if (positiveValue < 0) {
			positiveValue = -positiveValue;
		}

		do {
			int digit = positiveValue % 10;

			if (digit == 0) {
				stringValue = "0" + stringValue;
			} else if (digit == 1) {
				stringValue = "1" + stringValue;
			} else if (digit == 2) {
				stringValue = "2" + stringValue;
			} else if (digit == 3) {
				stringValue = "3" + stringValue;
			} else if (digit == 4) {
				stringValue = "4" + stringValue;
			} else if (digit == 5) {
				stringValue = "5" + stringValue;
			} else if (digit == 6) {
				stringValue = "6" + stringValue;
			} else if (digit == 7) {
				stringValue = "7" + stringValue;
			} else if (digit == 8) {
				stringValue = "8" + stringValue;
			} else if (digit == 9) {
				stringValue = "9" + stringValue;
			}

			positiveValue = positiveValue / 10;
		} while (positiveValue > 0);

		if (this->value < 0) {
			stringValue = "-" + stringValue;
		}
	}

	return stringValue;
} // toString

ValuePtr IntegerValue::new_()
{
	// Return a new integer value with no value.

	return IntegerValuePtr(new IntegerValue());
}
