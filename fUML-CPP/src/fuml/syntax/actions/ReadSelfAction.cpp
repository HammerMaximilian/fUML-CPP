/*
 * ReadSelfAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "ReadSelfAction.h"

using namespace fuml::syntax::actions;

void ReadSelfAction::setResult(const std::shared_ptr<OutputPin>& result)
{
	Action::addOutput(result);
	this->result = result;
} // setResult
