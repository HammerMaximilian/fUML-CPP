/*
 * ListGetFunctionBehaviorExecution.cpp
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#include <utils/library/listfunctions/ListGetFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/IntegerValue.h>
#include <uml/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::listfunctions;

ListGetFunctionBehaviorExecution::ListGetFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_ListFunctions_ListGet);
}

void ListGetFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	// Get the list for which to find the element from the first argument
	const ValueListPtr& vl = inputParameters->at(0)->values;

	// Get the position in the list from the second argument
	IntegerValuePtr iv = AS(IntegerValue, inputParameters->at(0)->values->at(0));
	int position = iv->value;
	fuml::Debug::println("[doBody] List Get, position=" + std::to_string(position));

	// The position must be 1 or greater, since index is 1-based
	if(position < 1)
	{
		fuml::Debug::println("[doBody] List Get, invalid value (return nothing).");
		//Invalid argument, return
		return;
	}

	// Find the element based on position
	try
	{
		// Find the element in the list by its position.  Offset index by 1,
		// since the underlying list is 0-based, while this API is 1-based
		ValuePtr result = vl->at(position-1);
		fuml::Debug::println("[doBody] List Get, result = " + result->toString());

		// Add output to the outputParameters list.  The output can be a
		// reference to the original object in the input list.
		outputParameters->at(0)->values->push_back(result);
	}
	catch(...)
	{
		fuml::Debug::println("[doBody] List Get, index out of bounds error (return nothing).");
		//Invalid argument, return
		return;
	}
}

ValuePtr ListGetFunctionBehaviorExecution::new_()
{
	std::shared_ptr<ListGetFunctionBehaviorExecution> newValue(
		new ListGetFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
