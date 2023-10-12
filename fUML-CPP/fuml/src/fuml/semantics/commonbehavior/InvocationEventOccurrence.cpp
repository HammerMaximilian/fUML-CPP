/*
 * InvocationEventOccurrence.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/commonbehavior/InvocationEventOccurrence.h>

bool InvocationEventOccurrence::match(const TriggerPtr&)
{
	// An invocation event occurrence does not match any triggers.

	return false;
} // match

ParameterValueListPtr InvocationEventOccurrence::getParameterValues(const EventPtr&)
{
	// An invocation event occurrence does not have any associated data.

	return ParameterValueListPtr(new ParameterValueList());
} // getParameterValues
