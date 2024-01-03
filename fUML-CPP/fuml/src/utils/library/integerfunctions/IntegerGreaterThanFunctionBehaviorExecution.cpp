/*
 * IntegerGreaterThanFunctionBehaviorExecution.cpp
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#include <utils/library/integerfunctions/IntegerGreaterThanFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <uml/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::integerfunctions;

IntegerGreaterThanFunctionBehaviorExecution::IntegerGreaterThanFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_greaterThan);
}

bool IntegerGreaterThanFunctionBehaviorExecution::doIntegerFunction(const std::shared_ptr<std::vector<int>>& arguments)
{
	int i1 = arguments->at(0);
	int i2 = arguments->at(1);

	bool b = (i1 > i2);
	fuml::Debug::println("[doBody] Integer Greater Than result = " + std::to_string(b));
	return b;
}

ValuePtr IntegerGreaterThanFunctionBehaviorExecution::new_()
{
	std::shared_ptr<IntegerGreaterThanFunctionBehaviorExecution> newValue(
		new IntegerGreaterThanFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
