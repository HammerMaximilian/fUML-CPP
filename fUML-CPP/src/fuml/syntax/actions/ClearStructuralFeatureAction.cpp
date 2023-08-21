/*
 * ClearStructuralFeatureAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "ClearStructuralFeatureAction.h"

using namespace fuml::syntax::actions;

void ClearStructuralFeatureAction::setResult(const std::shared_ptr<OutputPin>& result)
{
	Action::addOutput(result);
	this->result = result;
} // setObject
