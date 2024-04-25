/*
 * testNonEmptyListExecution.cpp
 * 
 * Auto-generated file
 */

#include "testNonEmptyListExecution.h"

#include "HierarchyModel.h"
#include <fuml/Debug.h>
#include <uml/classification/Parameter.h>
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

testNonEmptyListExecution::testNonEmptyListExecution()
{
	this->types->push_back(HierarchyModel::Instance()->Hierarchy_assert_A_testNonEmptyList);
	/* Start of user code : Additional opaque behavior execution initializations
 	 * This section may be used to do any additional opaque behavior execution initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

testNonEmptyListExecution::~testNonEmptyListExecution()
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

void testNonEmptyListExecution::doBody(const ParameterValueListPtr& inputParameters,
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

	// Test parameter listSize
	int listSize = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value;
	fuml::Debug::println("[doBody] argument " + inputParameters->at(0)->parameter->name +  " = " + std::to_string(listSize));
	if(listSize > 0)
	{
		std::cout<<ASCII_GRN << "Assertion successful" << ASCII_BLK << " for " << inputParameters->at(0)->parameter->name <<std::endl;
	}
	else
	{
		std::cout<<ASCII_RED << "Assertion failed" << ASCII_BLK << " for "<< inputParameters->at(0)->parameter->name << ". Was: " << listSize << " ; Should: 1"<<std::endl;
	}
}

ValuePtr testNonEmptyListExecution::new_()
{
	std::shared_ptr<testNonEmptyListExecution> newValue(new testNonEmptyListExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
