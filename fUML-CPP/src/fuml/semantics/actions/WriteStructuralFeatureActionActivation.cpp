/*
 * WriteStructuralFeatureActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/WriteStructuralFeatureActionActivation.h>

#include <fuml/semantics/values/Value.h>

WriteStructuralFeatureActionActivation::~WriteStructuralFeatureActionActivation()
{
}

int WriteStructuralFeatureActionActivation::position(
		const ValuePtr& value, const ValueListPtr& list, int startAt)
{
	// Return the position (counting from 1) of the first occurance of the
	// given value in the given list at or after the starting index, or 0 if
	// it is not found.

	bool found = false;
	int i = startAt;
	for (const ValuePtr& listValue : *list) {
		found = listValue->equals(value);

		if(found) break;
	}

	if (!found) {
		i = 1;
	}

	return i - 1;
}
