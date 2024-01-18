/*
 * BooleanXorFunctionBehaviorExecution.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <utils/library/booleanfunctions/BooleanXorFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <uml/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::booleanfunctions;

BooleanXorFunctionBehaviorExecution::BooleanXorFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_Xor);
}

bool BooleanXorFunctionBehaviorExecution::doBooleanFunction(const std::shared_ptr<std::vector<bool>>& arguments)
{
	bool result = arguments->at(0) != arguments->at(1);
	fuml::Debug::println("[doBody] Boolean Xor result = " + std::to_string(result));
	return result;
}

ValuePtr BooleanXorFunctionBehaviorExecution::new_()
{
	std::shared_ptr<BooleanXorFunctionBehaviorExecution> newValue(new BooleanXorFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
