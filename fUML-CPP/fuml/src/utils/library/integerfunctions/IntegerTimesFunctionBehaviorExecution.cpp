/*
 * IntegerTimesFunctionBehaviorExecution.cpp
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#include <utils/library/integerfunctions/IntegerTimesFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <uml/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::integerfunctions;

IntegerTimesFunctionBehaviorExecution::IntegerTimesFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_times);
}

int IntegerTimesFunctionBehaviorExecution::doIntegerFunction(const std::shared_ptr<std::vector<int>>& arguments)
{
	int i1 = arguments->at(0);
	int i2 = arguments->at(1);

	int i = i1 * i2;
	fuml::Debug::println("[doBody] Integer Multiply result = " + std::to_string(i));
	return i;
}

ValuePtr IntegerTimesFunctionBehaviorExecution::new_()
{
	std::shared_ptr<IntegerTimesFunctionBehaviorExecution> newValue(new IntegerTimesFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
