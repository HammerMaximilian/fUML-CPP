/*
 * RedefinitionBasedDispatchStrategy.cpp
 *
 *  Created on: 26.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/structuredclassifiers/RedefinitionBasedDispatchStrategy.h>

#include <fuml/semantics/structuredclassifiers/Object_.h>
#include <fuml/syntax/classification/Operation.h>
#include <fuml/syntax/structuredclassifiers/Class_.h>

BehaviorPtr RedefinitionBasedDispatchStrategy::getMethod(const Object_Ptr& object, const OperationPtr& memberOperation)
{
	// Find the member operation of a type of the given object that
	// is the same as or a redefinition of the given operation. Then
	// return the method of that operation, if it has one, otherwise
	// return a CallEventBehavior as the effective method for the
	// matching operation.
	// [If there is more than one type with a matching operation, then
	// the first one is arbitrarily chosen.]

	BehaviorPtr method = nullptr;
	unsigned int i = 1;
	unsigned int typesSize = object->types->size();

	while (method == nullptr && i <= typesSize)
	{
		Class_Ptr type = object->types->at(i - 1);
		NamedElementListPtr members = type->member();
		unsigned int j = 1;
		unsigned int membersSize = members->size();

		while (method == nullptr && j <= membersSize)
		{
			NamedElementPtr member = members->at(j - 1);
			OperationPtr operation = std::dynamic_pointer_cast<Operation>(member);

			if (operation)
			{
				if (this->operationsMatch(memberOperation, operation))
				{
					if (memberOperation->method->size() == 0)
					{
						method = DispatchStrategy::getMethod(object, memberOperation);
					}
					else
					{
						method = memberOperation->method->at(0);
					}
				}
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return method;
}

bool fuml::semantics::structuredclassifiers::RedefinitionBasedDispatchStrategy::operationsMatch(
	const OperationPtr& ownedOperation, const OperationPtr& baseOperation)
{
	// Check if the owned operation is equal to or a redefinition (directly
	// or indirectly) of the base operation.

	bool matches = false;
	if (ownedOperation == baseOperation)
	{
		matches = true;
	}
	else
	{
		unsigned int i = 1;
		unsigned int redefinedOperationSize = ownedOperation->redefinedOperation->size();
		while (!matches && i <= redefinedOperationSize)
		{
			matches = this->operationsMatch(ownedOperation->redefinedOperation->at(i - 1), baseOperation);
			i = i + 1;
		}
	}

	return matches;
}
