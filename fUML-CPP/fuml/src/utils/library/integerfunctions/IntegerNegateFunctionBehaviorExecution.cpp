/*
 * IntegerNegateFunctionBehaviorExecution.cpp
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#include <utils/library/integerfunctions/IntegerNegateFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <uml/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::integerfunctions;

IntegerNegateFunctionBehaviorExecution::IntegerNegateFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Neg);
}

int IntegerNegateFunctionBehaviorExecution::doIntegerFunction(const std::shared_ptr<std::vector<int>>& arguments)
{
	int i1 = arguments->at(0);

	int i = -i1;
	fuml::Debug::println("[doBody] Integer Negate result = " + std::to_string(i));
	return i;
}

ValuePtr IntegerNegateFunctionBehaviorExecution::new_()
{
	std::shared_ptr<IntegerNegateFunctionBehaviorExecution> newValue(new IntegerNegateFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
