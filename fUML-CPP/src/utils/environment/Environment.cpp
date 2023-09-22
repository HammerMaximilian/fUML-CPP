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
#include <utils/library/booleanfunctions/BooleanAndFunctionBehaviorExecution.h>
#include <utils/library/booleanfunctions/BooleanImpliesFunctionBehaviorExecution.h>
#include <utils/library/booleanfunctions/BooleanNotFunctionBehaviorExecution.h>
#include <utils/library/booleanfunctions/BooleanOrFunctionBehaviorExecution.h>
#include <utils/library/booleanfunctions/BooleanToBooleanFunctionBehaviorExecution.h>
#include <utils/library/booleanfunctions/BooleanToStringFunctionBehaviorExecution.h>
#include <utils/library/booleanfunctions/BooleanXorFunctionBehaviorExecution.h>
#include <utils/library/channel/StandardInputChannelObject.h>
#include <utils/library/channel/StandardOutputChannelObject.h>
#include <utils/library/integerfunctions/IntegerAbsFunctionBehaviorExecution.h>
#include <utils/library/integerfunctions/IntegerDivFunctionBehaviorExecution.h>
#include <utils/library/integerfunctions/IntegerDivideFunctionBehaviorExecution.h>
#include <utils/library/integerfunctions/IntegerGreaterThanEqualFunctionBehaviorExecution.h>
#include <utils/library/integerfunctions/IntegerGreaterThanFunctionBehaviorExecution.h>
#include <utils/library/integerfunctions/IntegerLessThanEqualFunctionBehaviorExecution.h>
#include <utils/library/integerfunctions/IntegerLessThanFunctionBehaviorExecution.h>
#include <utils/library/integerfunctions/IntegerMaxFunctionBehaviorExecution.h>
#include <utils/library/integerfunctions/IntegerMinFunctionBehaviorExecution.h>
#include <utils/library/integerfunctions/IntegerMinusFunctionBehaviorExecution.h>
#include <utils/library/integerfunctions/IntegerModFunctionBehaviorExecution.h>
#include <utils/library/integerfunctions/IntegerNegateFunctionBehaviorExecution.h>
#include <utils/library/integerfunctions/IntegerPlusFunctionBehaviorExecution.h>
#include <utils/library/integerfunctions/IntegerTimesFunctionBehaviorExecution.h>
#include <utils/library/integerfunctions/IntegerToIntegerFunctionBehaviorExecution.h>
#include <utils/library/integerfunctions/IntegerToStringFunctionBehaviorExecution.h>
#include <utils/library/integerfunctions/IntegerToUnlimitedNaturalFunctionBehaviorExecution.h>
#include <utils/library/listfunctions/ListConcatFunctionBehaviorExecution.h>
#include <utils/library/listfunctions/ListGetFunctionBehaviorExecution.h>
#include <utils/library/listfunctions/ListSizeFunctionBehaviorExecution.h>
#include <utils/library/realfunctions/RealAbsFunctionBehaviorExecution.h>
#include <utils/library/realfunctions/RealDivideFunctionBehaviorExecution.h>
#include <utils/library/realfunctions/RealFloorFunctionBehaviorExecution.h>
#include <utils/library/realfunctions/RealGreaterThanEqualFunctionBehaviorExecution.h>
#include <utils/library/realfunctions/RealGreaterThanFunctionBehaviorExecution.h>
#include <utils/library/realfunctions/RealInverseFunctionBehaviorExecution.h>
#include <utils/library/realfunctions/RealLessThanEqualFunctionBehaviorExecution.h>
#include <utils/library/realfunctions/RealLessThanFunctionBehaviorExecution.h>
#include <utils/library/realfunctions/RealMaxFunctionBehaviorExecution.h>
#include <utils/library/realfunctions/RealMinFunctionBehaviorExecution.h>
#include <utils/library/realfunctions/RealMinusFunctionBehaviorExecution.h>
#include <utils/library/realfunctions/RealNegateFunctionBehaviorExecution.h>
#include <utils/library/realfunctions/RealPlusFunctionBehaviorExecution.h>
#include <utils/library/realfunctions/RealRoundFunctionBehaviorExecution.h>
#include <utils/library/realfunctions/RealTimesFunctionBehaviorExecution.h>
#include <utils/library/realfunctions/RealToIntegerFunctionBehaviorExecution.h>
#include <utils/library/realfunctions/RealToRealFunctionBehaviorExecution.h>
#include <utils/library/realfunctions/RealToStringFunctionBehaviorExecution.h>
#include <utils/library/stringfunctions/StringConcatFunctionBehaviorExecution.h>
#include <utils/library/stringfunctions/StringSizeFunctionBehaviorExecution.h>
#include <utils/library/stringfunctions/StringSubstringFunctionBehaviorExecution.h>
#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalGreaterThanEqualFunctionBehaviorExecution.h>
#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalGreaterThanFunctionBehaviorExecution.h>
#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalLessThanEqualFunctionBehaviorExecution.h>
#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalLessThanFunctionBehaviorExecution.h>
#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalMaxFunctionBehaviorExecution.h>
#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalMinFunctionBehaviorExecution.h>
#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalToIntegerFunctionBehaviorExecution.h>
#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalToStringFunctionBehaviorExecution.h>
#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalToUnlimitedNaturalFunctionBehaviorExecution.h>
#include <utils/primitivetypes/PrimitiveTypesModel.h>

