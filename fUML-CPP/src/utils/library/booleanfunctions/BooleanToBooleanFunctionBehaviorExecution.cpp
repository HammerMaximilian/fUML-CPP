/*
 * BooleanToBooleanFunctionBehaviorExecution.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <utils/library/booleanfunctions/BooleanToBooleanFunctionBehaviorExecution.h>

#include <algorithm>
#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/BooleanValue.h>
#include <fuml/semantics/simpleclassifiers/StringValue.h>

using namespace fuml::library::booleanfunctions;

void BooleanToBooleanFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	// Extract single String input argument
	StringValuePtr sv1 = std::dynamic_pointer_cast<StringValue>(inputParameters->at(0)->values->at(0));
	std::string s1 = sv1->value;
	utils::Debug::println("[doBody] argument = " + s1);

	// Calculate boolean value from String.
	bool result = true;
	std::string lowerStr = s1;
	std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);

	if (lowerStr == "true")
	{
		result = true;
	}
	else if (lowerStr == "false")
	{
		result = false;
	}
	else
	{
		utils::Debug::println("[doBody] Invalid input, cannot convert to boolean: " + s1);
		// Invalid input, return
		return;
	}

	// Store result in BooleanValue object
	BooleanValuePtr resultObj(new BooleanValue());
	resultObj->value = result;
	resultObj->type = this->locus->factory->getBuiltInType("Boolean");
	utils::Debug::println("[doBody] Boolean ToBoolean result = " + std::to_string(resultObj->value));

	// Add output to the outputParameters list
	outputParameters->at(0)->values->push_back(resultObj);
}

ValuePtr BooleanToBooleanFunctionBehaviorExecution::new_()
{
	std::shared_ptr<BooleanToBooleanFunctionBehaviorExecution> newValue(
		new BooleanToBooleanFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
