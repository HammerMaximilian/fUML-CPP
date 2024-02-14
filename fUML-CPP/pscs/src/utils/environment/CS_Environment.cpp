/*
 * CS_Environment.cpp
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#include <pscs/semantics/actions/CS_DefaultConstructStrategy.h>
#include <pscs/semantics/fwd.h>
#include <pscs/semantics/loci/CS_Locus.h>
#include <pscs/semantics/loci/CS_Executor.h>
#include <pscs/semantics/loci/CS_ExecutionFactory.h>
#include <pscs/semantics/structuredclassifiers/CS_DefaultRequestPropagationStrategy.h>
#include <pscs/semantics/structuredclassifiers/CS_DispatchOperationOfInterfaceStrategy.h>
#include <pscs/semantics/structuredclassifiers/CS_NameBased_StructuralFeatureOfInterfaceAccessStrategy.h>
#include <utils/environment/CS_Environment.h>

using namespace pscs::environment;

CS_Environment::CS_Environment()
{
	// Setup CS_Locus, CS_Executor & CS_ExecutionFactory
	this->locus.reset(new CS_Locus());
	this->locus->setThisLocusPtr(locus);
	this->locus->setExecutor(CS_ExecutorPtr(new CS_Executor()));
	this->locus->setFactory(CS_ExecutionFactoryPtr(new CS_ExecutionFactory()));

	// Setup semantic strategies
	this->locus->factory->setStrategy(CS_DefaultConstructStrategyPtr(new CS_DefaultConstructStrategy()));
	this->locus->factory->setStrategy(CS_DefaultRequestPropagationStrategyPtr(new CS_DefaultRequestPropagationStrategy()));
	this->locus->factory->setStrategy(CS_DispatchOperationOfInterfaceStrategyPtr(new CS_DispatchOperationOfInterfaceStrategy()));
	this->locus->factory->setStrategy(CS_NameBased_StructuralFeatureOfInterfaceAccessStrategyPtr(new CS_NameBased_StructuralFeatureOfInterfaceAccessStrategy()));
}

CS_Environment::~CS_Environment()
{
}
