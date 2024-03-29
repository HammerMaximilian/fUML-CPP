/*
 * RealMinusFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/realfunctions/RealMinusFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <uml/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::realfunctions;

RealMinusFunctionBehaviorExecution::RealMinusFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_minus);
}

float RealMinusFunctionBehaviorExecution::doRealFunction(const std::shared_ptr<std::vector<float>>& arguments)
{
	float x1 = arguments->at(0);
	float x2 = arguments->at(1);

	float x = x1 - x2;
	fuml::Debug::println("[doBody] Real Minus result = " + std::to_string(x));
	return x;
}

ValuePtr RealMinusFunctionBehaviorExecution::new_()
{
	std::shared_ptr<RealMinusFunctionBehaviorExecution> newValue(new RealMinusFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
