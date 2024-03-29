/*
 * RealNegateFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/realfunctions/RealNegateFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <uml/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::realfunctions;

RealNegateFunctionBehaviorExecution::RealNegateFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Neg);
}

float RealNegateFunctionBehaviorExecution::doRealFunction(const std::shared_ptr<std::vector<float>>& arguments)
{
	float x1 = arguments->at(0);

	float x = -x1;
	fuml::Debug::println("[doBody] Real Negate result = " + std::to_string(x));
	return x;
}

ValuePtr RealNegateFunctionBehaviorExecution::new_()
{
	std::shared_ptr<RealNegateFunctionBehaviorExecution> newValue(new RealNegateFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
