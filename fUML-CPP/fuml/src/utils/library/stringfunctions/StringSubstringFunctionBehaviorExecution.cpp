/*
 * StringSubstringFunctionBehaviorExecution.cpp
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#include <utils/library/stringfunctions/StringSubstringFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/StringValue.h>
#include <fuml/semantics/simpleclassifiers/IntegerValue.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::stringfunctions;

StringSubstringFunctionBehaviorExecution::StringSubstringFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_StringFunctions_Substring);
}

void StringSubstringFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	StringValuePtr sv1 = std::dynamic_pointer_cast<StringValue>(inputParameters->at(0)->values->at(0));
	std::string s1 = sv1->value;
	fuml::Debug::println("[doBody] argument, string = " + s1);
	IntegerValuePtr lowerValue = std::dynamic_pointer_cast<IntegerValue>(inputParameters->at(1)->values->at(0));
	int lower = lowerValue->value; // lower value
	fuml::Debug::println("[doBody] argument, lower = " + std::to_string(lower));
	IntegerValuePtr upperValue = std::dynamic_pointer_cast<IntegerValue>(inputParameters->at(2)->values->at(0));
	int upper = upperValue->value; // upper value
	fuml::Debug::println("[doBody] argument, upper = " + std::to_string(upper));

	// Check for invalid values.  A lower value of less than 1 or greater than the
	// length of the string is invalid.
	if(lower < 1 || lower > (int)s1.length())
	{
		fuml::Debug::println("[doBody] invalid lower value for String Substring: " + std::to_string(lower));
		//Invalid arguments, return
		return;
	}

	// Same checks for upper value
	if(upper < 1 || upper > (int)s1.length())
	{
		fuml::Debug::println("[doBody] invalid upper value for String Substring: " + std::to_string(upper));
		//Invalid arguments, return
		return;
	}

	// Upper cannot be less than lower.  Note upper and lower can be equal.
	if(upper < lower)
	{
		fuml::Debug::println("[doBody] upper is less than lower for String Substring");
		//Invalid arguments, return
		return;
	}

	// Extract the substring.  The fUML behavior differs from the C++ method behavior.
	// The fUML substring's lower value is 1-based, while the C++ substring method's
	// lower value is 0-based.  Moreover, the fUML substring behavior is based
	// on an upper value, while C++ substring method is size-based.
	// Therefore, the length of the substring has to be calculated first.

	int size = (upper - lower) + 1;
	std::string resultString = s1.substr(lower-1, size);

	StringValuePtr resultObj(new StringValue());
	resultObj->value = resultString;
	resultObj->type = this->locus->factory->getBuiltInType("String");

	fuml::Debug::println("[doBody] String Substring result = " + resultString);

	// Add output to the outputParameters list
	outputParameters->at(0)->values->push_back(resultObj);
}

ValuePtr StringSubstringFunctionBehaviorExecution::new_()
{
	std::shared_ptr<StringSubstringFunctionBehaviorExecution> newValue(
		new StringSubstringFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
