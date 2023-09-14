/*
 * IntegerToStringFunctionBehaviorExecution.cpp
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#include <utils/library/integerfunctions/IntegerToStringFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/IntegerValue.h>
#include <fuml/semantics/simpleclassifiers/StringValue.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::integerfunctions;

IntegerToStringFunctionBehaviorExecution::IntegerToStringFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->IntegerFunctions_ToString);
}

void IntegerToStringFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	IntegerValuePtr iv = std::dynamic_pointer_cast<IntegerValue>(inputParameters->at(0)->values->at(0));
	int i = iv->value;
	fuml::Debug::println("[doBody] argument = " + std::to_string(i));

	// Convert int to String
	std::string resultString = std::to_string(i);
	StringValuePtr resultObj(new StringValue());
	resultObj->value = resultString;
	resultObj->type = this->locus->factory->getBuiltInType("String");

	fuml::Debug::println("[doBody] Integer ToString result = " + resultString);

	// Add output to the outputParameters list
	outputParameters->at(0)->values->push_back(resultObj);
}

ValuePtr IntegerToStringFunctionBehaviorExecution::new_()
{
	std::shared_ptr<IntegerToStringFunctionBehaviorExecution> newValue(
		new IntegerToStringFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
