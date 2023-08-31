/*
 * BooleanNotFunctionBehaviorExecution.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <utils/library/booleanfunctions/BooleanNotFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::booleanfunctions;

BooleanNotFunctionBehaviorExecution::BooleanNotFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->BooleanFunctions_Not);
}

bool BooleanNotFunctionBehaviorExecution::doBooleanFunction(const std::shared_ptr<std::vector<bool>>& arguments)
{
	bool result = (!arguments->at(0));
	utils::Debug::println("[doBody] Boolean Not result = " + std::to_string(result));
	return result;
}

ValuePtr BooleanNotFunctionBehaviorExecution::new_()
{
	std::shared_ptr<BooleanNotFunctionBehaviorExecution> newValue(new BooleanNotFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
