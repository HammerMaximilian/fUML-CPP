/*
 * HierarchyEnvironment.cpp
 * 
 * Auto-generated file
 */

#include "HierarchyEnvironment.h"

#include "HierarchyModel.h"
#include "testNonEmptyListExecution.h"
#include "testEmptyListExecution.h"

/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace Hierarchy;

/* Start of user code : User-defined members
 * This section may be used for user-defined members,
 * for exmaple implementations of user-defined member functions
 * or definition of static members.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

HierarchyEnvironment::HierarchyEnvironment()
{
	this->initializeEnvironment();

	/*
	 * Create custom opaque behavior execution instances and add them to the execution environment.
	 */
	std::shared_ptr<testNonEmptyListExecution> _testNonEmptyListExecution(new testNonEmptyListExecution());
	_testNonEmptyListExecution->setThisObject_Ptr(_testNonEmptyListExecution);
	this->addPrimitiveBehaviorPrototype(_testNonEmptyListExecution);
	std::shared_ptr<testEmptyListExecution> _testEmptyListExecution(new testEmptyListExecution());
	_testEmptyListExecution->setThisObject_Ptr(_testEmptyListExecution);
	this->addPrimitiveBehaviorPrototype(_testEmptyListExecution);

	/* Start of user code : Additional environment initializations
 	 * This section may be used to do any additional environment initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

HierarchyEnvironment::~HierarchyEnvironment()
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

const std::shared_ptr<HierarchyEnvironment>& HierarchyEnvironment::Instance()
{
	static std::shared_ptr<HierarchyEnvironment> instance = nullptr;

	if(!instance)
	{
		instance.reset(new HierarchyEnvironment());
		instance->inMemoryModel = HierarchyModel::Instance();
	}

	return instance;
}

void HierarchyEnvironment::execute(std::string behaviorName)
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