using namespace fuml::environment;
using namespace fuml::library::booleanfunctions;
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
	this->addBooleanFunctionsPrototypes();

	// Add instances for StandardInputChannel & StandardOutputChannel
	std::shared_ptr<StandardInputChannelObject> standardInputChannelObject(new StandardInputChannelObject());
	standardInputChannelObject->setThisImplementationObjectPtr(standardInputChannelObject);
	this->add(standardInputChannelObject);
	std::shared_ptr<StandardOutputChannelObject> standardOutputChannelObject(new StandardOutputChannelObject());
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

void Environment::addBooleanFunctionsPrototypes()
{
	std::shared_ptr<BooleanAndFunctionBehaviorExecution> booleanAndFunctionBehaviorExecution(new BooleanAndFunctionBehaviorExecution());
	booleanAndFunctionBehaviorExecution->setThisObject_Ptr(booleanAndFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(booleanAndFunctionBehaviorExecution);
	std::shared_ptr<BooleanImpliesFunctionBehaviorExecution> booleanImpliesFunctionBehaviorExecution(new BooleanImpliesFunctionBehaviorExecution());
	booleanImpliesFunctionBehaviorExecution->setThisObject_Ptr(booleanImpliesFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(booleanImpliesFunctionBehaviorExecution);
	std::shared_ptr<BooleanNotFunctionBehaviorExecution> booleanNotFunctionBehaviorExecution(new BooleanNotFunctionBehaviorExecution());
	booleanNotFunctionBehaviorExecution->setThisObject_Ptr(booleanNotFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(booleanNotFunctionBehaviorExecution);
	std::shared_ptr<BooleanOrFunctionBehaviorExecution> booleanOrFunctionBehaviorExecution(new BooleanOrFunctionBehaviorExecution());
	booleanOrFunctionBehaviorExecution->setThisObject_Ptr(booleanOrFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(booleanOrFunctionBehaviorExecution);
	std::shared_ptr<BooleanToBooleanFunctionBehaviorExecution> booleanToBooleanFunctionBehaviorExecution(new BooleanToBooleanFunctionBehaviorExecution());
	booleanToBooleanFunctionBehaviorExecution->setThisObject_Ptr(booleanToBooleanFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(booleanToBooleanFunctionBehaviorExecution);
	std::shared_ptr<BooleanToStringFunctionBehaviorExecution> booleanToStringFunctionBehaviorExecution(new BooleanToStringFunctionBehaviorExecution());
	booleanToStringFunctionBehaviorExecution->setThisObject_Ptr(booleanToStringFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(booleanToStringFunctionBehaviorExecution);
	std::shared_ptr<BooleanXorFunctionBehaviorExecution> booleanXorFunctionBehaviorExecution(new BooleanXorFunctionBehaviorExecution());
	booleanXorFunctionBehaviorExecution->setThisObject_Ptr(booleanXorFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(booleanXorFunctionBehaviorExecution);
}
