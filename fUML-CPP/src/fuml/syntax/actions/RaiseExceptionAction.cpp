/*
 * RaiseExceptionAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "RaiseExceptionAction.h"

using namespace fuml::syntax::actions;

void RaiseExceptionAction::setException(const std::shared_ptr<InputPin>& exception)
{
	Action::addInput(exception);
	this->exception = exception;
}



