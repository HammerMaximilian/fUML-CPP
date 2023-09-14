/*
 * RealPlusFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/realfunctions/RealPlusFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::realfunctions;

RealPlusFunctionBehaviorExecution::RealPlusFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->RealFunctions_plus);
}

float RealPlusFunctionBehaviorExecution::doRealFunction(const std::shared_ptr<std::vector<float>>& arguments)
{
	float x1 = arguments->at(0);
	float x2 = arguments->at(1);

	float x = x1 + x2;
	utils::Debug::println("[doBody] Real Plus result = " + std::to_string(x));
	return x;
}

ValuePtr RealPlusFunctionBehaviorExecution::new_()
{
	std::shared_ptr<RealPlusFunctionBehaviorExecution> newValue(new RealPlusFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
