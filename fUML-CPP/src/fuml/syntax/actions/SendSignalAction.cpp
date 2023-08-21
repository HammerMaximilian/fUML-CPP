/*
 * SendSignalAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "SendSignalAction.h"

using namespace fuml::syntax::actions;

void SendSignalAction::setTarget(const std::shared_ptr<InputPin>& target)
{
	Action::addInput(target);
	this->target = target;
} // setTarget

void SendSignalAction::setSignal(
	const std::shared_ptr<fuml::syntax::simpleclassifiers::Signal>& signal)
{
	this->signal = signal;
} // setSignal
