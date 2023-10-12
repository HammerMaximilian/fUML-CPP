/*
 * ListSizeFunctionBehaviorExecution.cpp
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#include <utils/library/listfunctions/ListSizeFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/IntegerValue.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::listfunctions;

ListSizeFunctionBehaviorExecution::ListSizeFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_ListFunctions_ListSize);
}

void ListSizeFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	// Get the list for which to determine the size
	const ValueListPtr& vl = inputParameters->at(0)->values;

	// Determine the length of the list
	int size = vl->size();

	// Store size in IntegerValue object
	IntegerValuePtr result(new IntegerValue());
	result->value = size;
	result->type = this->locus->factory->getBuiltInType("Integer");
	fuml::Debug::println("[doBody] List Size, result = " + std::to_string(size));

	// Add output to the outputParameters list
	outputParameters->at(0)->values->push_back(result);
}

ValuePtr ListSizeFunctionBehaviorExecution::new_()
{
	std::shared_ptr<ListSizeFunctionBehaviorExecution> newValue(
		new ListSizeFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
