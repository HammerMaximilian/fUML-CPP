/*
 * SingleDelegation_P_P_SignalEnvironment.cpp
 * 
 * Auto-generated file
 */

#include "SingleDelegation_P_P_SignalEnvironment.h"

#include "SingleDelegation_P_P_SignalModel.h"
#include "testPExecution.h"

/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace SingleDelegation_P_P_Signal;

/* Start of user code : User-defined members
 * This section may be used for user-defined members,
 * for exmaple implementations of user-defined member functions
 * or definition of static members.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

SingleDelegation_P_P_SignalEnvironment::SingleDelegation_P_P_SignalEnvironment()
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

SingleDelegation_P_P_SignalEnvironment::~SingleDelegation_P_P_SignalEnvironment()
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

const std::shared_ptr<SingleDelegation_P_P_SignalEnvironment>& SingleDelegation_P_P_SignalEnvironment::Instance()
{
	static std::shared_ptr<SingleDelegation_P_P_SignalEnvironment> instance = nullptr;

	if(!instance)
	{
		instance.reset(new SingleDelegation_P_P_SignalEnvironment());
		instance->inMemoryModel = SingleDelegation_P_P_SignalModel::Instance();
	}

	return instance;
}

void SingleDelegation_P_P_SignalEnvironment::execute(std::string behaviorName)
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
