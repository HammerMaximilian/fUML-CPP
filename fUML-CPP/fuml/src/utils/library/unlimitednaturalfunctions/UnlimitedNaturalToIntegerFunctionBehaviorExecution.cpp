/*
 * UnlimitedNaturalToIntegerFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalToIntegerFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/IntegerValue.h>
#include <fuml/semantics/simpleclassifiers/UnlimitedNaturalValue.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::unlimitednaturalfunctions;

UnlimitedNaturalToIntegerFunctionBehaviorExecution::UnlimitedNaturalToIntegerFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_ToInteger);
}

void UnlimitedNaturalToIntegerFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	UnlimitedNaturalValuePtr unv = std::dynamic_pointer_cast<UnlimitedNaturalValue>(inputParameters->at(0)->values->at(0));
	int un1 = unv->value;
	fuml::Debug::println("[doBody] argument = " + std::to_string(un1));

	// If the unlimited natural is unbounded (equal to -1), it cannot be
	// converted to an integer.
	if(un1 == -1)
	{
		fuml::Debug::println("[doBody] Unbounded input invalid for ToInteger function");
		return;
	}

	// Convert UnlimitedNatural to Integer
	IntegerValuePtr resultObj(new IntegerValue());
	resultObj->value = un1;
	resultObj->type = this->locus->factory->getBuiltInType("Integer");

	fuml::Debug::println("[doBody] UnlimitedNatural ToInteger result = " + un1);

	// Add output to the outputParameters list
	outputParameters->at(0)->values->push_back(resultObj);
}

ValuePtr UnlimitedNaturalToIntegerFunctionBehaviorExecution::new_()
{
	std::shared_ptr<UnlimitedNaturalToIntegerFunctionBehaviorExecution> newValue(
		new UnlimitedNaturalToIntegerFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
