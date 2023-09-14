/*
 * UnlimitedNaturalRelationalFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalRelationalFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/BooleanValue.h>
#include <fuml/semantics/simpleclassifiers/UnlimitedNaturalValue.h>

using namespace fuml::library::unlimitednaturalfunctions;

UnlimitedNaturalRelationalFunctionBehaviorExecution::~UnlimitedNaturalRelationalFunctionBehaviorExecution()
{
}

void UnlimitedNaturalRelationalFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	std::shared_ptr<std::vector<int>> arguments(new std::vector<int>);

	for (const ParameterValuePtr& inputParameter : *inputParameters)
	{
		int value = std::dynamic_pointer_cast<UnlimitedNaturalValue>(inputParameter->values->at(0))->value;
		utils::Debug::println("[doBody] argument = " + std::to_string(value));
		arguments->push_back(value);
	}

	bool value = doUnlimitedNaturalFunction(arguments);

	BooleanValuePtr result(new BooleanValue());
	result->value = value;
	result->type = this->locus->factory->getBuiltInType("Boolean");

	utils::Debug::println("[doBody] result = " + std::to_string(value));

	outputParameters->at(0)->values->push_back(result);
}
