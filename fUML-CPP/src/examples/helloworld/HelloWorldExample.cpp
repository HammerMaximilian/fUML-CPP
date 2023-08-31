/*
 * HelloWorldExample.cpp
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#include <examples/helloworld/HelloWorldExample.h>
#include <examples/helloworld/HelloWorldExampleModel.h>

#include <examples/helloworld/PrintlnExecution.h>
#include <fuml/syntax/commonbehavior/OpaqueBehavior.h>

const std::shared_ptr<examples::HelloWorldExample::HelloWorldExample>& examples::HelloWorldExample::HelloWorldExample::Instance()
{
	static std::shared_ptr<examples::HelloWorldExample::HelloWorldExample> instance = nullptr;

	if(!instance)
	{
		instance.reset(new examples::HelloWorldExample::HelloWorldExample());
		instance->inMemoryModel = examples::HelloWorldExample::HelloWorldExampleModel::Instance();
	}

	return instance;
}

void examples::HelloWorldExample::HelloWorldExample::execute()
{
	std::shared_ptr<PrintlnExecution> printlnExecution(new PrintlnExecution());
	printlnExecution->setThisObject_Ptr(printlnExecution);
	printlnExecution->types->push_back(examples::HelloWorldExample::HelloWorldExampleModel::Instance()->HelloWorldModel_println);

	this->addPrimitiveBehaviorPrototype(printlnExecution);

	examples::FumlExample::execute();
}
