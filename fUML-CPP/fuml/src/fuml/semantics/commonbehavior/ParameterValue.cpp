/*
 * ParameterValue.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/commonbehavior/ParameterValue.h>

#include <fuml/semantics/values/Value.h>

ParameterValuePtr ParameterValue::copy()
{
	// Create a new parameter value for the same parameter as this parameter
	// value, but with copies of the values of this parameter value.

	ParameterValuePtr newValue(new ParameterValue());

	newValue->parameter = this->parameter;

	const ValueListPtr& values = this->values;
	for (const ValuePtr& value : *values)
	{
		newValue->values->push_back(value->copy());
	}

	return newValue;
} // copy
