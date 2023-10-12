/*
 * SendSignalAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/SendSignalAction.h>

void SendSignalAction::setTarget(const InputPinPtr& target)
{
	Action::addInput(target);
	this->target = target;
} // setTarget

void SendSignalAction::setSignal(const SignalPtr& signal)
{
	this->signal = signal;
} // setSignal
