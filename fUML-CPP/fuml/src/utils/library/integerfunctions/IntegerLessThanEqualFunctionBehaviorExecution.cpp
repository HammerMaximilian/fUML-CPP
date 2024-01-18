/*
 * IntegerLessThanEqualFunctionBehaviorExecution.cpp
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#include <utils/library/integerfunctions/IntegerLessThanEqualFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <uml/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::integerfunctions;

IntegerLessThanEqualFunctionBehaviorExecution::IntegerLessThanEqualFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_lessOrEqual);
}

bool IntegerLessThanEqualFunctionBehaviorExecution::doIntegerFunction(
	const std::shared_ptr<std::vector<int>>& arguments)
{
	int i1 = arguments->at(0);
	int i2 = arguments->at(1);

	bool b = (i1 <= i2);
	fuml::Debug::println("[doBody] Integer Less Than or Equal result = " + std::to_string(b));
	return b;
}

ValuePtr IntegerLessThanEqualFunctionBehaviorExecution::new_()
{
	std::shared_ptr<IntegerLessThanEqualFunctionBehaviorExecution> newValue(
		new IntegerLessThanEqualFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
