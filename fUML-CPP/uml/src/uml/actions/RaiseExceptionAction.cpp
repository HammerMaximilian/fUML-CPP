/*
 * RaiseExceptionAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <uml/actions/RaiseExceptionAction.h>

void RaiseExceptionAction::setException(const InputPinPtr& exception)
{
	Action::addInput(exception);
	this->exception = exception;
} // setException

