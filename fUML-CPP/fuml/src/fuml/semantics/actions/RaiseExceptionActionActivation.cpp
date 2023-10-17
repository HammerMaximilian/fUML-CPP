/*
 * RaiseExceptionActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/RaiseExceptionActionActivation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/values/Value.h>
#include <fuml/syntax/actions/RaiseExceptionAction.h>

void RaiseExceptionActionActivation::doAction()
{
	// Get the value on the exception pin and propagate it as an exception.

	RaiseExceptionActionPtr action = std::dynamic_pointer_cast<RaiseExceptionAction>(this->node);
	ValuePtr exception = this->takeTokens(action->exception)->at(0);

	fuml::Debug::println(
		"[doAction] action = " + action->name + ", exception = " + std::to_string(exception->hashCode()));

	this->propagateException(exception);
} // doAction
