/*
 * DelegationConnectors_P_PWPEnvironment.cpp
 * 
 * Auto-generated file
 */

#include "DelegationConnectors_P_PWPEnvironment.h"

#include "DelegationConnectors_P_PWPModel.h"

/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace DelegationConnectors_P_PWP;

/* Start of user code : User-defined members
 * This section may be used for user-defined members,
 * for exmaple implementations of user-defined member functions
 * or definition of static members.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

DelegationConnectors_P_PWPEnvironment::DelegationConnectors_P_PWPEnvironment()
{
	this->initializeEnvironment();

	/*
	 * Create custom opaque behavior execution instances and add them to the execution environment.
	 */

	/* Start of user code : Additional environment initializations
 	 * This section may be used to do any additional environment initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

DelegationConnectors_P_PWPEnvironment::~DelegationConnectors_P_PWPEnvironment()
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

const std::shared_ptr<DelegationConnectors_P_PWPEnvironment>& DelegationConnectors_P_PWPEnvironment::Instance()
{
	static std::shared_ptr<DelegationConnectors_P_PWPEnvironment> instance = nullptr;

	if(!instance)
	{
		instance.reset(new DelegationConnectors_P_PWPEnvironment());
		instance->inMemoryModel = DelegationConnectors_P_PWPModel::Instance();
	}

	return instance;
}

void DelegationConnectors_P_PWPEnvironment::execute(std::string behaviorName)
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
