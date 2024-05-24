/*
 * ReferenceExtension.cpp
 *
 *  Created on: 17.01.2024
 *      Author: maha6913
 */

#include <fuml/semantics/structuredclassifiers/Reference.h>

#include <fuml/semantics/structuredclassifiers/Object_.h>

ExecutionPtr Reference::dispatch(const OperationPtr& operation, bool isExplicitBaseClassCall)
{
	// Extends Reference::dispatch(const Operation)Ptr& by flag "isExplicitBaseClassCall".
	// If "isExplicitBaseClassCall" is true, delegate to Object_::dispatch(const OperationPtr&, bool).
	// Else, call standard method dispatch(const OperationPtr&) to maintain possible method overriding.

	if(isExplicitBaseClassCall)
	{
		return this->referent->dispatch(operation, isExplicitBaseClassCall);
	}

	else
	{
		return this->dispatch(operation);
	}

} // dispatch
