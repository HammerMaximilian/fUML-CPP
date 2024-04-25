/*
 * testDefaultValuesExecution.cpp
 * 
 * Auto-generated file
 */

#include "testDefaultValuesExecution.h"

#include "DefaultValue_StructuresModel.h"
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

using namespace DefaultValue_Structures;

/* Start of user code : User-defined members
 * This section may be used for user-defined members,
 * for exmaple implementations of user-defined member functions
 * or definition of static members.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

testDefaultValuesExecution::testDefaultValuesExecution()
{
	this->types->push_back(DefaultValue_StructuresModel::Instance()->DefaultValue_Structures_assert_A_testDefaultValues);
	/* Start of user code : Additional opaque behavior execution initializations
 	 * This section may be used to do any additional opaque behavior execution initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

testDefaultValuesExecution::~testDefaultValuesExecution()
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

void testDefaultValuesExecution::doBody(const ParameterValueListPtr& inputParameters,
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

	const ValueListPtr& values = inputParameters->at(0)->values;
	int index = 1;

	for(const ValuePtr& value : *values)
	{
		// Test parameter p[i]
		int p = AS(IntegerValue, value)->value;
		fuml::Debug::println("[doBody] argument p[" + std::to_string(index) + "] = " + std::to_string(p));
		if(p == index)
		{
			std::cout<<ASCII_GRN << "Assertion successful" << ASCII_BLK << " for a.b[" << index << "].p"<<std::endl;
		}
		else
		{
			std::cout<<ASCII_RED << "Assertion failed" << ASCII_BLK << " for a.b[" << index << "].p. Was: " << p << " ; Should: " << index <<std::endl;
		}

		index++;
	}
}

ValuePtr testDefaultValuesExecution::new_()
{
	std::shared_ptr<testDefaultValuesExecution> newValue(new testDefaultValuesExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
