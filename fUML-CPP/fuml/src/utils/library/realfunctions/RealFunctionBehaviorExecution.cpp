/*
 * RealFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/realfunctions/RealFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/RealValue.h>

using namespace fuml::library::realfunctions;

RealFunctionBehaviorExecution::~RealFunctionBehaviorExecution()
{
}

void RealFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	// Extract real arguments and perform a real function on them.

	std::shared_ptr<std::vector<float>> arguments(new std::vector<float>);

	for (const ParameterValuePtr& inputParameter : *inputParameters)
	{
		int value = AS(RealValue, inputParameter->values->at(0))->value;
		fuml::Debug::println("[doBody] argument = " + std::to_string(value));
		arguments->push_back(value);
	}

	float value = doRealFunction(arguments);

	// Since float is not a class in C++, no null-check can be performed here
	// Therefore, by now INT_MIN is used as a failure indication
	// TODO Add bool reference parameter to indicate success or failure
	if(value == INT_MIN)
	{
		//Invalid result, return
		return;
	}
	else
	{
		// Add output to the outputParameters list
		RealValuePtr result(new RealValue());
		result->value = value;
		result->type = this->locus->factory->getBuiltInType("Real");

		outputParameters->at(0)->values->push_back(result);
	}
}
