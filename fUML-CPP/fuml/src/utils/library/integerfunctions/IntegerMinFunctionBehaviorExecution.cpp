/*
 * IntegerMinFunctionBehaviorExecution.cpp
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#include <utils/library/integerfunctions/IntegerMinFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <uml/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::integerfunctions;

IntegerMinFunctionBehaviorExecution::IntegerMinFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Min);
}

int IntegerMinFunctionBehaviorExecution::doIntegerFunction(const std::shared_ptr<std::vector<int>>& arguments)
{
	int i1 = arguments->at(0);
	int i2 = arguments->at(1);

	int i = (i1 <= i2) ? i1 : i2;
	fuml::Debug::println("[doBody] Integer Min result = " + std::to_string(i));
	return i;
}

ValuePtr IntegerMinFunctionBehaviorExecution::new_()
{
	std::shared_ptr<IntegerMinFunctionBehaviorExecution> newValue(new IntegerMinFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
