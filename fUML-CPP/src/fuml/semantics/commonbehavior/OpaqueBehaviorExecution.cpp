/*
 * OpaqueBehaviorExecution.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/syntax/commonbehavior/Behavior.h>
#include <fuml/syntax/classification/Parameter.h>

#include <fuml/Debug.h>

OpaqueBehaviorExecution::~OpaqueBehaviorExecution()
{
}

void OpaqueBehaviorExecution::execute()
{
	// Execute the body of the opaque behavior.

	utils::Debug::println(
			"[execute] Opaque behavior " + this->getBehavior()->name + "...");

	ParameterListPtr parameters = this->getBehavior()->ownedParameter;

	ParameterValueListPtr inputs(new ParameterValueList());
	ParameterValueListPtr outputs(new ParameterValueList());

	for (const ParameterPtr &parameter : *parameters)
	{
		if ((parameter->direction == ParameterDirectionKind::in)
				| (parameter->direction == ParameterDirectionKind::inout))
		{
			inputs->push_back(this->getParameterValue(parameter));
		}

		if ((parameter->direction == ParameterDirectionKind::inout)
				| (parameter->direction == ParameterDirectionKind::out)
				| (parameter->direction == ParameterDirectionKind::return_))
		{
			ParameterValuePtr parameterValue(new ParameterValue());
			parameterValue->parameter = parameter;
			this->setParameterValue(parameterValue);
			outputs->push_back(parameterValue);
		}
	}

	this->doBody(inputs, outputs);
}
