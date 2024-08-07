/*
 * DataValue.cpp
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#include <fuml/semantics/simpleclassifiers/DataValue.h>

#include <uml/simpleclassifiers/DataType.h>

ClassifierListPtr DataValue::getTypes()
{
	// Return the single type of this data value.

	ClassifierListPtr types(new ClassifierList());
	types->push_back(this->type);

	return types;
} // getTypes

ValuePtr DataValue::copy()
{
	// Create a new data value with the same type and feature values as this
	// data value.

	DataValuePtr newValue = AS(DataValue, CompoundValue::copy());

	newValue->type = this->type;

	return newValue;
} // copy

ValuePtr DataValue::new_()
{
	// Create a new data value with no type or feature values.

	return DataValuePtr(new DataValue());
} // new_

