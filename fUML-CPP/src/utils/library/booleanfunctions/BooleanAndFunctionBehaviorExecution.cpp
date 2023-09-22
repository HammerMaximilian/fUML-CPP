/*
 * BooleanAndFunctionBehaviorExecution.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <utils/library/booleanfunctions/BooleanAndFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::booleanfunctions;

BooleanAndFunctionBehaviorExecution::BooleanAndFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_And);
}

bool BooleanAndFunctionBehaviorExecution::doBooleanFunction(const std::shared_ptr<std::vector<bool>>& arguments)
{
	bool result = arguments->at(0) && arguments->at(1);
	fuml::Debug::println("[doBody] Boolean And result = " + std::to_string(result));
	return result;
}

ValuePtr BooleanAndFunctionBehaviorExecution::new_()
{
	std::shared_ptr<BooleanAndFunctionBehaviorExecution> newValue(new BooleanAndFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
