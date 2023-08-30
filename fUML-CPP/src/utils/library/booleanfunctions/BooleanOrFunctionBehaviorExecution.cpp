/*
 * BooleanOrFunctionBehaviorExecution.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <utils/library/booleanfunctions/BooleanOrFunctionBehaviorExecution.h>

#include <fuml/Debug.h>

using namespace fuml::library::booleanfunctions;

bool BooleanOrFunctionBehaviorExecution::doBooleanFunction(const std::shared_ptr<std::vector<bool>>& arguments)
{
	bool result = arguments->at(0) || arguments->at(1);
	utils::Debug::println("[doBody] Boolean Or result = " + std::to_string(result));
	return result;
}

ValuePtr BooleanOrFunctionBehaviorExecution::new_()
{
	std::shared_ptr<BooleanOrFunctionBehaviorExecution> newValue(new BooleanOrFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
