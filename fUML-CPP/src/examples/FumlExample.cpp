/*
 * FumlExample.cpp
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#include <examples/FumlExample.h>

#include <examples/InMemoryModel.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Executor.h>
#include <fuml/semantics/loci/Locus.h>

using namespace examples;

void FumlExample::addPrimitiveBehaviorPrototype(const OpaqueBehaviorExecutionPtr& prototype)
{
	this->factory->addPrimitiveBehaviorPrototype(prototype);
}

FumlExample::FumlExample()
{
	this->locus.reset(new Locus());
	this->locus->setThisLocusPtr(locus);
	this->factory.reset(new ExecutionFactory());
	this->executor.reset(new Executor());

	this->locus->setExecutor(this->executor);
	this->locus->setFactory(this->factory);
}

FumlExample::~FumlExample()
{
}

void examples::FumlExample::execute()
{
	this->outputs = this->executor->execute(
		this->inMemoryModel->getMainBehavior(),
		this->context,
		this->inputs);
}
