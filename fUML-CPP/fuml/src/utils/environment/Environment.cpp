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
#include <uml/commonbehavior/Behavior.h>
#include <uml/simpleclassifiers/PrimitiveType.h>
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
using namespace fuml::library::integerfunctions;
using namespace fuml::library::listfunctions;
using namespace fuml::library::realfunctions;
using namespace fuml::library::stringfunctions;
using namespace fuml::library::unlimitednaturalfunctions;

Environment::Environment()
{
	this->initializeEnvironment();
}

Environment::~Environment()
{
}

void Environment::execute(std::string behaviorName)
{
	std::shared_ptr<uml::UmlObject> object = this->inMemoryModel->findElementByName(behaviorName);

	if (object == nullptr)
	{
		std::cerr << "[ERROR] Element with specified name does not exist: " << behaviorName << std::endl;
		return;
	}

	BehaviorPtr behavior = std::dynamic_pointer_cast<Behavior>(object);

	if (behavior == nullptr)
	{
		std::cerr << "[ERROR] Specified behavior name does not name a behavior: " << behaviorName << std::endl;
		return;
	}

	Class_Ptr contextType = std::dynamic_pointer_cast<Class_>(behavior->context.lock());

	if (contextType != nullptr)
	{
		this->context = this->locus->instantiate(contextType);
	}

	this->outputs = this->locus->executor->execute(behavior, this->context, this->inputs);
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

void Environment::initializeLoci()
{
	// Setup Locus, Executor & ExecutionFactory
	this->locus.reset(new Locus());
	this->locus->setThisLocusPtr(locus);
	this->locus->setExecutor(ExecutorPtr(new Executor()));
	this->locus->setFactory(ExecutionFactoryPtr(new ExecutionFactory()));
}

void Environment::initializeLociContents()
{
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
	this->addIntegerFunctionsPrototypes();
	this->addListFunctionsPrototypes();
	this->addRealFunctionsPrototypes();
	this->addStringFunctionsPrototypes();
	this->addUnlimitedNaturalFunctionsPrototypes();

	// Add instances for StandardInputChannel & StandardOutputChannel
	std::shared_ptr<StandardInputChannelObject> standardInputChannelObject(new StandardInputChannelObject());
	standardInputChannelObject->setThisImplementationObjectPtr(standardInputChannelObject);
	this->add(standardInputChannelObject);
	std::shared_ptr<StandardOutputChannelObject> standardOutputChannelObject(new StandardOutputChannelObject());
	standardOutputChannelObject->setThisImplementationObjectPtr(standardOutputChannelObject);
	this->add(standardOutputChannelObject);
}

void Environment::initializeEnvironment()
{
	this->initializeLoci();
	this->initializeLociContents();
}

void Environment::addBooleanFunctionsPrototypes()
{
	std::shared_ptr<BooleanAndFunctionBehaviorExecution> booleanAndFunctionBehaviorExecution(
		new BooleanAndFunctionBehaviorExecution());
	booleanAndFunctionBehaviorExecution->setThisObject_Ptr(booleanAndFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(booleanAndFunctionBehaviorExecution);
	std::shared_ptr<BooleanImpliesFunctionBehaviorExecution> booleanImpliesFunctionBehaviorExecution(
		new BooleanImpliesFunctionBehaviorExecution());
	booleanImpliesFunctionBehaviorExecution->setThisObject_Ptr(booleanImpliesFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(booleanImpliesFunctionBehaviorExecution);
	std::shared_ptr<BooleanNotFunctionBehaviorExecution> booleanNotFunctionBehaviorExecution(
		new BooleanNotFunctionBehaviorExecution());
	booleanNotFunctionBehaviorExecution->setThisObject_Ptr(booleanNotFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(booleanNotFunctionBehaviorExecution);
	std::shared_ptr<BooleanOrFunctionBehaviorExecution> booleanOrFunctionBehaviorExecution(
		new BooleanOrFunctionBehaviorExecution());
	booleanOrFunctionBehaviorExecution->setThisObject_Ptr(booleanOrFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(booleanOrFunctionBehaviorExecution);
	std::shared_ptr<BooleanToBooleanFunctionBehaviorExecution> booleanToBooleanFunctionBehaviorExecution(
		new BooleanToBooleanFunctionBehaviorExecution());
	booleanToBooleanFunctionBehaviorExecution->setThisObject_Ptr(booleanToBooleanFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(booleanToBooleanFunctionBehaviorExecution);
	std::shared_ptr<BooleanToStringFunctionBehaviorExecution> booleanToStringFunctionBehaviorExecution(
		new BooleanToStringFunctionBehaviorExecution());
	booleanToStringFunctionBehaviorExecution->setThisObject_Ptr(booleanToStringFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(booleanToStringFunctionBehaviorExecution);
	std::shared_ptr<BooleanXorFunctionBehaviorExecution> booleanXorFunctionBehaviorExecution(
		new BooleanXorFunctionBehaviorExecution());
	booleanXorFunctionBehaviorExecution->setThisObject_Ptr(booleanXorFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(booleanXorFunctionBehaviorExecution);
}

void Environment::addIntegerFunctionsPrototypes()
{
	std::shared_ptr<IntegerAbsFunctionBehaviorExecution> integerAbsFunctionBehaviorExecution(
		new IntegerAbsFunctionBehaviorExecution());
	integerAbsFunctionBehaviorExecution->setThisObject_Ptr(integerAbsFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(integerAbsFunctionBehaviorExecution);
	std::shared_ptr<IntegerDivFunctionBehaviorExecution> integerDivFunctionBehaviorExecution(
		new IntegerDivFunctionBehaviorExecution());
	integerDivFunctionBehaviorExecution->setThisObject_Ptr(integerDivFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(integerDivFunctionBehaviorExecution);
	std::shared_ptr<IntegerDivideFunctionBehaviorExecution> integerDivideFunctionBehaviorExecution(
		new IntegerDivideFunctionBehaviorExecution());
	integerDivideFunctionBehaviorExecution->setThisObject_Ptr(integerDivideFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(integerDivideFunctionBehaviorExecution);
	std::shared_ptr<IntegerGreaterThanEqualFunctionBehaviorExecution> integerGreaterThanEqualFunctionBehaviorExecution(
		new IntegerGreaterThanEqualFunctionBehaviorExecution());
	integerGreaterThanEqualFunctionBehaviorExecution->setThisObject_Ptr(integerGreaterThanEqualFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(integerGreaterThanEqualFunctionBehaviorExecution);
	std::shared_ptr<IntegerGreaterThanFunctionBehaviorExecution> integerGreaterThanFunctionBehaviorExecution(
		new IntegerGreaterThanFunctionBehaviorExecution());
	integerGreaterThanFunctionBehaviorExecution->setThisObject_Ptr(integerGreaterThanFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(integerGreaterThanFunctionBehaviorExecution);
	std::shared_ptr<IntegerLessThanEqualFunctionBehaviorExecution> integerLessThanEqualFunctionBehaviorExecution(
		new IntegerLessThanEqualFunctionBehaviorExecution());
	integerLessThanEqualFunctionBehaviorExecution->setThisObject_Ptr(integerLessThanEqualFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(integerLessThanEqualFunctionBehaviorExecution);
	std::shared_ptr<IntegerLessThanFunctionBehaviorExecution> integerLessThanFunctionBehaviorExecution(
		new IntegerLessThanFunctionBehaviorExecution());
	integerLessThanFunctionBehaviorExecution->setThisObject_Ptr(integerLessThanFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(integerLessThanFunctionBehaviorExecution);
	std::shared_ptr<IntegerMaxFunctionBehaviorExecution> integerMaxFunctionBehaviorExecution(
		new IntegerMaxFunctionBehaviorExecution());
	integerMaxFunctionBehaviorExecution->setThisObject_Ptr(integerMaxFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(integerMaxFunctionBehaviorExecution);
	std::shared_ptr<IntegerMinFunctionBehaviorExecution> integerMinFunctionBehaviorExecution(
		new IntegerMinFunctionBehaviorExecution());
	integerMinFunctionBehaviorExecution->setThisObject_Ptr(integerMinFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(integerMinFunctionBehaviorExecution);
	std::shared_ptr<IntegerMinusFunctionBehaviorExecution> integerMinusFunctionBehaviorExecution(
		new IntegerMinusFunctionBehaviorExecution());
	integerMinusFunctionBehaviorExecution->setThisObject_Ptr(integerMinusFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(integerMinusFunctionBehaviorExecution);
	std::shared_ptr<IntegerModFunctionBehaviorExecution> integerModFunctionBehaviorExecution(
		new IntegerModFunctionBehaviorExecution());
	integerModFunctionBehaviorExecution->setThisObject_Ptr(integerModFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(integerModFunctionBehaviorExecution);
	std::shared_ptr<IntegerNegateFunctionBehaviorExecution> integerNegateFunctionBehaviorExecution(
		new IntegerNegateFunctionBehaviorExecution());
	integerNegateFunctionBehaviorExecution->setThisObject_Ptr(integerNegateFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(integerNegateFunctionBehaviorExecution);
	std::shared_ptr<IntegerPlusFunctionBehaviorExecution> integerPlusFunctionBehaviorExecution(
		new IntegerPlusFunctionBehaviorExecution());
	integerPlusFunctionBehaviorExecution->setThisObject_Ptr(integerPlusFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(integerPlusFunctionBehaviorExecution);
	std::shared_ptr<IntegerTimesFunctionBehaviorExecution> integerTimesFunctionBehaviorExecution(
		new IntegerTimesFunctionBehaviorExecution());
	integerTimesFunctionBehaviorExecution->setThisObject_Ptr(integerTimesFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(integerTimesFunctionBehaviorExecution);
	std::shared_ptr<IntegerToIntegerFunctionBehaviorExecution> integerToIntegerFunctionBehaviorExecution(
		new IntegerToIntegerFunctionBehaviorExecution());
	integerToIntegerFunctionBehaviorExecution->setThisObject_Ptr(integerToIntegerFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(integerToIntegerFunctionBehaviorExecution);
	std::shared_ptr<IntegerToStringFunctionBehaviorExecution> integerToStringFunctionBehaviorExecution(
		new IntegerToStringFunctionBehaviorExecution());
	integerToStringFunctionBehaviorExecution->setThisObject_Ptr(integerToStringFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(integerToStringFunctionBehaviorExecution);
	std::shared_ptr<IntegerToUnlimitedNaturalFunctionBehaviorExecution> integerToUnlimitedNaturalFunctionBehaviorExecution(
		new IntegerToUnlimitedNaturalFunctionBehaviorExecution());
	integerToUnlimitedNaturalFunctionBehaviorExecution->setThisObject_Ptr(integerToUnlimitedNaturalFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(integerToUnlimitedNaturalFunctionBehaviorExecution);
}

void Environment::addListFunctionsPrototypes()
{
	std::shared_ptr<ListConcatFunctionBehaviorExecution> listConcatFunctionBehaviorExecution(
		new ListConcatFunctionBehaviorExecution());
	listConcatFunctionBehaviorExecution->setThisObject_Ptr(listConcatFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(listConcatFunctionBehaviorExecution);
	std::shared_ptr<ListGetFunctionBehaviorExecution> listGetFunctionBehaviorExecution(
		new ListGetFunctionBehaviorExecution());
	listGetFunctionBehaviorExecution->setThisObject_Ptr(listGetFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(listGetFunctionBehaviorExecution);
	std::shared_ptr<ListSizeFunctionBehaviorExecution> listSizeFunctionBehaviorExecution(
		new ListSizeFunctionBehaviorExecution());
	listSizeFunctionBehaviorExecution->setThisObject_Ptr(listSizeFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(listSizeFunctionBehaviorExecution);
}

void Environment::addRealFunctionsPrototypes()
{
	std::shared_ptr<RealAbsFunctionBehaviorExecution> realAbsFunctionBehaviorExecution(
		new RealAbsFunctionBehaviorExecution());
	realAbsFunctionBehaviorExecution->setThisObject_Ptr(realAbsFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(realAbsFunctionBehaviorExecution);
	std::shared_ptr<RealDivideFunctionBehaviorExecution> realDivideFunctionBehaviorExecution(
		new RealDivideFunctionBehaviorExecution());
	realDivideFunctionBehaviorExecution->setThisObject_Ptr(realDivideFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(realDivideFunctionBehaviorExecution);
	std::shared_ptr<RealFloorFunctionBehaviorExecution> realFloorFunctionBehaviorExecution(
		new RealFloorFunctionBehaviorExecution());
	realFloorFunctionBehaviorExecution->setThisObject_Ptr(realFloorFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(realFloorFunctionBehaviorExecution);
	std::shared_ptr<RealGreaterThanEqualFunctionBehaviorExecution> realGreaterThanEqualFunctionBehaviorExecution(
		new RealGreaterThanEqualFunctionBehaviorExecution());
	realGreaterThanEqualFunctionBehaviorExecution->setThisObject_Ptr(realGreaterThanEqualFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(realGreaterThanEqualFunctionBehaviorExecution);
	std::shared_ptr<RealGreaterThanFunctionBehaviorExecution> realGreaterThanFunctionBehaviorExecution(
		new RealGreaterThanFunctionBehaviorExecution());
	realGreaterThanFunctionBehaviorExecution->setThisObject_Ptr(realGreaterThanFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(realGreaterThanFunctionBehaviorExecution);
	std::shared_ptr<RealInverseFunctionBehaviorExecution> realInverseFunctionBehaviorExecution(
		new RealInverseFunctionBehaviorExecution());
	realInverseFunctionBehaviorExecution->setThisObject_Ptr(realInverseFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(realInverseFunctionBehaviorExecution);
	std::shared_ptr<RealLessThanEqualFunctionBehaviorExecution> realLessThanEqualFunctionBehaviorExecution(
		new RealLessThanEqualFunctionBehaviorExecution());
	realLessThanEqualFunctionBehaviorExecution->setThisObject_Ptr(realLessThanEqualFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(realLessThanEqualFunctionBehaviorExecution);
	std::shared_ptr<RealLessThanFunctionBehaviorExecution> realLessThanFunctionBehaviorExecution(
		new RealLessThanFunctionBehaviorExecution());
	realLessThanFunctionBehaviorExecution->setThisObject_Ptr(realLessThanFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(realLessThanFunctionBehaviorExecution);
	std::shared_ptr<RealMaxFunctionBehaviorExecution> realMaxFunctionBehaviorExecution(
		new RealMaxFunctionBehaviorExecution());
	realMaxFunctionBehaviorExecution->setThisObject_Ptr(realMaxFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(realMaxFunctionBehaviorExecution);
	std::shared_ptr<RealMinFunctionBehaviorExecution> realMinFunctionBehaviorExecution(
		new RealMinFunctionBehaviorExecution());
	realMinFunctionBehaviorExecution->setThisObject_Ptr(realMinFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(realMinFunctionBehaviorExecution);
	std::shared_ptr<RealMinusFunctionBehaviorExecution> realMinusFunctionBehaviorExecution(
		new RealMinusFunctionBehaviorExecution());
	realMinusFunctionBehaviorExecution->setThisObject_Ptr(realMinusFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(realMinusFunctionBehaviorExecution);
	std::shared_ptr<RealNegateFunctionBehaviorExecution> realNegateFunctionBehaviorExecution(
		new RealNegateFunctionBehaviorExecution());
	realNegateFunctionBehaviorExecution->setThisObject_Ptr(realNegateFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(realNegateFunctionBehaviorExecution);
	std::shared_ptr<RealPlusFunctionBehaviorExecution> realPlusFunctionBehaviorExecution(
		new RealPlusFunctionBehaviorExecution());
	realPlusFunctionBehaviorExecution->setThisObject_Ptr(realPlusFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(realPlusFunctionBehaviorExecution);
	std::shared_ptr<RealRoundFunctionBehaviorExecution> realRoundFunctionBehaviorExecution(
		new RealRoundFunctionBehaviorExecution());
	realRoundFunctionBehaviorExecution->setThisObject_Ptr(realRoundFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(realRoundFunctionBehaviorExecution);
	std::shared_ptr<RealTimesFunctionBehaviorExecution> realTimesFunctionBehaviorExecution(
		new RealTimesFunctionBehaviorExecution());
	realTimesFunctionBehaviorExecution->setThisObject_Ptr(realTimesFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(realTimesFunctionBehaviorExecution);
	std::shared_ptr<RealToIntegerFunctionBehaviorExecution> realToIntegerFunctionBehaviorExecution(
		new RealToIntegerFunctionBehaviorExecution());
	realToIntegerFunctionBehaviorExecution->setThisObject_Ptr(realToIntegerFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(realToIntegerFunctionBehaviorExecution);
	std::shared_ptr<RealToRealFunctionBehaviorExecution> realToRealFunctionBehaviorExecution(
		new RealToRealFunctionBehaviorExecution());
	realToRealFunctionBehaviorExecution->setThisObject_Ptr(realToRealFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(realToRealFunctionBehaviorExecution);
	std::shared_ptr<RealToStringFunctionBehaviorExecution> realToStringFunctionBehaviorExecution(
		new RealToStringFunctionBehaviorExecution());
	realToStringFunctionBehaviorExecution->setThisObject_Ptr(realToStringFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(realToStringFunctionBehaviorExecution);
}

void Environment::addStringFunctionsPrototypes()
{
	std::shared_ptr<StringConcatFunctionBehaviorExecution> stringConcatFunctionBehaviorExecution(
		new StringConcatFunctionBehaviorExecution());
	stringConcatFunctionBehaviorExecution->setThisObject_Ptr(stringConcatFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(stringConcatFunctionBehaviorExecution);

	std::shared_ptr<StringSizeFunctionBehaviorExecution> stringSizeFunctionBehaviorExecution(
		new StringSizeFunctionBehaviorExecution());
	stringSizeFunctionBehaviorExecution->setThisObject_Ptr(stringSizeFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(stringSizeFunctionBehaviorExecution);

	std::shared_ptr<StringSubstringFunctionBehaviorExecution> stringSubstringFunctionBehaviorExecution(
		new StringSubstringFunctionBehaviorExecution());
	stringSubstringFunctionBehaviorExecution->setThisObject_Ptr(stringSubstringFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(stringSubstringFunctionBehaviorExecution);
}

void Environment::addUnlimitedNaturalFunctionsPrototypes()
{
	std::shared_ptr<UnlimitedNaturalGreaterThanEqualFunctionBehaviorExecution> unlimitedNaturalGreaterThanEqualFunctionBehaviorExecution(
		new UnlimitedNaturalGreaterThanEqualFunctionBehaviorExecution());
	unlimitedNaturalGreaterThanEqualFunctionBehaviorExecution->setThisObject_Ptr(unlimitedNaturalGreaterThanEqualFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(unlimitedNaturalGreaterThanEqualFunctionBehaviorExecution);
	std::shared_ptr<UnlimitedNaturalGreaterThanFunctionBehaviorExecution> unlimitedNaturalGreaterThanFunctionBehaviorExecution(
		new UnlimitedNaturalGreaterThanFunctionBehaviorExecution());
	unlimitedNaturalGreaterThanFunctionBehaviorExecution->setThisObject_Ptr(unlimitedNaturalGreaterThanFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(unlimitedNaturalGreaterThanFunctionBehaviorExecution);
	std::shared_ptr<UnlimitedNaturalLessThanEqualFunctionBehaviorExecution> unlimitedNaturalLessThanEqualFunctionBehaviorExecution(
		new UnlimitedNaturalLessThanEqualFunctionBehaviorExecution());
	unlimitedNaturalLessThanEqualFunctionBehaviorExecution->setThisObject_Ptr(unlimitedNaturalLessThanEqualFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(unlimitedNaturalLessThanEqualFunctionBehaviorExecution);
	std::shared_ptr<UnlimitedNaturalLessThanFunctionBehaviorExecution> unlimitedNaturalLessThanFunctionBehaviorExecution(
		new UnlimitedNaturalLessThanFunctionBehaviorExecution());
	unlimitedNaturalLessThanFunctionBehaviorExecution->setThisObject_Ptr(unlimitedNaturalLessThanFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(unlimitedNaturalLessThanFunctionBehaviorExecution);
	std::shared_ptr<UnlimitedNaturalMaxFunctionBehaviorExecution> unlimitedNaturalMaxFunctionBehaviorExecution(
		new UnlimitedNaturalMaxFunctionBehaviorExecution());
	unlimitedNaturalMaxFunctionBehaviorExecution->setThisObject_Ptr(unlimitedNaturalMaxFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(unlimitedNaturalMaxFunctionBehaviorExecution);
	std::shared_ptr<UnlimitedNaturalMinFunctionBehaviorExecution> unlimitedNaturalMinFunctionBehaviorExecution(
		new UnlimitedNaturalMinFunctionBehaviorExecution());
	unlimitedNaturalMinFunctionBehaviorExecution->setThisObject_Ptr(unlimitedNaturalMinFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(unlimitedNaturalMinFunctionBehaviorExecution);
	std::shared_ptr<UnlimitedNaturalToIntegerFunctionBehaviorExecution> unlimitedNaturalToIntegerFunctionBehaviorExecution(
		new UnlimitedNaturalToIntegerFunctionBehaviorExecution());
	unlimitedNaturalToIntegerFunctionBehaviorExecution->setThisObject_Ptr(unlimitedNaturalToIntegerFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(unlimitedNaturalToIntegerFunctionBehaviorExecution);
	std::shared_ptr<UnlimitedNaturalToStringFunctionBehaviorExecution> unlimitedNaturalToStringFunctionBehaviorExecution(
		new UnlimitedNaturalToStringFunctionBehaviorExecution());
	unlimitedNaturalToStringFunctionBehaviorExecution->setThisObject_Ptr(unlimitedNaturalToStringFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(unlimitedNaturalToStringFunctionBehaviorExecution);
	std::shared_ptr<UnlimitedNaturalToUnlimitedNaturalFunctionBehaviorExecution> unlimitedNaturalToUnlimitedNaturalFunctionBehaviorExecution(
		new UnlimitedNaturalToUnlimitedNaturalFunctionBehaviorExecution());
	unlimitedNaturalToUnlimitedNaturalFunctionBehaviorExecution->setThisObject_Ptr(unlimitedNaturalToUnlimitedNaturalFunctionBehaviorExecution);
	this->addPrimitiveBehaviorPrototype(unlimitedNaturalToUnlimitedNaturalFunctionBehaviorExecution);
}
