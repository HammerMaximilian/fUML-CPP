/*
 * fbPrintIsPrimeExecution.cpp
 * 
 * Auto-generated file
 */

#include "fbPrintIsPrimeExecution.h"

#include "CalcModelModel.h"
#include <fuml/Debug.h>

/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace CalcModel;

/* Start of user code : User-defined members
 * This section may be used for user-defined members,
 * for exmaple implementations of user-defined member functions
 * or definition of static members.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

fbPrintIsPrimeExecution::fbPrintIsPrimeExecution()
{
	//this->types->push_back(CalcModelModel::Instance()->CalcModel_PrimeChecker_fbPrintIsPrime);
	/* Start of user code : Additional opaque behavior execution initializations
 	 * This section may be used to do any additional opaque behavior execution initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

fbPrintIsPrimeExecution::~fbPrintIsPrimeExecution()
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

void fbPrintIsPrimeExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	fuml::Debug::println("[doBody] fbPrintIsPrime");
}

ValuePtr fbPrintIsPrimeExecution::new_()
{
	std::shared_ptr<fbPrintIsPrimeExecution> newValue(new fbPrintIsPrimeExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}