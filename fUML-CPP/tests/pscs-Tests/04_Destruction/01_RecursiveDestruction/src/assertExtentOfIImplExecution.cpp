/*
 * assertExtentOfIImplExecution.cpp
 * 
 * Auto-generated file
 */

#include "assertExtentOfIImplExecution.h"

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

assertExtentOfIImplExecution::assertExtentOfIImplExecution()
{
	this->types->push_back(RecursiveDestructionModel::Instance()->RecursiveDestruction_main_assertExtentOfIImpl);
	/* Start of user code : Additional opaque behavior execution initializations
 	 * This section may be used to do any additional opaque behavior execution initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

assertExtentOfIImplExecution::~assertExtentOfIImplExecution()
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

void assertExtentOfIImplExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	#ifndef ASCII_GRN
		#define ASCII_GRN "\e[0;32m"
	#endif
	#ifndef ASCII_RED
		#define ASCII_RED "\e[0;31m"
	#endif
	#ifndef ASCII_BLK
		#define ASCII_BLK "\e[0m"
	#endif

	std::cout<<"Asserting IImpl.allInstances()->size() == 0"<<std::endl;

	int extentSize = inputParameters->at(0)->values->size();
	
	std::cout << "IImpl.allInstances()->size() == " << std::to_string(extentSize) <<std::endl;
	std::cout<<"All instances of IImpl recursively destroyed: ";

	if(extentSize == 0)
	{
		std::cout<<ASCII_GRN << "Assertion successful" << ASCII_BLK <<std::endl;
	}
	else
	{
		std::cout<<ASCII_RED << "Assertion failed." << ASCII_BLK <<std::endl;
	}
}

ValuePtr assertExtentOfIImplExecution::new_()
{
	std::shared_ptr<assertExtentOfIImplExecution> newValue(new assertExtentOfIImplExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
