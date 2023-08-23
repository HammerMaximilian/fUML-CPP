/*
 * WriteStructuralFeatureAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/WriteStructuralFeatureAction.h>

using namespace fuml::syntax::actions;

WriteStructuralFeatureAction::~WriteStructuralFeatureAction()
{
}

void WriteStructuralFeatureAction::setResult(const std::shared_ptr<OutputPin>& result)
{
	Action::addOutput(result);
	this->result = result;
} // setResult

void WriteStructuralFeatureAction::setValue(const std::shared_ptr<InputPin>& value)
{
	Action::addInput(value);
	this->value = value;
} //setValue
