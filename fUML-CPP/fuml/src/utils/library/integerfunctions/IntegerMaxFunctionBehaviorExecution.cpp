/*
 * IntegerMaxFunctionBehaviorExecution.cpp
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#include <utils/library/integerfunctions/IntegerMaxFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::integerfunctions;

IntegerMaxFunctionBehaviorExecution::IntegerMaxFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Max);
}

int IntegerMaxFunctionBehaviorExecution::doIntegerFunction(const std::shared_ptr<std::vector<int>>& arguments)
{
	int i1 = arguments->at(0);
	int i2 = arguments->at(1);

	int i = (i1 >= i2) ? i1 : i2;
	fuml::Debug::println("[doBody] Integer Max result = " + std::to_string(i));
	return i;
}

ValuePtr IntegerMaxFunctionBehaviorExecution::new_()
{
	std::shared_ptr<IntegerMaxFunctionBehaviorExecution> newValue(new IntegerMaxFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
