/*
 * testVExecution.cpp
 * 
 * Auto-generated file
 */

#include "testVExecution.h"

#include "Signal_AssemblyAndDelegationModel.h"
#include <fuml/Debug.h>
#include <iostream>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <uml/commonbehavior/OpaqueBehavior.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/IntegerValue.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>

/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace Signal_AssemblyAndDelegation;

/* Start of user code : User-defined members
 * This section may be used for user-defined members,
 * for exmaple implementations of user-defined member functions
 * or definition of static members.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

testVExecution::testVExecution()
{
	this->types->push_back(Signal_AssemblyAndDelegationModel::Instance()->Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV);
	/* Start of user code : Additional opaque behavior execution initializations
 	 * This section may be used to do any additional opaque behavior execution initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

testVExecution::~testVExecution()
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

void testVExecution::doBody(const ParameterValueListPtr& inputParameters,
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

	std::cout<<"Asserting b.a.v == 4"<<std::endl;

	// Test parameter p
	int v = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value;
	fuml::Debug::println("[doBody] argument v = " + std::to_string(v));
	
	std::cout << "b.a.v == " << std::to_string(v) <<std::endl;
	std::cout<<"Signal correctly sent and received: ";

	if(v == 4)
	{
		std::cout<<ASCII_GRN << "Assertion successful" << ASCII_BLK <<std::endl;
	}
	else
	{
		std::cout<<ASCII_RED << "Assertion failed." << ASCII_BLK << std::endl;
	}
}

ValuePtr testVExecution::new_()
{
	std::shared_ptr<testVExecution> newValue(new testVExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
