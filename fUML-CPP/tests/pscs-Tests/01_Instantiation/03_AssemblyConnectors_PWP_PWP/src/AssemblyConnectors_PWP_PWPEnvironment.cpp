/*
 * AssemblyConnectors_PWP_PWPEnvironment.cpp
 * 
 * Auto-generated file
 */

#include "AssemblyConnectors_PWP_PWPEnvironment.h"

#include "AssemblyConnectors_PWP_PWPModel.h"

/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace AssemblyConnectors_PWP_PWP;

/* Start of user code : User-defined members
 * This section may be used for user-defined members,
 * for exmaple implementations of user-defined member functions
 * or definition of static members.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

AssemblyConnectors_PWP_PWPEnvironment::AssemblyConnectors_PWP_PWPEnvironment()
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

AssemblyConnectors_PWP_PWPEnvironment::~AssemblyConnectors_PWP_PWPEnvironment()
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

const std::shared_ptr<AssemblyConnectors_PWP_PWPEnvironment>& AssemblyConnectors_PWP_PWPEnvironment::Instance()
{
	static std::shared_ptr<AssemblyConnectors_PWP_PWPEnvironment> instance = nullptr;

	if(!instance)
	{
		instance.reset(new AssemblyConnectors_PWP_PWPEnvironment());
		instance->inMemoryModel = AssemblyConnectors_PWP_PWPModel::Instance();
	}

	return instance;
}

void AssemblyConnectors_PWP_PWPEnvironment::execute(std::string behaviorName)
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
