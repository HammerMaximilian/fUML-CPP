/*
 * StringConcatFunctionBehaviorExecution.cpp
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#include <utils/library/stringfunctions/StringConcatFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/StringValue.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::stringfunctions;

StringConcatFunctionBehaviorExecution::StringConcatFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->StringFunctions_Concat);
}

void StringConcatFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	StringValuePtr sv1 = std::dynamic_pointer_cast<StringValue>(inputParameters->at(0)->values->at(0));
	std::string s1 = sv1->value;
	fuml::Debug::println("[doBody] argument = " + s1);

	StringValuePtr sv2 = std::dynamic_pointer_cast<StringValue>(inputParameters->at(1)->values->at(0));
	std::string s2 = sv2->value;
	fuml::Debug::println("[doBody] argument = " + s1);

	// Concatenate the two strings
	std::string resultString = s1 + s2;

	StringValuePtr resultObj(new StringValue());
	resultObj->value = resultString;
	resultObj->type = this->locus->factory->getBuiltInType("String");
	fuml::Debug::println("[doBody] String Concat result = " + resultString);

	// Add output to the outputParameters list
	outputParameters->at(0)->values->push_back(resultObj);
}

ValuePtr StringConcatFunctionBehaviorExecution::new_()
{
	std::shared_ptr<StringConcatFunctionBehaviorExecution> newValue(
		new StringConcatFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
