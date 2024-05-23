/*
 * RemovingInstanceFromPortEnvironment.cpp
 * 
 * Auto-generated file
 */

#include "RemovingInstanceFromPortEnvironment.h"

#include "RemovingInstanceFromPortModel.h"
#include "assertionNotImplementedExecution.h"

/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace RemovingInstanceFromPort;

/* Start of user code : User-defined members
 * This section may be used for user-defined members,
 * for exmaple implementations of user-defined member functions
 * or definition of static members.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

RemovingInstanceFromPortEnvironment::RemovingInstanceFromPortEnvironment()
{
	this->initializeEnvironment();

	/*
	 * Create custom opaque behavior execution instances and add them to the execution environment.
	 */
	std::shared_ptr<assertionNotImplementedExecution> _assertionNotImplementedExecution(new assertionNotImplementedExecution());
	_assertionNotImplementedExecution->setThisObject_Ptr(_assertionNotImplementedExecution);
	this->addPrimitiveBehaviorPrototype(_assertionNotImplementedExecution);

	/* Start of user code : Additional environment initializations
 	 * This section may be used to do any additional environment initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

RemovingInstanceFromPortEnvironment::~RemovingInstanceFromPortEnvironment()
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

const std::shared_ptr<RemovingInstanceFromPortEnvironment>& RemovingInstanceFromPortEnvironment::Instance()
{
	static std::shared_ptr<RemovingInstanceFromPortEnvironment> instance = nullptr;

	if(!instance)
	{
		instance.reset(new RemovingInstanceFromPortEnvironment());
		instance->inMemoryModel = RemovingInstanceFromPortModel::Instance();
	}

	return instance;
}

void RemovingInstanceFromPortEnvironment::execute(std::string behaviorName)
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
