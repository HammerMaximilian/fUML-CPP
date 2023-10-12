/*
 * ImplementationObject.cpp
 *
 *  Created on: 13.09.2023
 *      Author: maha6913
 */

#include <utils/library/libraryclass/ImplementationObject.h>

#include <fuml/semantics/loci/Locus.h>
#include <fuml/syntax/classification/Operation.h>
#include <utils/library/libraryclass/OperationExecution.h>

using namespace fuml::library::libraryclass;

ImplementationObject::~ImplementationObject()
{
}

void ImplementationObject::setThisImplementationObjectPtr(
	std::weak_ptr<ImplementationObject> thisImplementationObjectPtr)
{
	this->thisImplementationObjectPtr = thisImplementationObjectPtr;
	Object_::setThisObject_Ptr(thisImplementationObjectPtr);
}

ExecutionPtr ImplementationObject::dispatch(const OperationPtr& operation)
{
	std::shared_ptr<OperationExecution> execution(new OperationExecution());
	execution->setThisOperationExecutionPtr(execution);
	this->locus->add(execution);
	execution->set(thisImplementationObjectPtr.lock(), operation);
	return execution;
}
