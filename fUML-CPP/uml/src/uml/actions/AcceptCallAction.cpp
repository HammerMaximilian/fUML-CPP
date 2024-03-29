/*
 * AcceptCallAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <uml/actions/AcceptCallAction.h>

void AcceptCallAction::setReturnInformation(const OutputPinPtr& returnInformation)
{
	Action::addOutput(returnInformation);
	this->returnInformation = returnInformation;
}

