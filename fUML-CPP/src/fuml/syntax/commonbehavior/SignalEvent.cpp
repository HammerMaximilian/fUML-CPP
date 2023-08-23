/*
 * SignalEvent.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <SignalEvent.h>

using namespace fuml::syntax::commonbehavior;

void SignalEvent::setSignal(
	const std::shared_ptr<fuml::syntax::simpleclassifiers::Signal>& signal)
{
	this->signal = signal;
} // setSignal
