/*
 * doPrimeCheckExecution.cpp
 * 
 * Auto-generated file
 */

#include "doPrimeCheckExecution.h"

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
#include <fuml/semantics/simpleclassifiers/IntegerValue.h>
#include <fuml/semantics/simpleclassifiers/BooleanValue.h>
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

doPrimeCheckExecution::doPrimeCheckExecution()
{
	this->types->push_back(primecheckerModel::Instance()->primechecker_doPrimeCheck);
	/* Start of user code : Additional opaque behavior execution initializations
 	 * This section may be used to do any additional opaque behavior execution initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

doPrimeCheckExecution::~doPrimeCheckExecution()
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

void doPrimeCheckExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	int number = std::dynamic_pointer_cast<IntegerValue>(inputParameters->at(0)->values->at(0))->value;
int i = std::dynamic_pointer_cast<IntegerValue>(inputParameters->at(1)->values->at(0))->value;

fuml::Debug::println("[doBody] number = " + std::to_string(number));
fuml::Debug::println("[doBody] i = " + std::to_string(i));

bool resultBoolean = (number%i == 0);

outputParameters->at(0)->values = inputParameters->at(0)->values;
outputParameters->at(1)->values = inputParameters->at(1)->values;

BooleanValuePtr result(new BooleanValue());
result->value = resultBoolean;
result->type = this->locus->factory->getBuiltInType("Boolean");

fuml::Debug::println("[doBody] itNotPrime = " + std::to_string(resultBoolean));

outputParameters->at(2)->values->push_back(result);
}

ValuePtr doPrimeCheckExecution::new_()
{
	std::shared_ptr<doPrimeCheckExecution> newValue(new doPrimeCheckExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
