/*
 * Object_Extension.cpp
 *
 *  Created on: 17.01.2024
 *      Author: maha6913
 */

#include <fuml/semantics/structuredclassifiers/Object_.h>

#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/structuredclassifiers/DispatchStrategy.h>

ExecutionPtr Object_::dispatch(const OperationPtr& operation, bool isExplicitBaseClassCall)
{
	// Extends Object_::dispatch(const OperationPtr&) by flag "isExplicitBaseClassCall".
	// If "isExplicitBaseClassCall" is false, delegate to Object_::dispatch(const OperationPtr&).
	// Otherwise, delegate to DispatchStrategy::dispatch(const Object_Ptr&, const OperationPtr&, bool)

	if(!isExplicitBaseClassCall)
	{
		return this->dispatch(operation);
	}

	DispatchStrategyPtr dispatchStrategy = std::dynamic_pointer_cast<DispatchStrategy>(
		this->locus->factory->getStrategy("dispatch"));

	return dispatchStrategy->dispatch(this->thisObject_Ptr.lock(), operation, isExplicitBaseClassCall);
} // dispatch
