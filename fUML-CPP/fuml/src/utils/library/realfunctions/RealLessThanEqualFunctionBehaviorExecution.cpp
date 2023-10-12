/*
 * RealLessThanEqualFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/realfunctions/RealLessThanEqualFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::realfunctions;

RealLessThanEqualFunctionBehaviorExecution::RealLessThanEqualFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_lessOrEqual);
}

bool RealLessThanEqualFunctionBehaviorExecution::doRealFunction(
	const std::shared_ptr<std::vector<float>>& arguments)
{
	float x1 = arguments->at(0);
	float x2 = arguments->at(1);

	bool b = (x1 <= x2);
	fuml::Debug::println("[doBody] Real Less Than or Equal result = " + std::to_string(b));
	return b;
}

ValuePtr RealLessThanEqualFunctionBehaviorExecution::new_()
{
	std::shared_ptr<RealLessThanEqualFunctionBehaviorExecution> newValue(
		new RealLessThanEqualFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
