/*
 * UnlimitedNaturalFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/UnlimitedNaturalValue.h>

using namespace fuml::library::unlimitednaturalfunctions;

UnlimitedNaturalFunctionBehaviorExecution::~UnlimitedNaturalFunctionBehaviorExecution()
{
}

void UnlimitedNaturalFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	std::shared_ptr<std::vector<int>> arguments(new std::vector<int>);

	for (const ParameterValuePtr& inputParameter : *inputParameters)
	{
		int value = std::dynamic_pointer_cast<UnlimitedNaturalValue>(inputParameter->values->at(0))->value;
		fuml::Debug::println("[doBody] argument = " + std::to_string(value));
		arguments->push_back(value);
	}

	int value = doUnlimitedNaturalFunction(arguments);

	UnlimitedNaturalValuePtr result(new UnlimitedNaturalValue());
	result->value = value;
	result->type = this->locus->factory->getBuiltInType("UnlimitedNatural");

	outputParameters->at(0)->values->push_back(result);
}
