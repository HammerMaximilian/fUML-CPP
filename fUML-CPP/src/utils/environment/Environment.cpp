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
#include <fuml/syntax/simpleclassifiers/PrimitiveType.h>
#include <fuml/syntax/simpleclassifiers/PrimitiveType.h>
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
	this->addBuiltInType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
	this->addBuiltInType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	this->addBuiltInType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	this->addBuiltInType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
	this->addBuiltInType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);

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

void Environment::execute()
{
	this->outputs = this->locus->executor->execute(
		this->inMemoryModel->getMainBehavior(),
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
