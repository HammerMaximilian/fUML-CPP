/*
 * RealLessThanFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/realfunctions/RealLessThanFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::realfunctions;

RealLessThanFunctionBehaviorExecution::RealLessThanFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->RealFunctions_lessThan);
}

bool RealLessThanFunctionBehaviorExecution::doRealFunction(const std::shared_ptr<std::vector<float>>& arguments)
{
	float x1 = arguments->at(0);
	float x2 = arguments->at(1);

	bool b = (x1 < x2);
	fuml::Debug::println("[doBody] Real Less Than result = " + std::to_string(b));
	return b;
}

ValuePtr RealLessThanFunctionBehaviorExecution::new_()
{
	std::shared_ptr<RealLessThanFunctionBehaviorExecution> newValue(new RealLessThanFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
