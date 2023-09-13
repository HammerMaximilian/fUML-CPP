/*
 * OperationExecution.cpp
 *
 *  Created on: 13.09.2023
 *      Author: maha6913
 */

#include <utils/library/libraryclass/OperationExecution.h>

#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/syntax/classification/Operation.h>
#include <fuml/syntax/classification/Parameter.h>
#include <fuml/syntax/commonbehavior/OpaqueBehavior.h>
#include <utils/library/libraryclass/ImplementationObject.h>

using namespace fuml::library::libraryclass;

void OperationExecution::setThisOperationExecutionPtr(std::weak_ptr<OperationExecution> thisOperationExecutionPtr)
{
	this->thisOperationExecutionPtr = thisOperationExecutionPtr;
	Object_::setThisObject_Ptr(thisOperationExecutionPtr);
}

void OperationExecution::set(const std::shared_ptr<ImplementationObject>& context, const OperationPtr& operation)
{
	this->context = context;

	OpaqueBehaviorPtr method(new OpaqueBehavior());
	method->setThisClass_Ptr(method);
	method->specification = operation;

	for (const ParameterPtr& operationParameter : *(operation->ownedParameter))
	{
		ParameterPtr methodParameter(new Parameter());
		methodParameter->setThisElementPtr(methodParameter);
		methodParameter->name = operationParameter->name;
		methodParameter->direction = operationParameter->direction;
		methodParameter->type = operationParameter->type;
		methodParameter->upper = operationParameter->upper;
		methodParameter->upperValue = operationParameter->upperValue;
		methodParameter->lower = operationParameter->lower;
		methodParameter->lowerValue = operationParameter->lowerValue;
		methodParameter->isOrdered = operationParameter->isOrdered;
		methodParameter->isUnique = operationParameter->isUnique;

		method->ownedParameter->push_back(methodParameter);
	}

	this->types->push_back(method);
}

ValuePtr OperationExecution::new_()
{
	std::shared_ptr<OperationExecution> newValue(new OperationExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}

void OperationExecution::execute()
{

	// Note: The following ensures that this operation execution has
	// output parameter values for all output parameters in the correct
	// order. (Except inout parameters may still be out of order.)

	const ParameterListPtr& behaviorParameters = this->getBehavior()->ownedParameter;

	for (const ParameterPtr& parameter : *behaviorParameters)
	{
		if (parameter->direction == ParameterDirectionKind::out
			|| parameter->direction == ParameterDirectionKind::return_)
		{
			this->setParameterValue(parameter, ValueListPtr(new ValueList()));
		}
	}

	std::dynamic_pointer_cast<ImplementationObject>(this->context)->execute(thisOperationExecutionPtr.lock());
}

std::string OperationExecution::getOperationName()
{
	return this->getBehavior()->specification->name;
}

ParameterPtr OperationExecution::getParameter(std::string parameterName)
{
	BehaviorPtr method = this->getBehavior();

	for (const ParameterPtr& parameter : *(method->ownedParameter))
	{
		if (parameter->name == parameterName)
		{
			return parameter;
		}
	}

	return nullptr;
}

ParameterValuePtr OperationExecution::getParameterValue(std::string parameterName)
{
	return Execution::getParameterValue(this->getParameter(parameterName));
}

void OperationExecution::setParameterValue(const ParameterPtr& parameter, const ValueListPtr& values)
{
	if (parameter != nullptr)
	{
		ParameterValuePtr parameterValue(new ParameterValue());
		parameterValue->parameter = parameter;
		parameterValue->values = values;

		Execution::setParameterValue(parameterValue);
	}
}

void OperationExecution::setParameterValue(std::string parameterName, const ValueListPtr& values)
{
	this->setParameterValue(this->getParameter(parameterName), values);
}

void OperationExecution::setParameterValue(std::string parameterName, const ValuePtr& value)
{
	ValueListPtr valueList(new ValueList());
	valueList->push_back(value);
	this->setParameterValue(parameterName, valueList);
}

void OperationExecution::setReturnParameterValue(const ValueListPtr& values)
{
	BehaviorPtr method = this->getBehavior();

	for (const ParameterPtr& parameter : *(method->ownedParameter))
	{
		if (parameter->direction == ParameterDirectionKind::return_)
		{
			this->setParameterValue(parameter, values);
			return;
		}
	}
}

void OperationExecution::setReturnParameterValue(const ValuePtr& value)
{
	ValueListPtr valueList(new ValueList());
	valueList->push_back(value);
	this->setReturnParameterValue(valueList);
}
