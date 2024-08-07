/*
 * RealFloorFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/realfunctions/RealFloorFunctionBehaviorExecution.h>

#include <cmath>
#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/IntegerValue.h>
#include <fuml/semantics/simpleclassifiers/RealValue.h>
#include <uml/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::realfunctions;

RealFloorFunctionBehaviorExecution::RealFloorFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Floor);
}

void RealFloorFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	RealValuePtr rv = AS(RealValue, inputParameters->at(0)->values->at(0));
	float x = rv->value;

	int resultInt = std::floor(x);

	IntegerValuePtr result(new IntegerValue());
	result->value = resultInt;
	result->type = this->locus->factory->getBuiltInType("Integer");
	fuml::Debug::println("[doBody] Real Floor result = " + std::to_string(resultInt));

	outputParameters->at(0)->values->push_back(result);
}

ValuePtr RealFloorFunctionBehaviorExecution::new_()
{
	std::shared_ptr<RealFloorFunctionBehaviorExecution> newValue(new RealFloorFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
