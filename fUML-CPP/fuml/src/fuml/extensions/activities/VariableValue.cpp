/*
 * VariableValue.cpp
 *
 *  Created on: 02.12.2025
 *      Author: maxs
 */

#include <fuml/extensions/activities/VariableValue.h>

#include <fuml/semantics/values/Value.h>

VariableValuePtr VariableValue::copy()
{
	// Create a copy of this feature value.

	VariableValuePtr newValue(new VariableValue());

	newValue->variable = this->variable;
	newValue->position = this->position;

	const ValueListPtr& values = this->values;
	for (const ValuePtr& value : *values) {
		newValue->values->push_back(value->copy());
	}

	return newValue;
}
