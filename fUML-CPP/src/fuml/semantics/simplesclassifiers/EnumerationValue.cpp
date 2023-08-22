/*
 * EnumerationValue.cpp
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#include "EnumerationValue.h"

#include "fuml/syntax/classification/InstanceSpecification.h"
#include "fuml/syntax/classification/InstanceValue.h"
#include "fuml/syntax/simpleclassifiers/Enumeration.h"
#include "fuml/syntax/simpleclassifiers/EnumerationLiteral.h"
#include "fuml/syntax/values/LiteralBoolean.h"

using namespace fuml::semantics::simpleclassifiers;

std::shared_ptr<fuml::syntax::values::ValueSpecification> EnumerationValue::specify()
{
	// Return an instance value with literal as the instance.

	std::shared_ptr<fuml::syntax::classification::InstanceValue> instanceValue(new fuml::syntax::classification::InstanceValue());
	//std::shared_ptr<fuml::syntax::classification::InstanceSpecification> instance(new fuml::syntax::classification::InstanceSpecification());

	instanceValue->type = this->type;
	instanceValue->instance = this->literal;

	return instanceValue;
} // specify

bool EnumerationValue::equals(const std::shared_ptr<fuml::semantics::values::Value>& otherValue)
{
	// Test if this enumeration value is equal to the otherValue.
	// To be equal, the otherValue must also be an enumeration value with
	// the same literal as this enumeration value

	bool isEqual = false;
	std::shared_ptr<EnumerationValue> enumerationValue = std::dynamic_pointer_cast<EnumerationValue>(otherValue);
	if (enumerationValue) {
		isEqual = (enumerationValue->literal == this->literal);
	}

	return isEqual;
} // equals

std::shared_ptr<fuml::semantics::values::Value> EnumerationValue::copy()
{
	// Create a new enumeration value with the same value as this enumeration value.

	std::shared_ptr<EnumerationValue> newValue = std::dynamic_pointer_cast<EnumerationValue>(Value::copy());

	newValue->type = this->type;
	newValue->literal = this->literal;

	return newValue;
} // copy

std::shared_ptr<fuml::syntax::classification::ClassifierList> EnumerationValue::getTypes()
{
	// Return the single type of this enumeration value.

	std::shared_ptr<fuml::syntax::classification::ClassifierList> types(new fuml::syntax::classification::ClassifierList());
	types->push_back(this->type);

	return types;
} // getTypes

std::string EnumerationValue::toString()
{
	return this->literal->name;
} // toString

std::shared_ptr<fuml::semantics::values::Value> EnumerationValue::new_()
{
	// Return a new enumeration value with no literal.

	return std::shared_ptr<EnumerationValue>(new EnumerationValue());
}
