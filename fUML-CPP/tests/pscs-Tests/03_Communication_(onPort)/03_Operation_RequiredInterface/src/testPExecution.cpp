/*
 * testPExecution.cpp
 * 
 * Auto-generated file
 */

#include "testPExecution.h"

#include "Operation_RequiredInterfaceModel.h"
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

using namespace Operation_RequiredInterface;

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
	this->types->push_back(Operation_RequiredInterfaceModel::Instance()->Operation_RequiredInterface_main_testP);
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

	std::cout<<"Asserting d.a.b.p == 4"<<std::endl;

	// Test parameter p
	int p = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value;
	fuml::Debug::println("[doBody] argument p = " + std::to_string(p));
	
	std::cout << "d.a.b.p == " << std::to_string(p) <<std::endl;
	std::cout<<"Invocation forwarded out of c through q: ";

	if(p == 4)
	{
		std::cout<<ASCII_GRN << "Assertion successful" << ASCII_BLK <<std::endl;
	}
	else
	{
		std::cout<<ASCII_RED << "Assertion failed." << ASCII_BLK << std::endl;
	}
}

ValuePtr testPExecution::new_()
{
	std::shared_ptr<testPExecution> newValue(new testPExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
