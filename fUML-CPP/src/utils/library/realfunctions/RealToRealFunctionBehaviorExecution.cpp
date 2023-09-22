/*
 * RealToRealFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/realfunctions/RealToRealFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/RealValue.h>
#include <fuml/semantics/simpleclassifiers/StringValue.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::realfunctions;

RealToRealFunctionBehaviorExecution::RealToRealFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_ToReal);
}

void RealToRealFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	// Extract single String input argument
	StringValuePtr sv1 = std::dynamic_pointer_cast<StringValue>(inputParameters->at(0)->values->at(0));
	std::string s1 = sv1->value;
	fuml::Debug::println("[doBody] argument = " + s1);

	// Convert String to float
	float resultFloat;
	try
	{
		resultFloat = std::stof(s1);
	}
	catch (...)
	{
		// If the String does not specify an real, simply return an empty values list
		fuml::Debug::println("[doBody] string does not specify a real: " + s1);
		//Invalid argument, return
		return;
	}

	// Store resultInt in RealValue object
	RealValuePtr resultObj(new RealValue());
	resultObj->value = resultFloat;
	resultObj->type = this->locus->factory->getBuiltInType("Real");
	fuml::Debug::println("[doBody] Real ToReal result = " + std::to_string(resultFloat));

	// Add output to the outputParameters list
	outputParameters->at(0)->values->push_back(resultObj);
}

ValuePtr RealToRealFunctionBehaviorExecution::new_()
{
	std::shared_ptr<RealToRealFunctionBehaviorExecution> newValue(new RealToRealFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
