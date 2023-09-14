/*
 * RealGreaterThanFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/realfunctions/RealGreaterThanFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::realfunctions;

RealGreaterThanFunctionBehaviorExecution::RealGreaterThanFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->RealFunctions_greaterThan);
}

bool RealGreaterThanFunctionBehaviorExecution::doRealFunction(const std::shared_ptr<std::vector<float>>& arguments)
{
	float x1 = arguments->at(0);
	float x2 = arguments->at(1);

	bool b = (x1 > x2);
	utils::Debug::println("[doBody] Real Greater Than result = " + std::to_string(b));
	return b;
}

ValuePtr RealGreaterThanFunctionBehaviorExecution::new_()
{
	std::shared_ptr<RealGreaterThanFunctionBehaviorExecution> newValue(
		new RealGreaterThanFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
