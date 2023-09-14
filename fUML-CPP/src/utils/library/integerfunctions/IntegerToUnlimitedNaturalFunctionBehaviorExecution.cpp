/*
 * IntegerToUnlimitedNaturalFunctionBehaviorExecution.cpp
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#include <utils/library/integerfunctions/IntegerToUnlimitedNaturalFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/IntegerValue.h>
#include <fuml/semantics/simpleclassifiers/UnlimitedNaturalValue.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::integerfunctions;

IntegerToUnlimitedNaturalFunctionBehaviorExecution::IntegerToUnlimitedNaturalFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->IntegerFunctions_ToUnlimitedNatural);
}

void IntegerToUnlimitedNaturalFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	// Extract integer arguments and perform an integer function on them.
	IntegerValuePtr iv = std::dynamic_pointer_cast<IntegerValue>(inputParameters->at(0)->values->at(0));
	int i = iv->value;
	fuml::Debug::println("[doBody] argument = " + std::to_string(i));

	// Convert int to UnlimitedNatural
	UnlimitedNaturalValuePtr resultObj(new UnlimitedNaturalValue());
	resultObj->value = i;
	resultObj->type = this->locus->factory->getBuiltInType("UnlimitedNatural");

	fuml::Debug::println("[doBody] Integer ToUnlimitedNatural result = " + i);

	// Add output to the outputParameters list
	outputParameters->at(0)->values->push_back(resultObj);
}

ValuePtr IntegerToUnlimitedNaturalFunctionBehaviorExecution::new_()
{
	std::shared_ptr<IntegerToUnlimitedNaturalFunctionBehaviorExecution> newValue(
		new IntegerToUnlimitedNaturalFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
