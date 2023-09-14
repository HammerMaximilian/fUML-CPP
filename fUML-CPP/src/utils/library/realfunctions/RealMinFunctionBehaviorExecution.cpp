/*
 * RealMinFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/realfunctions/RealMinFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::realfunctions;

RealMinFunctionBehaviorExecution::RealMinFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->RealFunctions_Min);
}

float RealMinFunctionBehaviorExecution::doRealFunction(const std::shared_ptr<std::vector<float>>& arguments)
{
	float x1 = arguments->at(0);
	float x2 = arguments->at(1);

	float x = (x1 <= x2) ? x1 : x2;
	fuml::Debug::println("[doBody] Real Min result = " + std::to_string(x));
	return x;
}

ValuePtr RealMinFunctionBehaviorExecution::new_()
{
	std::shared_ptr<RealMinFunctionBehaviorExecution> newValue(new RealMinFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
