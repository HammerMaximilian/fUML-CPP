/*
 * testDefaultValuesExecution.cpp
 * 
 * Auto-generated file
 */

#include "testDefaultValuesExecution.h"

#include "DefaultValue_BasicTypesModel.h"
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/RealValue.h>
#include <fuml/semantics/simpleclassifiers/BooleanValue.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/Debug.h>
#include <fuml/semantics/simpleclassifiers/StringValue.h>
#include <cassert>
#include <fuml/semantics/simpleclassifiers/UnlimitedNaturalValue.h>
#include <fuml/semantics/simpleclassifiers/EnumerationValue.h>
#include <uml/classification/Parameter.h>
#include <iostream>
#include <uml/simpleclassifiers/EnumerationLiteral.h>
#include <uml/commonbehavior/OpaqueBehavior.h>
#include <fuml/semantics/simpleclassifiers/IntegerValue.h>

/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace DefaultValue_BasicTypes;

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
	this->types->push_back(DefaultValue_BasicTypesModel::Instance()->DefaultValue_BasicTypes_assert_A_testDefaultValues);
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

	// Test parameter pInteger
	int pInteger = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value;
	fuml::Debug::println("[doBody] argument " + inputParameters->at(0)->parameter->name +  " = " + std::to_string(pInteger));
	if(pInteger == 4)
	{
		std::cout<<ASCII_GRN << "Assertion successful" << ASCII_BLK << " for a.pInteger"<<std::endl;
	}
	else
	{
		std::cout<<ASCII_RED << "Assertion failed" << ASCII_BLK << " for a.pInteger. Was: " << pInteger << " ; Should: 4"<<std::endl;
	}
	// Test parameter pString
	std::string pString = AS(StringValue, inputParameters->at(1)->values->at(0))->value;
	fuml::Debug::println("[doBody] argument " + inputParameters->at(1)->parameter->name +  " = " + pString);
	if(pString == "Hello")
	{
		std::cout<<ASCII_GRN << "Assertion successful" << ASCII_BLK << " for a.pString"<<std::endl;
	}
	else
	{
		std::cout<<ASCII_RED << "Assertion failed" << ASCII_BLK << " for a.pString. Was: " << pString << " ; Should: Hello"<<std::endl;
	}
	// Test parameter pBoolean
	bool pBoolean = AS(BooleanValue, inputParameters->at(2)->values->at(0))->value;
	fuml::Debug::println("[doBody] argument " + inputParameters->at(2)->parameter->name +  " = " + std::to_string(pBoolean));
	if(pBoolean)
	{
		std::cout<<ASCII_GRN << "Assertion successful" << ASCII_BLK << " for a.pBoolean"<<std::endl;
	}
	else
	{
		std::cout<<ASCII_RED << "Assertion failed" << ASCII_BLK << " for a.pBoolean. Was: " << std::to_string(pBoolean) << " ; Should: true"<<std::endl;
	}
	// Test parameter pUnlimitedNatural
	int pUnlimitedNatural = AS(UnlimitedNaturalValue, inputParameters->at(3)->values->at(0))->value;
	fuml::Debug::println("[doBody] argument " + inputParameters->at(3)->parameter->name +  " = " + std::to_string(pUnlimitedNatural));
	if(pUnlimitedNatural == -1)
	{
		std::cout<<ASCII_GRN << "Assertion successful" << ASCII_BLK << " for a.pUnlimitedNatural"<<std::endl;
	}
	else
	{
		std::cout<<ASCII_RED << "Assertion failed" << ASCII_BLK << " for a.pUnlimitedNatural. Was: " << std::to_string(pUnlimitedNatural) << " ; Should: -1"<<std::endl;
	}
	// Test parameter pReal
	float pReal = AS(RealValue, inputParameters->at(4)->values->at(0))->value;
	fuml::Debug::println("[doBody] argument " + inputParameters->at(4)->parameter->name +  " = " + std::to_string(pReal));
	if(pReal == 4.0)
	{
		std::cout<<ASCII_GRN << "Assertion successful" << ASCII_BLK << " for a.pReal"<<std::endl;
	}
	else
	{
		std::cout<<ASCII_RED << "Assertion failed" << ASCII_BLK << " for a.pReal. Was: " << std::to_string(pReal) << " ; Should: 4.0"<<std::endl;
	}
	// Test parameter pEnum
	const EnumerationLiteralPtr pEnum = AS(EnumerationValue, inputParameters->at(5)->values->at(0))->literal;
	fuml::Debug::println("[doBody] argument " + inputParameters->at(5)->parameter->name +  " = " + pEnum->qualifiedName);
	if(pEnum == DefaultValue_BasicTypesModel::Instance()->DefaultValue_BasicTypes_E_e2)
	{
		std::cout<<ASCII_GRN << "Assertion successful" << ASCII_BLK << " for a.pEnum"<<std::endl;
	}
	else
	{
		std::cout<<ASCII_RED << "Assertion failed" << ASCII_BLK << " for a.pEnum. Was: " << pEnum->qualifiedName << " ; Should: DefaultValue_BasicTypes::E::e2"<<std::endl;
	}
}

ValuePtr testDefaultValuesExecution::new_()
{
	std::shared_ptr<testDefaultValuesExecution> newValue(new testDefaultValuesExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
