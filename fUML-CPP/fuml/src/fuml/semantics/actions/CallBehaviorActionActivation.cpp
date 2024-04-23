/*
 * CallBehaviorActionActivation.cpp
 *
 *  Created on: 29.08.2023
 *      Author: maha6913
 */

#include <fuml/semantics/actions/CallBehaviorActionActivation.h>

#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/structuredclassifiers/Object_.h>
#include <uml/actions/CallBehaviorAction.h>
#include <uml/commonbehavior/Behavior.h>

ExecutionPtr CallBehaviorActionActivation::getCallExecution()
{
	// Create and execution for the given behavior at the current locus and
	// return the resulting execution object.
	// If the given behavior is in the context of a classifier, then pass
	// the current context object as the context for the call.
	// Otherwise, use a null context.
	// [Note that this requires the behavior context to be compatible with
	// the type of the current contect object.]

	const BehaviorPtr& behavior = AS(CallBehaviorAction, this->node)->behavior;

	Object_Ptr context;
	if (behavior->context.lock() == nullptr)
	{
		context = nullptr;
	}
	else
	{
		context = this->getExecutionContext();
	}

	return this->getExecutionLocus()->factory->createExecution(behavior, context);

} // getCallExecution

ParameterListPtr CallBehaviorActionActivation::getParameters()
{
	// Get the owned parameters of the behavior of the call behavior
	// action for this call behavior action activation.

	return AS(CallBehaviorAction, this->node)->behavior->ownedParameter;
} // getParameters
