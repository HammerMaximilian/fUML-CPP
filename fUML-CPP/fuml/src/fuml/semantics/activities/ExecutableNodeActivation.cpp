/*
 * ExecutableNodeActivation.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/activities/ExecutableNodeActivation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/actions/StructuredActivityNodeActivation.h>
#include <fuml/semantics/activities/ActivityExecution.h>
#include <fuml/semantics/activities/ActivityNodeActivationGroup.h>
#include <fuml/semantics/activities/ObjectToken.h>
#include <fuml/semantics/loci/ChoiceStrategy.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/syntax/activities/ExceptionHandler.h>
#include <fuml/syntax/activities/ExecutableNode.h>
#include <fuml/syntax/activities/ObjectNode.h>

ExecutableNodeActivation::~ExecutableNodeActivation()
{
}

void ExecutableNodeActivation::propagateException(const ValuePtr& exception)
{
	// If there is no matching exception handler for the given exception, then propagate
	// the exception to either the containing node activation or the activity execution, as
	// appropriate.
	// If there is a matching exception handler, then use it to catch the exception.
	// (If there is more than one matching handler, then choose one non-deterministically.)

	ExceptionHandlerListPtr matchingExceptionHandlers = this->getMatchingExceptionHandlers(exception);

	if (matchingExceptionHandlers->size() == 0)
	{
		ActivityNodeActivationGroupPtr group = this->group.lock();
		StructuredActivityNodeActivationPtr containingNodeActivation = group->containingNodeActivation.lock();

		this->terminate();
		if (containingNodeActivation != nullptr)
		{
			containingNodeActivation->propagateException(exception);
		}
		else
		{
			group->activityExecution.lock()->propagateException(exception);
		}
	}
	else
	{
		ChoiceStrategyPtr strategy = std::dynamic_pointer_cast<ChoiceStrategy>(
			this->getExecutionLocus()->factory->getStrategy("choice"));
		ExceptionHandlerPtr handler = matchingExceptionHandlers->at(
			strategy->choose(matchingExceptionHandlers->size()) - 1);
		this->handle(exception, handler);
	}
} // propagateException

ExceptionHandlerListPtr ExecutableNodeActivation::getMatchingExceptionHandlers(const ValuePtr& exception)
{
	// Return the set of exception handlers that have an exception type
	// for which the given exception is an instance.

	ExceptionHandlerListPtr handlers = std::dynamic_pointer_cast<ExecutableNode>(this->node)->handler;
	ExceptionHandlerListPtr matchingHandlers(new ExceptionHandlerList());

	for (const ExceptionHandlerPtr& handler : *handlers)
	{
		bool noMatch = true;
		unsigned int j = 1;
		unsigned int exceptionTypeSize = handler->exceptionType->size();
		while (noMatch && j <= exceptionTypeSize)
		{
			if (exception->isInstanceOf(handler->exceptionType->at(j - 1)))
			{
				matchingHandlers->push_back(handler);
				noMatch = false;
			}
			j = j + 1;
		}

	}

	return matchingHandlers;
} // getMatchingExceptionHandlers

void ExecutableNodeActivation::handle(const ValuePtr& exception, const ExceptionHandlerPtr& handler)
{
	// Offer the given exception to the body of the given exception handler
	// on its exception input node.

	fuml::Debug::println(
		"[handle] action = " + this->node->name + ", exception = " + std::to_string(exception->hashCode()));

	ActivityNodeActivationPtr handlerBodyActivation = this->group.lock()->getNodeActivation(handler->handlerBody);
	ActivityNodeActivationPtr inputActivation = handlerBodyActivation->group.lock()->getNodeActivation(
		handler->exceptionInput);

	ObjectTokenPtr token(new ObjectToken());
	token->setThisObjectTokenPtr(token);
	token->value = exception;
	inputActivation->addToken(token);

	handlerBodyActivation->receiveOffer();
} // handle
