/*
 * Execution.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/commonbehavior/Execution.h>

#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/syntax/classification/Parameter.h>
#include <fuml/syntax/classification/ParameterDirectionKind.h>
#include <fuml/syntax/commonbehavior/Behavior.h>

Execution::~Execution()
{
}

void Execution::terminate()
{
	// Terminate an ongoing execution. By default, do nothing.

	return;
} // terminate

ValuePtr Execution::copy()
{
	// Create a new execution that has the same behavior and parameterValues
	// as this execution.

	ExecutionPtr newValue = std::dynamic_pointer_cast<Execution>(Object_::copy());

	newValue->context = this->context;

	const ParameterValueListPtr& parameterValues = this->parameterValues;
	for (const ParameterValuePtr& parameterValue : *parameterValues)
	{
		newValue->parameterValues->push_back(parameterValue->copy());
	}

	return newValue;
} // copy

void Execution::setParameterValue(const ParameterValuePtr& parameterValue)
{
	// Set the given parameter value for this execution.
	// If a parameter value already existed for the parameter of the given
	// parameter value, then replace its value.

	// Debug.println("[setParameterValue] parameter = " +
	// parameterValue.parameter.name + " with " +
	// parameterValue.values.size() + " values");

	ParameterValuePtr existingParameterValue = this->getParameterValue(parameterValue->parameter);

	if (existingParameterValue == nullptr)
	{
		this->parameterValues->push_back(parameterValue);
	}
	else
	{
		existingParameterValue->values = parameterValue->values;
	}
} // setParameterValue

ParameterValuePtr Execution::getParameterValue(const ParameterPtr& parameter)
{
	// Get the parameter value of this execution corresponding to the given
	// parameter (if any).

	ParameterValuePtr parameterValue = nullptr;
	unsigned int i = 1;
	unsigned int parameterValuesSize = this->parameterValues->size();
	while (parameterValue == nullptr && i <= parameterValuesSize)
	{
		if (this->parameterValues->at(i - 1)->parameter == parameter)
		{
			parameterValue = this->parameterValues->at(i - 1);
		}
		i = i + 1;
	}

	return parameterValue;
} // getParameterValue

ParameterValueListPtr Execution::getOutputParameterValues()
{
	// Return the parameter values for output (in-out, out and return)
	// parameters.

	ParameterValueListPtr outputs(new ParameterValueList());
	const ParameterValueListPtr& parameterValues = this->parameterValues;
	for (const ParameterValuePtr& parameterValue : *parameterValues)
	{
		ParameterPtr parameter = parameterValue->parameter;
		if ((parameter->direction == ParameterDirectionKind::inout)
			|| (parameter->direction == ParameterDirectionKind::out)
			|| (parameter->direction == ParameterDirectionKind::return_))
		{
			outputs->push_back(parameterValue);
		}
	}

	return outputs;
} // getOutputParameterValues

BehaviorPtr Execution::getBehavior()
{
	// Get the behavior that is the type of this execution.

	return std::dynamic_pointer_cast<Behavior>(this->getTypes()->at(0));
} // getBehavior

void Execution::destroy()
{
	// Terminate the execution before destroying it.

	this->terminate();
	Object_::destroy();
} // destroy

void Execution::propagateException(const ValuePtr& exception)
{
	// Set the propagated exception for this execution to the given exception,
	// then terminate the execution.

	this->exception = exception;
	this->terminate();
} // propagateException
