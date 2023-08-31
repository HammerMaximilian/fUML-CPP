/*
 * Environment.cpp
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#include <utils/environment/Environment.h>
#include <utils/environment/InMemoryModel.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Executor.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/loci/FirstChoiceStrategy.h>
#include <fuml/semantics/structuredclassifiers/RedefinitionBasedDispatchStrategy.h>
#include <fuml/semantics/commonbehavior/FIFOGetNextEventStrategy.h>
#include <fuml/syntax/simpleclassifiers/PrimitiveType.h>

using namespace fuml::environment;

void Environment::addPrimitiveBehaviorPrototype(const OpaqueBehaviorExecutionPtr& prototype)
{
	this->locus->factory->addPrimitiveBehaviorPrototype(prototype);
}

Environment::Environment()
{
	this->locus.reset(new Locus());
	this->locus->setThisLocusPtr(locus);
	this->locus->setExecutor(ExecutorPtr(new Executor()));
	this->locus->setFactory(ExecutionFactoryPtr(new ExecutionFactory()));

	this->locus->factory->setStrategy(FirstChoiceStrategyPtr(new FirstChoiceStrategy()));
	this->locus->factory->setStrategy(RedefinitionBasedDispatchStrategyPtr(new RedefinitionBasedDispatchStrategy()));
	this->locus->factory->setStrategy(FIFOGetNextEventStrategyPtr(new FIFOGetNextEventStrategy()));

	this->addBuiltInType("Boolean");
	this->addBuiltInType("String");
	this->addBuiltInType("Integer");
	this->addBuiltInType("Real");
	this->addBuiltInType("UnlimitedNatural");
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

void Environment::addBuiltInType(std::string name)
{
	PrimitiveTypePtr builtInType(new PrimitiveType());
	builtInType->setThisDataTypePtr(builtInType);
	builtInType->setName(name);
	this->locus->factory->addBuiltInType(builtInType);
}
