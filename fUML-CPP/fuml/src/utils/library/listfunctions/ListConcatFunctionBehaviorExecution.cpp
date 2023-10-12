/*
 * ListConcatFunctionBehaviorExecution.cpp
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#include <utils/library/listfunctions/ListConcatFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::listfunctions;

ListConcatFunctionBehaviorExecution::ListConcatFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_ListFunctions_ListConcat);
}

void ListConcatFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	const ValueListPtr& list1 = inputParameters->at(0)->values;
	const ValueListPtr& list2 = inputParameters->at(1)->values;

	ValueListPtr result(new ValueList());

	result->insert(result->begin(), list1->begin(), list1->end());
	result->insert(result->end(), list2->begin(), list2->begin());

	#ifndef NDEBUG
	std::string listAsString = "{\n";
	for(const ValuePtr& value : *result)
	{
		listAsString += "[" + value->toString() + "]\n";
	}
	listAsString += "}";

	fuml::Debug::println("[doBody] List Concat, result = " + listAsString);
	#endif

	// Add output to the outputParameters list
	outputParameters->at(0)->values = result;
}

ValuePtr ListConcatFunctionBehaviorExecution::new_()
{
	std::shared_ptr<ListConcatFunctionBehaviorExecution> newValue(
		new ListConcatFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
