/*
 * RealToStringFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/realfunctions/RealToStringFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/RealValue.h>
#include <fuml/semantics/simpleclassifiers/StringValue.h>
#include <uml/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::realfunctions;

RealToStringFunctionBehaviorExecution::RealToStringFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_ToString);
}

void RealToStringFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	RealValuePtr rv = std::dynamic_pointer_cast<RealValue>(inputParameters->at(0)->values->at(0));
	float r = rv->value;
	fuml::Debug::println("[doBody] argument = " + std::to_string(r));

	// Convert float to String
	std::string resultString = std::to_string(r);
	StringValuePtr result(new StringValue());
	result->value = resultString;
	result->type = this->locus->factory->getBuiltInType("String");

	fuml::Debug::println("[doBody] Real ToString result = " + resultString);

	// Add output to the outputParameters list
	outputParameters->at(0)->values->push_back(result);
}

ValuePtr RealToStringFunctionBehaviorExecution::new_()
{
	std::shared_ptr<RealToStringFunctionBehaviorExecution> newValue(
		new RealToStringFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
