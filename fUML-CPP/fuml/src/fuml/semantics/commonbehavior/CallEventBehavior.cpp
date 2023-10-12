/*
 * CallEventBehavior.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/commonbehavior/CallEventBehavior.h>

#include <fuml/semantics/fwd.h>
#include <fuml/syntax/classification/Operation.h>
#include <fuml/syntax/classification/Parameter.h>

void fuml::semantics::commonbehavior::CallEventBehavior::setThisCallEventBehavior(
	std::weak_ptr<CallEventBehavior> thisCallEventBehaviorPtr)
{
	this->thisCallEventBehaviorPtr = thisCallEventBehaviorPtr;
	Class_::setThisClass_Ptr(thisCallEventBehaviorPtr);
}

void CallEventBehavior::setOperation(const OperationPtr& operation)
{
	// Set the operation for this call event behavior and construct
	// the behavior signature based on the operation signature.

	this->operation = operation;
	const ParameterListPtr& operationParameters = operation->ownedParameter;
	for (const ParameterPtr& operationParameter : *operationParameters)
	{
		ParameterPtr parameter(new Parameter());
		parameter->name = operationParameter->name;
		parameter->type = operationParameter->type;
		parameter->lowerValue = operationParameter->lowerValue;
		parameter->lower = operationParameter->lower;
		parameter->upperValue = operationParameter->upperValue;
		parameter->upper = operationParameter->upper;
		parameter->direction = operationParameter->direction;
		parameter->owner = this->thisCallEventBehaviorPtr.lock();
		parameter->namespace_ = this->thisCallEventBehaviorPtr.lock();

		this->ownedElement->push_back(parameter);
		this->ownedMember->push_back(parameter);
		this->member->push_back(parameter);
		this->ownedParameter->push_back(parameter);
	}
	this->isReentrant = true;
	this->name = "CallEventBehavior";
	if (!operation->name.empty())
	{
		this->name = this->name + "(" + operation->name + ")";
	}
} // setOperation
