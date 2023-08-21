/*
 * ReadLinkAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "ReadLinkAction.h"

using namespace fuml::syntax::actions;

void ReadLinkAction::setResult(const std::shared_ptr<OutputPin>& result)
{
	Action::addOutput(result);
	this->result = result;
} // setResult
