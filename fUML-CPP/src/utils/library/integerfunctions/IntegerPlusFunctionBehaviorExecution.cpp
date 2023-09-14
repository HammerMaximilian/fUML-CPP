/*
 * IntegerPlusFunctionBehaviorExecution.cpp
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#include <utils/library/integerfunctions/IntegerPlusFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::integerfunctions;

IntegerPlusFunctionBehaviorExecution::IntegerPlusFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->IntegerFunctions_plus);
}

int IntegerPlusFunctionBehaviorExecution::doIntegerFunction(const std::shared_ptr<std::vector<int>>& arguments)
{
	int i1 = arguments->at(0);
	int i2 = arguments->at(1);

	int i = i1 + i2;
	fuml::Debug::println("[doBody] Integer Plus result = " + std::to_string(i));
	return i;
}

ValuePtr IntegerPlusFunctionBehaviorExecution::new_()
{
	std::shared_ptr<IntegerPlusFunctionBehaviorExecution> newValue(new IntegerPlusFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
