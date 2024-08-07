/*
 * RealRoundFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/realfunctions/RealRoundFunctionBehaviorExecution.h>

#include <cmath>
#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/RealValue.h>
#include <fuml/semantics/simpleclassifiers/IntegerValue.h>
#include <uml/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::realfunctions;

RealRoundFunctionBehaviorExecution::RealRoundFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Round);
}

void RealRoundFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	RealValuePtr rv = AS(RealValue, inputParameters->at(0)->values->at(0));
	float x = rv->value;
	fuml::Debug::println("[doBody] argument = " + std::to_string(x));

	int resultInt = std::round(x);

	IntegerValuePtr result(new IntegerValue());
	result->value = resultInt;
	result->type = this->locus->factory->getBuiltInType("Integer");

	fuml::Debug::println("[doBody] Real Round result = " + resultInt);

	// Add output to the outputParameters list
	outputParameters->at(0)->values->push_back(result);
}

ValuePtr RealRoundFunctionBehaviorExecution::new_()
{
	std::shared_ptr<RealRoundFunctionBehaviorExecution> newValue(
		new RealRoundFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
