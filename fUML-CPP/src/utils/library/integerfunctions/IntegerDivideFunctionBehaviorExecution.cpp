/*
 * IntegerDivideFunctionBehaviorExecution.cpp
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#include <utils/library/integerfunctions/IntegerDivideFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/IntegerValue.h>
#include <fuml/semantics/simpleclassifiers/RealValue.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::integerfunctions;

IntegerDivideFunctionBehaviorExecution::IntegerDivideFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->IntegerFunctions_divide);
}

void IntegerDivideFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	int arg1 = (std::dynamic_pointer_cast<IntegerValue>(inputParameters->at(0)->values->at(0)))->value;
	int arg2 = (std::dynamic_pointer_cast<IntegerValue>(inputParameters->at(1)->values->at(0)))->value;

	// Check for illegal divide by zero
	if (arg2 == 0)
	{
		fuml::Debug::println("[doBody] Integer Divide, divide by zero not allowed");
		// Invalid input, return
		return;
	}

	RealValuePtr resultObj(new RealValue());
	resultObj->value = ((float) arg1 / (float) arg2);
	resultObj->type = this->locus->factory->getBuiltInType("Real");
	fuml::Debug::println("[doBody] Integer Divide result = " + std::to_string(resultObj->value));

	outputParameters->at(0)->values->push_back(resultObj);
}

ValuePtr IntegerDivideFunctionBehaviorExecution::new_()
{
	std::shared_ptr<IntegerDivideFunctionBehaviorExecution> newValue(new IntegerDivideFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
