/*
 * Operation_RequiredInterface_DelegationChainEnvironment.cpp
 * 
 * Auto-generated file
 */

#include "Operation_RequiredInterface_DelegationChainEnvironment.h"

#include "Operation_RequiredInterface_DelegationChainModel.h"
#include "testPExecution.h"

/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace Operation_RequiredInterface_DelegationChain;

/* Start of user code : User-defined members
 * This section may be used for user-defined members,
 * for exmaple implementations of user-defined member functions
 * or definition of static members.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

Operation_RequiredInterface_DelegationChainEnvironment::Operation_RequiredInterface_DelegationChainEnvironment()
{
	this->initializeEnvironment();

	/*
	 * Create custom opaque behavior execution instances and add them to the execution environment.
	 */
	std::shared_ptr<testPExecution> _testPExecution(new testPExecution());
	_testPExecution->setThisObject_Ptr(_testPExecution);
	this->addPrimitiveBehaviorPrototype(_testPExecution);

	/* Start of user code : Additional environment initializations
 	 * This section may be used to do any additional environment initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

Operation_RequiredInterface_DelegationChainEnvironment::~Operation_RequiredInterface_DelegationChainEnvironment()
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

const std::shared_ptr<Operation_RequiredInterface_DelegationChainEnvironment>& Operation_RequiredInterface_DelegationChainEnvironment::Instance()
{
	static std::shared_ptr<Operation_RequiredInterface_DelegationChainEnvironment> instance = nullptr;

	if(!instance)
	{
		instance.reset(new Operation_RequiredInterface_DelegationChainEnvironment());
		instance->inMemoryModel = Operation_RequiredInterface_DelegationChainModel::Instance();
	}

	return instance;
}

void Operation_RequiredInterface_DelegationChainEnvironment::execute(std::string behaviorName)
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
