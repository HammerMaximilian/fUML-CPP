/*
 * PrintlnExecution.cpp
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#include <examples/helloworld/PrintlnExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/StringValue.h>
#include <iostream>

using namespace examples::HelloWorldExample;

void PrintlnExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	std::string value = std::dynamic_pointer_cast<StringValue>(inputParameters->at(0)->values->at(0))->value;
	utils::Debug::println("[doBody] argument = " + value);
	std::cout << value << std::endl;
}

ValuePtr PrintlnExecution::new_()
{
	std::shared_ptr<PrintlnExecution> newValue(new PrintlnExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
