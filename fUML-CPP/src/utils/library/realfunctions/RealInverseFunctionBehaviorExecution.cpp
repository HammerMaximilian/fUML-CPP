/*
 * RealInverseFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/realfunctions/RealInverseFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::realfunctions;

RealInverseFunctionBehaviorExecution::RealInverseFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Inv);
}

float RealInverseFunctionBehaviorExecution::doRealFunction(const std::shared_ptr<std::vector<float>>& arguments)
{
	float x1 = arguments->at(0);

	float x = 1.0f/x1;
	fuml::Debug::println("[doBody] Real Inverse result = " + std::to_string(x));
	return x;
}

ValuePtr RealInverseFunctionBehaviorExecution::new_()
{
	std::shared_ptr<RealInverseFunctionBehaviorExecution> newValue(new RealInverseFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
