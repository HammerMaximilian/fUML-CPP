/*
 * UnlimitedNaturalToUnlimitedNaturalFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalToUnlimitedNaturalFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/UnlimitedNaturalValue.h>
#include <fuml/semantics/simpleclassifiers/StringValue.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::unlimitednaturalfunctions;

UnlimitedNaturalToUnlimitedNaturalFunctionBehaviorExecution::UnlimitedNaturalToUnlimitedNaturalFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->UnlimitedNaturalFunctions_ToUnlimitedNatural);
}

void UnlimitedNaturalToUnlimitedNaturalFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	// Extract single String input argument
	StringValuePtr sv1 = std::dynamic_pointer_cast<StringValue>(inputParameters->at(0)->values->at(0));
	std::string s1 = sv1->value;
	fuml::Debug::println("[doBody] argument = " + s1);

	// Convert String to int
	int un;
	try
	{
		if(s1 == "*")
		{
			un = -1;
		}
		else
		{
			un = std::stoi(s1);
		}
	}
	catch (...)
	{
		// If the String does not specify an integer, simply return an empty values list
		fuml::Debug::println("[doBody] String does not specify an UnlimitedNatural: " + s1);
		//Invalid argument, return
		return;
	}

	// If the integer is less than -1, it cannot be converted to an UnlimitedNatural.
	if(un < -1)
	{
		fuml::Debug::println("[doBody] Cannot be converted to an UnlimitedNatural: " + s1);
		return;
	}

	// Store resultInt in UnlimitedNaturalValue object
	UnlimitedNaturalValuePtr resultObj(new UnlimitedNaturalValue());
	resultObj->value = un;
	resultObj->type = this->locus->factory->getBuiltInType("UnlimitedNatural");
	fuml::Debug::println("[doBody] UnlimitedNatural ToUnlimitedNatural result = " + std::to_string(un));

	// Add output to the outputParameters list
	outputParameters->at(0)->values->push_back(resultObj);
}

ValuePtr UnlimitedNaturalToUnlimitedNaturalFunctionBehaviorExecution::new_()
{
	std::shared_ptr<UnlimitedNaturalToUnlimitedNaturalFunctionBehaviorExecution> newValue(
		new UnlimitedNaturalToUnlimitedNaturalFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
