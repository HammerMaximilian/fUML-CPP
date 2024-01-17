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

ExecutionPtr DispatchStrategy::dispatch(const Object_Ptr& object, const OperationPtr& operation, bool isExplicitBaseClassCall)
{
	// Extends DispatchStrategy::dispatch(const Object_Ptr&, const OperationPtr&) by flag "isExplicitBaseClassCall"
	// Propagate "isExplicitBaseClassCall" to DispatchStrategy::getMethod

	return object->locus->factory->createExecution(this->getMethod(object, operation, isExplicitBaseClassCall), object);
} // dispatch

BehaviorPtr DispatchStrategy::getMethod(const Object_Ptr& object, const OperationPtr& operation, bool)
{
	return this->getMethod(object, operation);
} // getMethod
