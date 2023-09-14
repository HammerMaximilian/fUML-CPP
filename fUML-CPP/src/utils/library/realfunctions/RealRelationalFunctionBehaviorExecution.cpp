/*
 * RealRelationalFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/realfunctions/RealRelationalFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/BooleanValue.h>
#include <fuml/semantics/simpleclassifiers/RealValue.h>

using namespace fuml::library::realfunctions;

RealRelationalFunctionBehaviorExecution::~RealRelationalFunctionBehaviorExecution()
{
}

void RealRelationalFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	std::shared_ptr<std::vector<float>> arguments(new std::vector<float>);

	for (const ParameterValuePtr& inputParameter : *inputParameters)
	{
		float value = std::dynamic_pointer_cast<RealValue>(inputParameter->values->at(0))->value;
		utils::Debug::println("[doBody] argument = " + std::to_string(value));
		arguments->push_back(value);
	}

	bool value = doRealFunction(arguments);

	BooleanValuePtr result(new BooleanValue());
	result->value = value;
	result->type = this->locus->factory->getBuiltInType("Boolean");

	utils::Debug::println("[doBody] result = " + std::to_string(value));

	outputParameters->at(0)->values->push_back(result);
}
