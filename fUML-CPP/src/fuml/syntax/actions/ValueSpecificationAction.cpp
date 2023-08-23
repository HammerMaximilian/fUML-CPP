/*
 * ValueSpecificationAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/ValueSpecificationAction.h>

void ValueSpecificationAction::setValue(
	const ValueSpecificationPtr& value)
{
	this->value = value;
} // setValue

void ValueSpecificationAction::setResult(const OutputPinPtr& result)
{
	Action::addOutput(result);
	this->result = result;
} // setResult
