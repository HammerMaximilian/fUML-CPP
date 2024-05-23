/*
 * numberOfBInstancesExecution.cpp
 * 
 * Auto-generated file
 */

#include "numberOfBInstancesExecution.h"

#include "RecursiveDestructionModel.h"
#include <fuml/Debug.h>
#include <iostream>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <uml/commonbehavior/OpaqueBehavior.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>

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

numberOfBInstancesExecution::numberOfBInstancesExecution()
{
	this->types->push_back(RecursiveDestructionModel::Instance()->RecursiveDestruction_main_numberOfBInstances);
	/* Start of user code : Additional opaque behavior execution initializations
 	 * This section may be used to do any additional opaque behavior execution initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

numberOfBInstancesExecution::~numberOfBInstancesExecution()
{
	/* Start of user code : Additional opaque behavior execution cleanup
 	 * This section may be used to do any additional opaque behavior execution cleanup,
	 * for example freeing memory for user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

void numberOfBInstancesExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	std::cout << "# Instances of B: " << inputParameters->at(0)->values->size() << std::endl;
}

ValuePtr numberOfBInstancesExecution::new_()
{
	std::shared_ptr<numberOfBInstancesExecution> newValue(new numberOfBInstancesExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
