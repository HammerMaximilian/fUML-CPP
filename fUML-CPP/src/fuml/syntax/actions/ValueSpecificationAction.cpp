/*
 * ValueSpecificationAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "ValueSpecificationAction.h"

using namespace fuml::syntax::actions;

void ValueSpecificationAction::setValue(
	const std::shared_ptr<fuml::syntax::values::ValueSpecification>& value)
{
	this->value = value;
} // setValue

void ValueSpecificationAction::setResult(const std::shared_ptr<OutputPin>& result)
{
	Action::addOutput(result);
	this->result = result;
} // setResult
