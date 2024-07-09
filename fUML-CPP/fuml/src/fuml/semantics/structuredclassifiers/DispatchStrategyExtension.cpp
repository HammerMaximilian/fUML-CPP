/*
 * DispatchStrategyExtension.cpp
 *
 *  Created on: 17.01.2024
 *      Author: maha6913
 */

#include <fuml/semantics/structuredclassifiers/DispatchStrategy.h>

#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/structuredclassifiers/Object_.h>
#include <iostream>
#include <stdexcept>

ExecutionPtr DispatchStrategy::dispatch(const Object_Ptr& object, const OperationPtr& operation, bool isExplicitBaseClassCall)
{
	// Extends DispatchStrategy::dispatch(const Object_Ptr&, const OperationPtr&) by flag "isExplicitBaseClassCall"
	// Propagate "isExplicitBaseClassCall" to DispatchStrategy::getMethod

	BehaviorPtr method = this->getMethod(object, operation, isExplicitBaseClassCall);

	if(method == nullptr)
	{
		std::string message = "[error] Local variable 'method' was null in ";
		message += __PRETTY_FUNCTION__;
		std::cerr << message << std::endl;
		throw std::runtime_error(message);
	}

	return object->locus->factory->createExecution(method, object);
} // dispatch

BehaviorPtr DispatchStrategy::getMethod(const Object_Ptr& object, const OperationPtr& operation, bool)
{
	return this->getMethod(object, operation);
} // getMethod
