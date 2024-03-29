/*
 * RealAbsFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/realfunctions/RealAbsFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <uml/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::realfunctions;

RealAbsFunctionBehaviorExecution::RealAbsFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Abs);
}

float RealAbsFunctionBehaviorExecution::doRealFunction(const std::shared_ptr<std::vector<float>>& arguments)
{
	float arg1 = arguments->at(0);

	float x = abs(arg1);
	fuml::Debug::println("[doBody] Real Abs result = " + std::to_string(x));
	return x;
}

ValuePtr RealAbsFunctionBehaviorExecution::new_()
{
	std::shared_ptr<RealAbsFunctionBehaviorExecution> newValue(new RealAbsFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
