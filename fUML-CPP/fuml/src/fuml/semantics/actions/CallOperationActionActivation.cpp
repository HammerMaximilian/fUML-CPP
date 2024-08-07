/*
 * CallOperationActionActivation.cpp
 *
 *  Created on: 29.08.2023
 *      Author: maha6913
 */

#include <fuml/semantics/actions/CallOperationActionActivation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/actions/PinActivation.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/structuredclassifiers/Reference.h>
#include <stdexcept>
#include <uml/actions/CallOperationAction.h>
#include <uml/actions/InputPin.h>
#include <uml/classification/Operation.h>

bool CallOperationActionActivation::isReady()
{
	// Check that this call operation action activation is ready to fire as a
	// call action activation and, in addition, that the input pin activation
	// for its target pin is ready to fire.

	bool ready = CallActionActivation::isReady();
	if (ready)
	{
		CallOperationActionPtr action = AS(CallOperationAction, this->node);
		ready = this->getPinActivation(action->target)->isReady();
	}
	return ready;
} // isReady

ExecutionPtr CallOperationActionActivation::getCallExecution()
{
	// If the value on the target input pin is a reference, dispatch the
	// operation to it and return the resulting execution object.

	CallOperationActionPtr action = AS(CallOperationAction, this->node);
	bool isExplicitBaseClassCall = this->isExplicitBaseClassCall(action);
	ValuePtr target = this->takeTokens(action->target)->at(0);

	ExecutionPtr execution;

	ReferencePtr reference = AS(Reference, target);

	if (reference)
	{
		try
		{
			execution = reference->dispatch(action->operation, isExplicitBaseClassCall);
		}
		catch(const std::runtime_error& re)
		{
			Debug::println(re.what());
		}
	}
	else
	{
		execution = nullptr;
	}

	return execution;
} // getCallExecution

ParameterListPtr CallOperationActionActivation::getParameters()
{
	// Get the owned parameters of the operation of the call operation
	// action for this call operation action activation.

	return AS(CallOperationAction, this->node)->operation->ownedParameter;
} // getParameters
