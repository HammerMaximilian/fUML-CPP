/*
 * IntegerFunctionBehaviorExecution.cpp
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#include <utils/library/integerfunctions/IntegerFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/IntegerValue.h>

using namespace fuml::library::integerfunctions;

IntegerFunctionBehaviorExecution::~IntegerFunctionBehaviorExecution()
{
}

void IntegerFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	std::shared_ptr<std::vector<int>> arguments(new std::vector<int>);

	for (const ParameterValuePtr& inputParameter : *inputParameters)
	{
		int value = AS(IntegerValue, inputParameter->values->at(0))->value;
		fuml::Debug::println("[doBody] argument = " + std::to_string(value));
		arguments->push_back(value);
	}

	int value = doIntegerFunction(arguments);

	IntegerValuePtr result(new IntegerValue());
	result->value = value;
	result->type = this->locus->factory->getBuiltInType("Integer");

	outputParameters->at(0)->values->push_back(result);
}
