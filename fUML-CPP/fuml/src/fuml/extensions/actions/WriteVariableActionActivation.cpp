/*
 * WriteVariableActionActivation.cpp
 *
 *  Created on: 02.12.2025
 *      Author: maxs
 */

#include <fuml/extensions/actions/WriteVariableActionActivation.h>

#include <fuml/semantics/values/Value.h>

WriteVariableActionActivation::~WriteVariableActionActivation()
{
}

int WriteVariableActionActivation::position(const ValuePtr& value, const ValueListPtr& list, int startAt)
{
	// Return the position (counting from 1) of the first occurance of the
	// given value in the given list at or after the starting index, or 0 if
	// it is not found.

	bool found = false;
	unsigned int i = startAt;
	unsigned int listSize = list->size();
	while (!found && i <= listSize)
	{
		found = list->at(i - 1)->equals(value);
		i++;
	}

	if (!found)
	{
		i = 1;
	}

	return i - 1;
}
