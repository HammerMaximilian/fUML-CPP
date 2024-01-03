/*
 * ReturnInformation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/ReturnInformation.h>

#include <fuml/semantics/commonbehavior/CallEventOccurrence.h>
#include <uml/classification/Operation.h>

OperationPtr ReturnInformation::getOperation()
{
	// Return the operation associated with the call event occurrence of this
	// return information.

	return this->callEventOccurrence->getOperation();
} // getOperation

void ReturnInformation::reply(const ParameterValueListPtr& outputParameterValues)
{
	// Reply to the call by setting the output parameters and
	// releasing the caller.

	this->callEventOccurrence->setOutputParameterValues(outputParameterValues);
	this->callEventOccurrence->returnFromCall();
} // reply

ValueSpecificationPtr ReturnInformation::specify()
{
	// Return information cannot be specified using a value specification.

	return nullptr;
} // specify

ClassifierListPtr ReturnInformation::getTypes()
{
	// Return information is untyped.

	return ClassifierListPtr(new ClassifierList());
} // getTypes

bool ReturnInformation::equals(const ValuePtr& otherValue)
{
	// One return information value equals another if they are for the
	// same call event occurrence.

	bool isEqual = false;

	ReturnInformationPtr otherReturnInformation = std::dynamic_pointer_cast<ReturnInformation>(otherValue);

	if (otherReturnInformation)
	{
		isEqual = (otherReturnInformation->callEventOccurrence == this->callEventOccurrence);
	}

	return isEqual;
} // equals

ValuePtr ReturnInformation::copy()
{
	// Create a new return information value that is a copy of this value, with
	// the same call event occurrence.

	ReturnInformationPtr copy = std::dynamic_pointer_cast<ReturnInformation>(Value::copy());
	copy->callEventOccurrence = this->callEventOccurrence;
	return copy;
} // copy

std::string ReturnInformation::toString()
{
	// Return a string representation of the return information.

	std::string s = "ReturnInformation";
	std::string name = callEventOccurrence->getOperation()->name;
	if (name != "")
	{
		s = s + "(" + name + ")";
	}
	return s;
} // toString

ValuePtr ReturnInformation::new_()
{
	// Create a new return information value, with an empty call event occurrence.

	return ReturnInformationPtr(new ReturnInformation());
} // new_
