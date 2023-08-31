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
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::booleanfunctions;

BooleanToStringFunctionBehaviorExecution::BooleanToStringFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->BooleanFunctions_ToString);
}

void BooleanToStringFunctionBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	BooleanValuePtr bv1 = std::dynamic_pointer_cast<BooleanValue>(inputParameters->at(0)->values->at(0));
	utils::Debug::println("[doBody] argument = " + bv1->value);

	StringValuePtr resultObj(new StringValue());
	resultObj->value = bv1->toString();
	resultObj->type = this->locus->factory->getBuiltInType("String");
	utils::Debug::println("[doBody] Boolean ToString result = " + resultObj->value);

	outputParameters->at(0)->values->push_back(resultObj);
}

ValuePtr BooleanToStringFunctionBehaviorExecution::new_()
{
	std::shared_ptr<BooleanToStringFunctionBehaviorExecution> newValue(new BooleanToStringFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
