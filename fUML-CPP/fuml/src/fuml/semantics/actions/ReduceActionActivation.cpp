/*
 * ReduceActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/ReduceActionActivation.h>

#include <fuml/semantics/commonbehavior/Execution.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/structuredclassifiers/Object_.h>
#include <fuml/semantics/values/Value.h>
#include <uml/actions/ReduceAction.h>
#include <uml/classification/Parameter.h>
#include <uml/commonbehavior/Behavior.h>

void ReduceActionActivation::doAction()
{
	// Get the values of the collection input pin.
	// If the input pin has no values, then do nothing. Otherwise, do the
	// following.
	// Repeatedly invoke the reducer behavior on successive pairs to reduce
	// the collection to a single value, and place that value on the result
	// pin.
	// To invoke the reducer behavior, compile it to create an execution,
	// make the execution the current execution, place the appropriate
	// values on its input parameters, and execute it.

	ReduceActionPtr action = std::dynamic_pointer_cast<ReduceAction>(this->node);

	ValueListPtr values = this->takeTokens(action->collection);

	if (values->size() > 0)
	{
		const ParameterListPtr& parameters = action->reducer->ownedParameter;
		ParameterPtr input1 = nullptr;
		ParameterPtr input2 = nullptr;
		ParameterPtr output = nullptr;

		for (const ParameterPtr& parameter : *parameters)
		{
			if (parameter->direction == ParameterDirectionKind::in)
			{
				if (input1 == nullptr)
				{
					input1 = parameter;
				}
				else
				{
					input2 = parameter;
				}
			}
			else if (parameter->direction == ParameterDirectionKind::out
				|| parameter->direction == ParameterDirectionKind::return_)
			{
				output = parameter;
			}
		}

		ParameterValuePtr parameterValue1(new ParameterValue());
		parameterValue1->parameter = input1;
		parameterValue1->values.reset(new ValueList());
		parameterValue1->values->push_back(values->at(0));

		unsigned int i = 2;
		unsigned int valuesSize = values->size();
		while (i <= valuesSize)
		{
			this->currentExecution = this->getExecutionLocus()->factory->createExecution(action->reducer,
				this->getExecutionContext());

			this->currentExecution->setParameterValue(parameterValue1);

			ParameterValuePtr parameterValue2(new ParameterValue());
			parameterValue2->parameter = input2;
			parameterValue2->values.reset(new ValueList());
			parameterValue2->values->push_back(values->at(i - 1));
			this->currentExecution->setParameterValue(parameterValue2);

			this->currentExecution->execute();

			parameterValue1->values = this->currentExecution->getParameterValue(output)->values;

			i = i + 1;

			if (parameterValue1->values->empty() && i <= values->size())
			{
				parameterValue1->values->push_back(values->at(i - 1));
				i = i + 1;
			}

		}

		this->putTokens(action->result, parameterValue1->values);
	}
} // doAction

void ReduceActionActivation::terminate()
{
	// If there is a current execution, terminate it. Then terminate self.

	if (this->currentExecution != nullptr)
	{
		this->currentExecution->terminate();
	}

	ActionActivation::terminate();
} // terminate
