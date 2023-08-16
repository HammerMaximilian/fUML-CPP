/*
 * Reception.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include "Reception.h"

#include "fuml/syntax/simpleclassifiers/Signal.h"

using namespace fuml::syntax::simpleclassifiers;

void Reception::setSignal(
	const std::shared_ptr<fuml::syntax::simpleclassifiers::Signal>& signal)
{
	this->signal = signal;
}
