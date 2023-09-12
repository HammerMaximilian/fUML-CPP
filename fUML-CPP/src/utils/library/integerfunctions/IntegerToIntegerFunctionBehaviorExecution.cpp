/*
 * IntegerToIntegerFunctionBehaviorExecution.cpp
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#include <utils/library/integerfunctions/IntegerToIntegerFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/IntegerValue.h>
#include <fuml/semantics/simpleclassifiers/StringValue.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::integerfunctions;

IntegerToIntegerFunctionBehaviorExecution::IntegerToIntegerFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->IntegerFunctions_ToInteger);
}

void IntegerToIntegerFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	// Extract single String input argument
	StringValuePtr sv1 = std::dynamic_pointer_cast<StringValue>(inputParameters->at(0)->values->at(0));
	std::string s1 = sv1->value;
	utils::Debug::println("[doBody] argument = " + s1);

	// Convert String to int
	int resultInt;
	try
	{
		resultInt = std::stoi(s1);
	}
	catch (...)
	{
		// If the String does not specify an integer, simply return an empty values list
		utils::Debug::println("[doBody] string does not specify an integer: " + s1);
		//Invalid argument, return
		return;
	}

	// Store resultInt in IntegerValue object
	IntegerValuePtr resultObj(new IntegerValue());
	resultObj->value = resultInt;
	resultObj->type = this->locus->factory->getBuiltInType("Integer");
	utils::Debug::println("[doBody] Integer ToInteger result = " + std::to_string(resultInt));

	// Add output to the outputParameters list
	outputParameters->at(0)->values->push_back(resultObj);
}

ValuePtr IntegerToIntegerFunctionBehaviorExecution::new_()
{
	std::shared_ptr<IntegerToIntegerFunctionBehaviorExecution> newValue(
		new IntegerToIntegerFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
