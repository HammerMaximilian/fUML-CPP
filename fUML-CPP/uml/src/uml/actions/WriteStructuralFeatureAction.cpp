/*
 * WriteStructuralFeatureAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <uml/actions/WriteStructuralFeatureAction.h>

WriteStructuralFeatureAction::~WriteStructuralFeatureAction()
{
}

void WriteStructuralFeatureAction::setResult(const OutputPinPtr& result)
{
	Action::addOutput(result);
	this->result = result;
} // setResult

void WriteStructuralFeatureAction::setValue(const InputPinPtr& value)
{
	Action::addInput(value);
	this->value = value;
} //setValue
