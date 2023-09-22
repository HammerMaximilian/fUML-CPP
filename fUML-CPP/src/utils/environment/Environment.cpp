/*
 * Environment.cpp
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#include <utils/environment/Environment.h>

#include <fuml/semantics/commonbehavior/FIFOGetNextEventStrategy.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Executor.h>
#include <fuml/semantics/loci/FirstChoiceStrategy.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/structuredclassifiers/RedefinitionBasedDispatchStrategy.h>
#include <fuml/syntax/commonbehavior/Behavior.h>
#include <fuml/syntax/simpleclassifiers/PrimitiveType.h>
#include <iostream>
#include <utils/environment/InMemoryModel.h>
#include <utils/library/channel/StandardInputChannelObject.h>
#include <utils/library/channel/StandardOutputChannelObject.h>
#include <utils/primitivetypes/PrimitiveTypesModel.h>

using namespace fuml::environment;
using namespace fuml::library::channel;

Environment::Environment()
{
	// Setup Locus, Executor & ExecutionFactory
	this->locus.reset(new Locus());
	this->locus->setThisLocusPtr(locus);
	this->locus->setExecutor(ExecutorPtr(new Executor()));
	this->locus->setFactory(ExecutionFactoryPtr(new ExecutionFactory()));

	// Setup semantic strategies
	this->locus->factory->setStrategy(FirstChoiceStrategyPtr(new FirstChoiceStrategy()));
	this->locus->factory->setStrategy(RedefinitionBasedDispatchStrategyPtr(new RedefinitionBasedDispatchStrategy()));
	this->locus->factory->setStrategy(FIFOGetNextEventStrategyPtr(new FIFOGetNextEventStrategy()));

	// Setup builtin primitive types
	this->addBuiltInType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
	this->addBuiltInType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
	this->addBuiltInType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
	this->addBuiltInType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
	this->addBuiltInType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->PrimitiveTypes_UnlimitedNatural);

	//Setup primitive behavior prototypes

	// Add instances for StandardInputChannel & StandardOutputChannel
	std::shared_ptr<StandardInputChannelObject> standardInputChannelObject(new StandardInputChannelObject);
	standardInputChannelObject->setThisImplementationObjectPtr(standardInputChannelObject);
	this->add(standardInputChannelObject);
	std::shared_ptr<StandardOutputChannelObject> standardOutputChannelObject(new StandardOutputChannelObject);
	standardOutputChannelObject->setThisImplementationObjectPtr(standardOutputChannelObject);
	this->add(standardOutputChannelObject);
}

Environment::~Environment()
{
}

void Environment::execute(std::string behaviorName)
{
	std::shared_ptr<fuml::FumlObject> object = this->inMemoryModel->findElementByName(behaviorName);

	if(object == nullptr)
	{
		std::cerr << "[ERROR] Element with specified name does not exist: " << behaviorName << std::endl;
		return;
	}

	BehaviorPtr behavior = std::dynamic_pointer_cast<Behavior>(object);

	if(behavior == nullptr)
	{
		std::cerr << "[ERROR] Specified behavior name does not name a behavior: " << behaviorName << std::endl;
		return;
	}

	Class_Ptr contextType = std::dynamic_pointer_cast<Class_>(behavior->context);

	if(contextType != nullptr)
	{
		this->context = this->locus->instantiate(contextType);
	}

	this->outputs = this->locus->executor->execute(
		behavior,
		this->context,
		this->inputs);
}

void Environment::add(const ExtensionalValuePtr& extensionalValue)
{
	this->locus->add(extensionalValue);
}

void Environment::addBuiltInType(std::string name)
{
	PrimitiveTypePtr builtInType(new PrimitiveType());
	builtInType->setThisDataTypePtr(builtInType);
	builtInType->setName(name);
	this->locus->factory->addBuiltInType(builtInType);
}

void Environment::addBuiltInType(const PrimitiveTypePtr& builtInType)
{
	this->locus->factory->addBuiltInType(builtInType);
}

void Environment::addPrimitiveBehaviorPrototype(const OpaqueBehaviorExecutionPtr& prototype)
{
	this->locus->factory->addPrimitiveBehaviorPrototype(prototype);
}
