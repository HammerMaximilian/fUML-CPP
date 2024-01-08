/*
 * Reception.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <uml/simpleclassifiers/Reception.h>

void Reception::setSignal(const SignalPtr& signal)
{
	this->signal = signal;
}

void Reception::_setInterface(const InterfacePtr& interface_)
{
	this->interface = interface_;
}
