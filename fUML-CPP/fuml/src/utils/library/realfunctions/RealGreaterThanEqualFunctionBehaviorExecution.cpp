/*
 * RealGreaterThanEqualFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/realfunctions/RealGreaterThanEqualFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <uml/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::realfunctions;

RealGreaterThanEqualFunctionBehaviorExecution::RealGreaterThanEqualFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_greaterOrEqual);
}

bool RealGreaterThanEqualFunctionBehaviorExecution::doRealFunction(const std::shared_ptr<std::vector<float>>& arguments)
{
	float x1 = arguments->at(0);
	float x2 = arguments->at(1);

	bool b = (x1 >= x2);
	fuml::Debug::println("[doBody] Real Greater Than or Equal result = " + std::to_string(b));
	return b;
}

ValuePtr RealGreaterThanEqualFunctionBehaviorExecution::new_()
{
	std::shared_ptr<RealGreaterThanEqualFunctionBehaviorExecution> newValue(
		new RealGreaterThanEqualFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
