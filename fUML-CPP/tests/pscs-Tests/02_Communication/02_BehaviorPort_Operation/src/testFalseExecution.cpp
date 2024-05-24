/*
 * testFalseExecution.cpp
 * 
 * Auto-generated file
 */

#include "testFalseExecution.h"

#include "BehaviorPort_OperationModel.h"
#include <fuml/Debug.h>
#include <iostream>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <uml/commonbehavior/OpaqueBehavior.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/BooleanValue.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>

/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace BehaviorPort_Operation;

/* Start of user code : User-defined members
 * This section may be used for user-defined members,
 * for exmaple implementations of user-defined member functions
 * or definition of static members.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

testFalseExecution::testFalseExecution()
{
	this->types->push_back(BehaviorPort_OperationModel::Instance()->BehaviorPort_Operation_assertP_testFalse);
	/* Start of user code : Additional opaque behavior execution initializations
 	 * This section may be used to do any additional opaque behavior execution initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

testFalseExecution::~testFalseExecution()
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

void testFalseExecution::doBody(const ParameterValueListPtr& inputParameters,
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

	// Test parameter input
	bool input = AS(BooleanValue, inputParameters->at(0)->values->at(0))->value;
	fuml::Debug::println("[doBody] argument input = " + std::to_string(input));
	if(input == false)
	{
		std::cout<<ASCII_GRN << "Assertion successful" << ASCII_BLK <<std::endl;
	}
	else
	{
		std::cout<<ASCII_RED << "Assertion failed." << ASCII_BLK << " Was: " << std::to_string(input) << " ; Should: false"<<std::endl;
	}
}

ValuePtr testFalseExecution::new_()
{
	std::shared_ptr<testFalseExecution> newValue(new testFalseExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
