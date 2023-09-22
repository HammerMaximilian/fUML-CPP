/*
 * IntegerModFunctionBehaviorExecution.cpp
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#include <utils/library/integerfunctions/IntegerModFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::integerfunctions;

IntegerModFunctionBehaviorExecution::IntegerModFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Mod);
}

int IntegerModFunctionBehaviorExecution::doIntegerFunction(const std::shared_ptr<std::vector<int>>& arguments)
{
	int i1 = arguments->at(0);
	int i2 = arguments->at(1);

	// Modulus requires second argument to be non-zero
	if(i2 == 0)
	{
		fuml::Debug::println("[doBody] Integer Modulo requires non-zero second argument");
		return INT_MIN;
	}

	int i = i1 % i2;
	fuml::Debug::println("[doBody] Integer Modulo result = " + std::to_string(i));
	return i;
}

ValuePtr IntegerModFunctionBehaviorExecution::new_()
{
	std::shared_ptr<IntegerModFunctionBehaviorExecution> newValue(new IntegerModFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
