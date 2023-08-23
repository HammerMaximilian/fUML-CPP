/*
 * ReadStructuralFeatureAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/ReadStructuralFeatureAction.h>

void ReadStructuralFeatureAction::setResult(const OutputPinPtr& result)
{
	Action::addOutput(result);
	this->result = result;
} // setResult
