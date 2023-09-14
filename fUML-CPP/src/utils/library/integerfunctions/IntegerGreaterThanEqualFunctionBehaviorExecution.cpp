/*
 * IntegerGreaterThanEqualFunctionBehaviorExecution.cpp
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#include <utils/library/integerfunctions/IntegerGreaterThanEqualFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::integerfunctions;

IntegerGreaterThanEqualFunctionBehaviorExecution::IntegerGreaterThanEqualFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->IntegerFunctions_greaterOrEqual);
}

bool IntegerGreaterThanEqualFunctionBehaviorExecution::doIntegerFunction(
	const std::shared_ptr<std::vector<int>>& arguments)
{
	int i1 = arguments->at(0);
	int i2 = arguments->at(1);

	bool b = (i1 >= i2);
	fuml::Debug::println("[doBody] Integer Greater Than or Equal result = " + std::to_string(b));
	return b;
}

ValuePtr IntegerGreaterThanEqualFunctionBehaviorExecution::new_()
{
	std::shared_ptr<IntegerGreaterThanEqualFunctionBehaviorExecution> newValue(
		new IntegerGreaterThanEqualFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
