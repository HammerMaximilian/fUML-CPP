/*
 * RealToRealFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/realfunctions/RealToIntegerFunctionBehaviorExecution.h>

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

RealToIntegerFunctionBehaviorExecution::RealToIntegerFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_ToInteger);
}

void RealToIntegerFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	RealValuePtr rv = AS(RealValue, inputParameters->at(0)->values->at(0));
	float x = rv->value;
	fuml::Debug::println("[doBody] argument = " + std::to_string(x));

	int resultInt = (int)((x >= 0) ? std::floor(x) : -(std::floor(x)));

	IntegerValuePtr result(new IntegerValue());
	result->value = resultInt;
	result->type = this->locus->factory->getBuiltInType("Integer");

	fuml::Debug::println("[doBody] Real ToInteger result = " + resultInt);

	// Add output to the outputParameters list
	outputParameters->at(0)->values->push_back(result);
}

ValuePtr RealToIntegerFunctionBehaviorExecution::new_()
{
	std::shared_ptr<RealToIntegerFunctionBehaviorExecution> newValue(
		new RealToIntegerFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
