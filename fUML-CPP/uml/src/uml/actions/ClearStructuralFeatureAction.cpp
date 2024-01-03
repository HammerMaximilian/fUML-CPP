/*
 * ClearStructuralFeatureAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <uml/actions/ClearStructuralFeatureAction.h>

void ClearStructuralFeatureAction::setResult(const OutputPinPtr& result)
{
	Action::addOutput(result);
	this->result = result;
} // setObject
