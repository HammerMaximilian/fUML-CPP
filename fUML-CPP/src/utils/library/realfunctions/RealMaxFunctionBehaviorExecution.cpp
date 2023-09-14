/*
 * RealMaxFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/realfunctions/RealMaxFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::realfunctions;

RealMaxFunctionBehaviorExecution::RealMaxFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->RealFunctions_Max);
}

float RealMaxFunctionBehaviorExecution::doRealFunction(const std::shared_ptr<std::vector<float>>& arguments)
{
	float x1 = arguments->at(0);
	float x2 = arguments->at(1);

	float x = (x1 >= x2) ? x1 : x2;
	utils::Debug::println("[doBody] Real Max result = " + std::to_string(x));
	return x;
}

ValuePtr RealMaxFunctionBehaviorExecution::new_()
{
	std::shared_ptr<RealMaxFunctionBehaviorExecution> newValue(new RealMaxFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
