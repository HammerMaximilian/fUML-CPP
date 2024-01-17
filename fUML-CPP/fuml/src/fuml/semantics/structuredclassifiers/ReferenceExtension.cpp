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
	// Delegate "isExplicitBaseClassCall" to Object_::dispatch(const OperationPtr&, bool).

	return this->referent->dispatch(operation, isExplicitBaseClassCall);
} // dispatch
