/*
 * BooleanFunctionBehaviorExecution.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <utils/library/booleanfunctions/BooleanFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/BooleanValue.h>

using namespace fuml::library::booleanfunctions;

BooleanFunctionBehaviorExecution::~BooleanFunctionBehaviorExecution()
{
}

void BooleanFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	std::shared_ptr<std::vector<bool>> arguments(new std::vector<bool>);

	for (const ParameterValuePtr& inputParameter : *inputParameters)
	{
		bool value = std::dynamic_pointer_cast<BooleanValue>(inputParameter->values->at(0))->value;
		utils::Debug::println("[doBody] argument = " + std::to_string(value));
		arguments->push_back(value);
	}

	bool value = doBooleanFunction(arguments);

	BooleanValuePtr result(new BooleanValue());
	result->value = value;
	result->type = this->locus->factory->getBuiltInType("Boolean");

	outputParameters->at(0)->values->push_back(result);
}
