/*
 * EnumerationValue.cpp
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#include <fuml/semantics/simpleclassifiers/EnumerationValue.h>

#include <uml/classification/InstanceSpecification.h>
#include <uml/classification/InstanceValue.h>
#include <uml/simpleclassifiers/Enumeration.h>
#include <uml/simpleclassifiers/EnumerationLiteral.h>
#include <uml/values/LiteralBoolean.h>

ValueSpecificationPtr EnumerationValue::specify()
{
	// Return an instance value with literal as the instance.

	InstanceValuePtr instanceValue(new InstanceValue());
	//InstanceSpecificationPtr instance(new InstanceSpecification());

	instanceValue->type = this->type;
	instanceValue->instance = this->literal;

	return instanceValue;
} // specify

bool EnumerationValue::equals(const ValuePtr& otherValue)
{
	// Test if this enumeration value is equal to the otherValue.
	// To be equal, the otherValue must also be an enumeration value with
	// the same literal as this enumeration value

	bool isEqual = false;
	EnumerationValuePtr enumerationValue = AS(EnumerationValue, otherValue);
	if (enumerationValue)
	{
		isEqual = (enumerationValue->literal == this->literal);
	}

	return isEqual;
} // equals

ValuePtr EnumerationValue::copy()
{
	// Create a new enumeration value with the same value as this enumeration value.

	EnumerationValuePtr newValue = AS(EnumerationValue, Value::copy());

	newValue->type = this->type;
	newValue->literal = this->literal;

	return newValue;
} // copy

ClassifierListPtr EnumerationValue::getTypes()
{
	// Return the single type of this enumeration value.

	ClassifierListPtr types(new ClassifierList());
	types->push_back(this->type);

	return types;
} // getTypes

std::string EnumerationValue::toString()
{
	return this->literal->name;
} // toString

ValuePtr EnumerationValue::new_()
{
	// Return a new enumeration value with no literal.

	return EnumerationValuePtr(new EnumerationValue());
}
