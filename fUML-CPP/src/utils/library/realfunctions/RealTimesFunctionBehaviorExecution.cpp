/*
 * RealTimesFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/realfunctions/RealTimesFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::realfunctions;

RealTimesFunctionBehaviorExecution::RealTimesFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->RealFunctions_times);
}

float RealTimesFunctionBehaviorExecution::doRealFunction(const std::shared_ptr<std::vector<float>>& arguments)
{
	float x1 = arguments->at(0);
	float x2 = arguments->at(1);

	float x = x1 * x2;
	utils::Debug::println("[doBody] Real Multiply result = " + std::to_string(x));
	return x;
}

ValuePtr RealTimesFunctionBehaviorExecution::new_()
{
	std::shared_ptr<RealTimesFunctionBehaviorExecution> newValue(new RealTimesFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
