/*
 * ActivityExecutionExtension.cpp
 *
 *  Created on: 02.12.2025
 *      Author: maxs
 */

#include <fuml/extensions/activities/ActivityExecutionExtension.h>

#include <fuml/extensions/activities/VariableValue.h>
#include <uml/activities/Activity.h>

void ActivityExecutionExtension::execute()
{
	this->createVariableValues();
	CustomActivityExecution::execute();
}

void ActivityExecutionExtension::createVariableValues()
{
	ActivityPtr activity = AS(Activity, this->getTypes()->at(0));
	const VariableListPtr& variables = activity->variable;

	for(const VariablePtr& variable : *variables)
	{
		VariableValuePtr variableValue(new VariableValue());
		variableValue->variable = variable;
		this->variableValues->push_back(variableValue);
	}
}

VariableValueListPtr ActivityExecutionExtension::getVariableValues()
{
	// Retrieve the VariableValues for all Variables that are accessible
	// within the scope of this ActivityExecution.
	// That is, all VariableValues directly owned by this ActivityExecution.

	VariableValueListPtr allVariableValues(new VariableValueList());
	const VariableValueListPtr& directlyAccessibleVariableValues = this->variableValues;

	for(const VariableValuePtr& directlyAccessibleVariableValue : *directlyAccessibleVariableValues)
	{
		allVariableValues->push_back(directlyAccessibleVariableValue);
	}

	return allVariableValues;
}
