/*
 * RealValue.cpp
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#include "RealValue.h"

#include "fuml/semantics/simplesclassifiers/IntegerValue.h"
#include "fuml/syntax/simpleclassifiers/PrimitiveType.h"
#include "fuml/syntax/values/LiteralReal.h"

using namespace fuml::semantics::simpleclassifiers;

std::shared_ptr<fuml::syntax::values::ValueSpecification> RealValue::specify()
{
	// Return a literal real with the value of this real value.

	std::shared_ptr<fuml::syntax::values::LiteralReal> literal(new fuml::syntax::values::LiteralReal());

	literal->type = this->type;
	literal->value = this->value;

	return literal;
} // specify

bool RealValue::equals(const std::shared_ptr<fuml::semantics::values::Value>& otherValue)
{
	// Test if this real value is equal to the otherValue.
	// To be equal, the otherValue must have the same value as this real
	// value.

	bool isEqual = false;
	std::shared_ptr<RealValue> realValue = std::dynamic_pointer_cast<RealValue>(otherValue);
	if (realValue) {
		isEqual = (realValue->value == this->value);
	}

	return isEqual;
} // equals

std::shared_ptr<fuml::semantics::values::Value> RealValue::copy()
{
	// Create a new real value with the same value as this real value.

	std::shared_ptr<RealValue> newValue = std::dynamic_pointer_cast<RealValue>(PrimitiveValue::copy());

	newValue->value = this->value;
	return newValue;
} // copy

std::string RealValue::toString()
{
	std::string stringValue = "";

	if (this->value == 0) {
		stringValue = "0";
	} else {
		float positiveValue = this->value;

		if (positiveValue < 0) {
			positiveValue = -positiveValue;
		}

		int exponent = 0;

		if (positiveValue < .1) {
			while (positiveValue < .1) {
				positiveValue = positiveValue * 10;
				exponent = exponent - 1;
			}
		} else if (positiveValue >= 1) {
			while (positiveValue >= 1) {
				positiveValue = positiveValue / 10;
				exponent = exponent + 1;
			}
		}

		// This gives 9 significant digits in the mantissa.
		for (int i = 0; i < 9; i++) {
			positiveValue = positiveValue * 10;
		}

		std::shared_ptr<IntegerValue> integerValue(new IntegerValue());
		integerValue->value = (int) positiveValue;
		stringValue = "0." + integerValue->toString();
		integerValue->value = exponent;
		stringValue = stringValue + "E" + integerValue->toString();

		if (this->value < 0) {
			stringValue = "-" + stringValue;
		}
	}

	return stringValue;
} // toString

std::shared_ptr<fuml::semantics::values::Value> RealValue::new_()
{
	// Return a new real value with no value.

	return std::shared_ptr<RealValue>(new RealValue());
}
