/*
 * DefaultValue_BasicTypesEnvironment.cpp
 * 
 * Auto-generated file
 */

#include "DefaultValue_BasicTypesEnvironment.h"

#include "DefaultValue_BasicTypesModel.h"
#include "testDefaultValuesExecution.h"

/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace DefaultValue_BasicTypes;

/* Start of user code : User-defined members
 * This section may be used for user-defined members,
 * for exmaple implementations of user-defined member functions
 * or definition of static members.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

DefaultValue_BasicTypesEnvironment::DefaultValue_BasicTypesEnvironment()
{
	this->initializeEnvironment();

	/*
	 * Create custom opaque behavior execution instances and add them to the execution environment.
	 */
	std::shared_ptr<testDefaultValuesExecution> _testDefaultValuesExecution(new testDefaultValuesExecution());
	_testDefaultValuesExecution->setThisObject_Ptr(_testDefaultValuesExecution);
	this->addPrimitiveBehaviorPrototype(_testDefaultValuesExecution);

	/* Start of user code : Additional environment initializations
 	 * This section may be used to do any additional environment initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

DefaultValue_BasicTypesEnvironment::~DefaultValue_BasicTypesEnvironment()
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

const std::shared_ptr<DefaultValue_BasicTypesEnvironment>& DefaultValue_BasicTypesEnvironment::Instance()
{
	static std::shared_ptr<DefaultValue_BasicTypesEnvironment> instance = nullptr;

	if(!instance)
	{
		instance.reset(new DefaultValue_BasicTypesEnvironment());
		instance->inMemoryModel = DefaultValue_BasicTypesModel::Instance();
	}

	return instance;
}

void DefaultValue_BasicTypesEnvironment::execute(std::string behaviorName)
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
