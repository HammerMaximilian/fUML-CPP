/*
 * HelloWorldExampleEnvironment.cpp
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#include <examples/helloworld/HelloWorldExampleEnvironment.h>

#include <examples/helloworld/HelloWorldExampleModel.h>
#include <examples/helloworld/PrintlnExecution.h>
#include <fuml/syntax/commonbehavior/OpaqueBehavior.h>
#include <utils/library/booleanfunctions/BooleanAndFunctionBehaviorExecution.h>

const std::shared_ptr<examples::HelloWorldExample::HelloWorldExampleEnvironment>& examples::HelloWorldExample::HelloWorldExampleEnvironment::Instance()
{
	static std::shared_ptr<examples::HelloWorldExample::HelloWorldExampleEnvironment> instance = nullptr;

	if(!instance)
	{
		instance.reset(new examples::HelloWorldExample::HelloWorldExampleEnvironment());
		instance->inMemoryModel = examples::HelloWorldExample::HelloWorldExampleModel::Instance();
	}

	return instance;
}

void examples::HelloWorldExample::HelloWorldExampleEnvironment::execute()
{
	/*
	 * Initialize context object and input parameter values here if desired.
	 */
	//this->context = ...;
	//this->inputs = ...;

	/*
	 * Create custom opaque behavior execution instances and add them to the execution environment here if desired.
	 */
	std::shared_ptr<PrintlnExecution> printlnExecution(new PrintlnExecution());
	printlnExecution->setThisObject_Ptr(printlnExecution);
	this->addPrimitiveBehaviorPrototype(printlnExecution);

	/*
	 * Start execution via base class call
	 */
	fuml::environment::Environment::execute();

	/*
	 * Evaluate output parameter values here if desired.
	 */
	//ParameterValueListPtr theOutputs = this->outputs;
	//...
}
