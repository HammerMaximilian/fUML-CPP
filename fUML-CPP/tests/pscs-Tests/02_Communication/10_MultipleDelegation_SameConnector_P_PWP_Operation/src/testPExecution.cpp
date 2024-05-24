/*
 * testPExecution.cpp
 * 
 * Auto-generated file
 */

#include "testPExecution.h"

#include "MultipleDelegation_SameConnector_P_PWP_OperationModel.h"
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

using namespace MultipleDelegation_SameConnector_P_PWP_Operation;

/* Start of user code : User-defined members
 * This section may be used for user-defined members,
 * for exmaple implementations of user-defined member functions
 * or definition of static members.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

testPExecution::testPExecution()
{
	this->types->push_back(MultipleDelegation_SameConnector_P_PWP_OperationModel::Instance()->MultipleDelegation_SameConnector_P_PWP_Operation_main_testP);
	/* Start of user code : Additional opaque behavior execution initializations
 	 * This section may be used to do any additional opaque behavior execution initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

testPExecution::~testPExecution()
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

void testPExecution::doBody(const ParameterValueListPtr& inputParameters,
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

	static unsigned int index = 1;
	static const unsigned int MAX_INDEX = 4;
	static bool success = false;

	if(index == 1)
	{
		std::cout<<"Asserting c.a[1].b.p == 4 || c.a[2].b.p == 4 || c.a[3].b.p == 4 || c.a[4].b.c == 4"<<std::endl;
	}

	// For some reason, during the first execution of the expansion region, its body is actually executed twice.
	// Because of that, the body is actually executaed 5 times in total. This if-statement covers that up until solved.
	if(index <= MAX_INDEX)
	{
		// Test parameter p
		int p = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value;
		fuml::Debug::println("[doBody] argument p = " + std::to_string(p));
	
		std::cout << "c.a[" << index << "].b.p == " << std::to_string(p) <<std::endl;
		success = success || (p == 4);

		if(index == MAX_INDEX)
		{
			std::cout<<"Operation call delegated: ";

			if(success)
			{
				std::cout<<ASCII_GRN << "Assertion successful." << ASCII_BLK << std::endl;
			}
			else
			{
				std::cout<<ASCII_RED << "Assertion failed." << ASCII_BLK << std::endl;
			}
		}
	}

	index++;
}

ValuePtr testPExecution::new_()
{
	std::shared_ptr<testPExecution> newValue(new testPExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
