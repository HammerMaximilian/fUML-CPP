/*
 * BooleanImpliesFunctionBehaviorExecution.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <utils/library/booleanfunctions/BooleanImpliesFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::booleanfunctions;

BooleanImpliesFunctionBehaviorExecution::BooleanImpliesFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_Implies);
}

bool BooleanImpliesFunctionBehaviorExecution::doBooleanFunction(const std::shared_ptr<std::vector<bool>>& arguments)
{
	bool b1 = arguments->at(0);
	bool b2 = arguments->at(1);
	bool result = ((!b1) || (b1 && b2));
	fuml::Debug::println("[doBody] Boolean Implies result = " + std::to_string(result));
	return result;
}

ValuePtr BooleanImpliesFunctionBehaviorExecution::new_()
{
	std::shared_ptr<BooleanImpliesFunctionBehaviorExecution> newValue(new BooleanImpliesFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
