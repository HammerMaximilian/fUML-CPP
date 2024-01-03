/*
 * StringSizeFunctionBehaviorExecution.cpp
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#include <utils/library/stringfunctions/StringSizeFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/StringValue.h>
#include <fuml/semantics/simpleclassifiers/IntegerValue.h>
#include <uml/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::stringfunctions;

StringSizeFunctionBehaviorExecution::StringSizeFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_StringFunctions_Size);
}

void StringSizeFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	StringValuePtr sv1 = std::dynamic_pointer_cast<StringValue>(inputParameters->at(0)->values->at(0));
	std::string s1 = sv1->value;
	fuml::Debug::println("[doBody] argument = " + s1);

	// Determine the length of the String
	int size = s1.length();

	IntegerValuePtr resultObj(new IntegerValue());
	resultObj->value = size;
	resultObj->type = this->locus->factory->getBuiltInType("Integer");
	fuml::Debug::println("[doBody] String Size result = " + std::to_string(size));

	// Add output to the outputParameters list
	outputParameters->at(0)->values->push_back(resultObj);
}

ValuePtr StringSizeFunctionBehaviorExecution::new_()
{
	std::shared_ptr<StringSizeFunctionBehaviorExecution> newValue(
		new StringSizeFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
