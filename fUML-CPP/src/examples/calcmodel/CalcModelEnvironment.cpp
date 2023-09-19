/*
 * CalcModelEnvironment.cpp
 * 
 * Auto-generated file
 */

#include "CalcModelEnvironment.h"

#include "CalcModelModel.h"
#include "fbDividesExecution.h"
#include "fbNextExecution.h"
#include "obEnterNumberExecution.h"
#include "fbIsNotFinishedExecution.h"
#include "fbPrintNotPrimeExecution.h"
#include "fbPrintIsPrimeExecution.h"
#include "fbIsOddExecution.h"

/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace CalcModel;

/* Start of user code : User-defined members
 * This section may be used for user-defined members,
 * for exmaple implementations of user-defined member functions
 * or definition of static members.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

CalcModelEnvironment::CalcModelEnvironment()
{
	/*
	 * Create custom opaque behavior execution instances and add them to the execution environment.
	 */
	std::shared_ptr<fbDividesExecution> _fbDividesExecution(new fbDividesExecution());
	_fbDividesExecution->setThisObject_Ptr(_fbDividesExecution);
	this->addPrimitiveBehaviorPrototype(_fbDividesExecution);
	std::shared_ptr<fbNextExecution> _fbNextExecution(new fbNextExecution());
	_fbNextExecution->setThisObject_Ptr(_fbNextExecution);
	this->addPrimitiveBehaviorPrototype(_fbNextExecution);
	std::shared_ptr<obEnterNumberExecution> _obEnterNumberExecution(new obEnterNumberExecution());
	_obEnterNumberExecution->setThisObject_Ptr(_obEnterNumberExecution);
	this->addPrimitiveBehaviorPrototype(_obEnterNumberExecution);
	std::shared_ptr<fbIsNotFinishedExecution> _fbIsNotFinishedExecution(new fbIsNotFinishedExecution());
	_fbIsNotFinishedExecution->setThisObject_Ptr(_fbIsNotFinishedExecution);
	this->addPrimitiveBehaviorPrototype(_fbIsNotFinishedExecution);
	std::shared_ptr<fbPrintNotPrimeExecution> _fbPrintNotPrimeExecution(new fbPrintNotPrimeExecution());
	_fbPrintNotPrimeExecution->setThisObject_Ptr(_fbPrintNotPrimeExecution);
	this->addPrimitiveBehaviorPrototype(_fbPrintNotPrimeExecution);
	std::shared_ptr<fbPrintIsPrimeExecution> _fbPrintIsPrimeExecution(new fbPrintIsPrimeExecution());
	_fbPrintIsPrimeExecution->setThisObject_Ptr(_fbPrintIsPrimeExecution);
	this->addPrimitiveBehaviorPrototype(_fbPrintIsPrimeExecution);
	std::shared_ptr<fbIsOddExecution> _fbIsOddExecution(new fbIsOddExecution());
	_fbIsOddExecution->setThisObject_Ptr(_fbIsOddExecution);
	this->addPrimitiveBehaviorPrototype(_fbIsOddExecution);

	/* Start of user code : Additional environment initializations
 	 * This section may be used to do any additional environment initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

CalcModelEnvironment::~CalcModelEnvironment()
{
	/* Start of user code : Additional environment cleanup
 	 * This section may be used to do any additional environment cleanup,
	 * for example freeing memory for user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

const std::shared_ptr<CalcModelEnvironment>& CalcModelEnvironment::Instance()
{
	static std::shared_ptr<CalcModelEnvironment> instance = nullptr;

	if(!instance)
	{
		instance.reset(new CalcModelEnvironment());
		instance->inMemoryModel = CalcModelModel::Instance();
	}

	return instance;
}

void CalcModelEnvironment::execute(std::string behaviorName)
{
	/* Start of user code : Context and inputs initializations
 	 * This section may be used to initialize the execution context 
	 * as well as input parameter values if required.
 	 * It will not be overwritten by future generation processes.
 	 */

	//this->context = ...;
	//this->inputs = ...;

	/*
 	 * End of user code
 	 */

	/*
	 * Start execution via base class call
	 */
	fuml::environment::Environment::execute(behaviorName);

	/* Start of user code : Onputs evaluation
 	 * This section may be used to evaluate output parameter values if required.
 	 * It will not be overwritten by future generation processes.
 	 */

	//ParameterValueListPtr theOutputs = this->outputs;
	//...

	/*
 	 * End of user code
 	 */
}
