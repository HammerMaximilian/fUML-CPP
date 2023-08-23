/*
 * AcceptCallAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/AcceptCallAction.h>

using namespace fuml::syntax::actions;

void AcceptCallAction::setReturnInformation(const std::shared_ptr<OutputPin>& returnInformation)
{
	Action::addOutput(returnInformation);
	this->returnInformation = returnInformation;
}

