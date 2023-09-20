/*
 * primecheckerEnvironment.cpp
 * 
 * Auto-generated file
 */

#include "primecheckerEnvironment.h"

#include "primecheckerModel.h"
#include "enterNumberExecution.h"
#include "printIsNotPrimeExecution.h"
#include "printIsPrimeExecution.h"
#include "incrementExecution.h"
#include "doPrimeCheckExecution.h"
#include "checkIf_1_Or_0Execution.h"
#include "checkLoopConditionExecution.h"

/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace primechecker;

/* Start of user code : User-defined members
 * This section may be used for user-defined members,
 * for exmaple implementations of user-defined member functions
 * or definition of static members.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

primecheckerEnvironment::primecheckerEnvironment()
{
	/*
	 * Create custom opaque behavior execution instances and add them to the execution environment.
	 */
	std::shared_ptr<enterNumberExecution> _enterNumberExecution(new enterNumberExecution());
	_enterNumberExecution->setThisObject_Ptr(_enterNumberExecution);
	this->addPrimitiveBehaviorPrototype(_enterNumberExecution);
	std::shared_ptr<printIsNotPrimeExecution> _printIsNotPrimeExecution(new printIsNotPrimeExecution());
	_printIsNotPrimeExecution->setThisObject_Ptr(_printIsNotPrimeExecution);
	this->addPrimitiveBehaviorPrototype(_printIsNotPrimeExecution);
	std::shared_ptr<printIsPrimeExecution> _printIsPrimeExecution(new printIsPrimeExecution());
	_printIsPrimeExecution->setThisObject_Ptr(_printIsPrimeExecution);
	this->addPrimitiveBehaviorPrototype(_printIsPrimeExecution);
	std::shared_ptr<incrementExecution> _incrementExecution(new incrementExecution());
	_incrementExecution->setThisObject_Ptr(_incrementExecution);
	this->addPrimitiveBehaviorPrototype(_incrementExecution);
	std::shared_ptr<doPrimeCheckExecution> _doPrimeCheckExecution(new doPrimeCheckExecution());
	_doPrimeCheckExecution->setThisObject_Ptr(_doPrimeCheckExecution);
	this->addPrimitiveBehaviorPrototype(_doPrimeCheckExecution);
	std::shared_ptr<checkIf_1_Or_0Execution> _checkIf_1_Or_0Execution(new checkIf_1_Or_0Execution());
	_checkIf_1_Or_0Execution->setThisObject_Ptr(_checkIf_1_Or_0Execution);
	this->addPrimitiveBehaviorPrototype(_checkIf_1_Or_0Execution);
	std::shared_ptr<checkLoopConditionExecution> _checkLoopConditionExecution(new checkLoopConditionExecution());
	_checkLoopConditionExecution->setThisObject_Ptr(_checkLoopConditionExecution);
	this->addPrimitiveBehaviorPrototype(_checkLoopConditionExecution);

	/* Start of user code : Additional environment initializations
 	 * This section may be used to do any additional environment initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

primecheckerEnvironment::~primecheckerEnvironment()
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

const std::shared_ptr<primecheckerEnvironment>& primecheckerEnvironment::Instance()
{
	static std::shared_ptr<primecheckerEnvironment> instance = nullptr;

	if(!instance)
	{
		instance.reset(new primecheckerEnvironment());
		instance->inMemoryModel = primecheckerModel::Instance();
	}

	return instance;
}

void primecheckerEnvironment::execute(std::string behaviorName)
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
