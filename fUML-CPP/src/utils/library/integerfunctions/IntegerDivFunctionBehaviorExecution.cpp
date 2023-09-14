/*
 * IntegerDivFunctionBehaviorExecution.cpp
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#include <utils/library/integerfunctions/IntegerDivFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::integerfunctions;

IntegerDivFunctionBehaviorExecution::IntegerDivFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->IntegerFunctions_Div);
}

int IntegerDivFunctionBehaviorExecution::doIntegerFunction(const std::shared_ptr<std::vector<int>>& arguments)
{
	int arg1 = arguments->at(0);
	int arg2 = arguments->at(1);

	// Check for illegal divide by zero
	if (arg2 == 0)
	{
		fuml::Debug::println("[doBody] Integer Div, divide by zero not allowed");
		return INT_MIN;
	}

	int i = arg1 / arg2;
	fuml::Debug::println("[doBody] Integer Div result = " + std::to_string(i));
	return i;
}

ValuePtr IntegerDivFunctionBehaviorExecution::new_()
{
	std::shared_ptr<IntegerDivFunctionBehaviorExecution> newValue(new IntegerDivFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
