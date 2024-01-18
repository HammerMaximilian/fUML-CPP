/*
 * RealDivideFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/realfunctions/RealDivideFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <uml/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::realfunctions;

RealDivideFunctionBehaviorExecution::RealDivideFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_divide);
}

float RealDivideFunctionBehaviorExecution::doRealFunction(const std::shared_ptr<std::vector<float>>& arguments)
{
	// Compute the real divide function.

	float arg1 = arguments->at(0);
	float arg2 = arguments->at(1);

	// Check for illegal divide by zero
	if (arg2 == 0) {
		fuml::Debug::println("[doBody] Real Divide, divide by zero not allowed");
		return INT_MIN;
	}

	// Perform Divide function
	float x = arg1/arg2;
	fuml::Debug::println("[doBody] Real Divide result = " + std::to_string(x));
	return x;
}

ValuePtr RealDivideFunctionBehaviorExecution::new_()
{
	std::shared_ptr<RealDivideFunctionBehaviorExecution> newValue(new RealDivideFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
