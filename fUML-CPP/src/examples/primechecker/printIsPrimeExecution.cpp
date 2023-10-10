/*
 * printIsPrimeExecution.cpp
 * 
 * Auto-generated file
 */

#include "printIsPrimeExecution.h"

#include "primecheckerModel.h"
#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/syntax/commonbehavior/OpaqueBehavior.h>

/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */
#include <iostream>
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

printIsPrimeExecution::printIsPrimeExecution()
{
	this->types->push_back(primecheckerModel::Instance()->primechecker_printIsPrime);
	/* Start of user code : Additional opaque behavior execution initializations
 	 * This section may be used to do any additional opaque behavior execution initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

printIsPrimeExecution::~printIsPrimeExecution()
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

void printIsPrimeExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	std::cout<<"Number is prime"<<std::endl;
}

ValuePtr printIsPrimeExecution::new_()
{
	std::shared_ptr<printIsPrimeExecution> newValue(new printIsPrimeExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}