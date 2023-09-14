/*
 * IntegerAbsFunctionBehaviorExecution.cpp
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#include <utils/library/integerfunctions/IntegerAbsFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::integerfunctions;

IntegerAbsFunctionBehaviorExecution::IntegerAbsFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->IntegerFunctions_Abs);
}

int IntegerAbsFunctionBehaviorExecution::doIntegerFunction(const std::shared_ptr<std::vector<int>>& arguments)
{
	int arg1 = arguments->at(0);

	int i = abs(arg1);
	fuml::Debug::println("[doBody] Integer Abs result = " + std::to_string(i));
	return i;
}

ValuePtr IntegerAbsFunctionBehaviorExecution::new_()
{
	std::shared_ptr<IntegerAbsFunctionBehaviorExecution> newValue(new IntegerAbsFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}

