/*
 * RecursiveDestructionEnvironment.cpp
 * 
 * Auto-generated file
 */

#include "RecursiveDestructionEnvironment.h"

#include "RecursiveDestructionModel.h"
#include "numberOfCInstancesExecution.h"
#include "numberOfIImplInstancesExecution.h"
#include "assertExtentOfBExecution.h"
#include "numberOfBInstancesExecution.h"
#include "assertExtentOfIImplExecution.h"
#include "assertExtentOfCExecution.h"

/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace RecursiveDestruction;

/* Start of user code : User-defined members
 * This section may be used for user-defined members,
 * for exmaple implementations of user-defined member functions
 * or definition of static members.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

RecursiveDestructionEnvironment::RecursiveDestructionEnvironment()
{
	this->initializeEnvironment();

	/*
	 * Create custom opaque behavior execution instances and add them to the execution environment.
	 */
	std::shared_ptr<numberOfCInstancesExecution> _numberOfCInstancesExecution(new numberOfCInstancesExecution());
	_numberOfCInstancesExecution->setThisObject_Ptr(_numberOfCInstancesExecution);
	this->addPrimitiveBehaviorPrototype(_numberOfCInstancesExecution);
	std::shared_ptr<numberOfIImplInstancesExecution> _numberOfIImplInstancesExecution(new numberOfIImplInstancesExecution());
	_numberOfIImplInstancesExecution->setThisObject_Ptr(_numberOfIImplInstancesExecution);
	this->addPrimitiveBehaviorPrototype(_numberOfIImplInstancesExecution);
	std::shared_ptr<assertExtentOfBExecution> _assertExtentOfBExecution(new assertExtentOfBExecution());
	_assertExtentOfBExecution->setThisObject_Ptr(_assertExtentOfBExecution);
	this->addPrimitiveBehaviorPrototype(_assertExtentOfBExecution);
	std::shared_ptr<numberOfBInstancesExecution> _numberOfBInstancesExecution(new numberOfBInstancesExecution());
	_numberOfBInstancesExecution->setThisObject_Ptr(_numberOfBInstancesExecution);
	this->addPrimitiveBehaviorPrototype(_numberOfBInstancesExecution);
	std::shared_ptr<assertExtentOfIImplExecution> _assertExtentOfIImplExecution(new assertExtentOfIImplExecution());
	_assertExtentOfIImplExecution->setThisObject_Ptr(_assertExtentOfIImplExecution);
	this->addPrimitiveBehaviorPrototype(_assertExtentOfIImplExecution);
	std::shared_ptr<assertExtentOfCExecution> _assertExtentOfCExecution(new assertExtentOfCExecution());
	_assertExtentOfCExecution->setThisObject_Ptr(_assertExtentOfCExecution);
	this->addPrimitiveBehaviorPrototype(_assertExtentOfCExecution);

	/* Start of user code : Additional environment initializations
 	 * This section may be used to do any additional environment initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

RecursiveDestructionEnvironment::~RecursiveDestructionEnvironment()
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

const std::shared_ptr<RecursiveDestructionEnvironment>& RecursiveDestructionEnvironment::Instance()
{
	static std::shared_ptr<RecursiveDestructionEnvironment> instance = nullptr;

	if(!instance)
	{
		instance.reset(new RecursiveDestructionEnvironment());
		instance->inMemoryModel = RecursiveDestructionModel::Instance();
	}

	return instance;
}

void RecursiveDestructionEnvironment::execute(std::string behaviorName)
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
