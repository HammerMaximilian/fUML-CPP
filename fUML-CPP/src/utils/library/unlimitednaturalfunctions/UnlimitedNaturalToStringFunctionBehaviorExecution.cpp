/*
 * UnlimitedNaturalToStringFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalToStringFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/UnlimitedNaturalValue.h>
#include <fuml/semantics/simpleclassifiers/StringValue.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::unlimitednaturalfunctions;

UnlimitedNaturalToStringFunctionBehaviorExecution::UnlimitedNaturalToStringFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->UnlimitedNaturalFunctions_ToString);
}

void UnlimitedNaturalToStringFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	UnlimitedNaturalValuePtr unv1 = std::dynamic_pointer_cast<UnlimitedNaturalValue>(inputParameters->at(0)->values->at(0));
	int un = unv1->value;
	fuml::Debug::println("[doBody] argument = " + std::to_string(un));

	// Convert UnlimitedNatural to String
	std::string resultString = std::to_string(un);
	StringValuePtr resultObj(new StringValue());
	resultObj->value = resultString;
	resultObj->type = this->locus->factory->getBuiltInType("String");

	fuml::Debug::println("[doBody] UnlimitedNatural ToString result = " + resultString);

	// Add output to the outputParameters list
	outputParameters->at(0)->values->push_back(resultObj);
}

ValuePtr UnlimitedNaturalToStringFunctionBehaviorExecution::new_()
{
	std::shared_ptr<UnlimitedNaturalToStringFunctionBehaviorExecution> newValue(
		new UnlimitedNaturalToStringFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
