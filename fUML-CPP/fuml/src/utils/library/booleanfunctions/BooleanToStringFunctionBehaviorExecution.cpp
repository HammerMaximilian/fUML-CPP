/*
 * BooleanToStringFunctionBehaviorExecution.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <utils/library/booleanfunctions/BooleanToStringFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/BooleanValue.h>
#include <fuml/semantics/simpleclassifiers/StringValue.h>
#include <uml/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::booleanfunctions;

BooleanToStringFunctionBehaviorExecution::BooleanToStringFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_ToString);
}

void BooleanToStringFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	BooleanValuePtr bv1 = AS(BooleanValue, inputParameters->at(0)->values->at(0));
	fuml::Debug::println("[doBody] argument = " + bv1->value);

	StringValuePtr resultObj(new StringValue());
	resultObj->value = bv1->toString();
	resultObj->type = this->locus->factory->getBuiltInType("String");
	fuml::Debug::println("[doBody] Boolean ToString result = " + resultObj->value);

	outputParameters->at(0)->values->push_back(resultObj);
}

ValuePtr BooleanToStringFunctionBehaviorExecution::new_()
{
	std::shared_ptr<BooleanToStringFunctionBehaviorExecution> newValue(new BooleanToStringFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
