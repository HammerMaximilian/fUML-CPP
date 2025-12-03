/*
 * VariableActionActivation.cpp
 *
 *  Created on: 02.12.2025
 *      Author: maxs
 */

#include <fuml/extensions/actions/VariableActionActivation.h>

#include <fuml/extensions/actions/StructuredActivityNodeActivationExtension.h>
#include <fuml/extensions/activities/ActivityExecutionExtension.h>
#include <fuml/extensions/activities/VariableValue.h>
#include <fuml/semantics/activities/ActivityNodeActivationGroup.h>

VariableActionActivation::~VariableActionActivation()
{
}

VariableValueListPtr VariableActionActivation::getAccessibleVariableValues()
{
	// Get either the ActivityExecution or the StructuredActivityNodeActivation
	// owning the ActivityNodeActivationGroup which contains this Activation.
	// Get all VariableValues accessible within the context of this Activation's action's owner.

	VariableValueListPtr accessibleVariableValues = nullptr;

	ActivityNodeActivationGroupPtr group = this->group.lock();

	if(StructuredActivityNodeActivationExtensionPtr containingNodeActivation = AS(StructuredActivityNodeActivationExtension, group->containingNodeActivation.lock()))
	{
		// If this StructuredActivityNodeActivation is nested inside another StructuredActivityNodeActivation,
		// (recursively) collect all accessible VariableValues of the containing StructuredActivityNodeActivation.
		accessibleVariableValues = containingNodeActivation->getVariableValues();
	}
	else
	{
		// This StructuredActivityNodeActivation is directly nested inside an ActivityExecution.
		// Collect all accessible VariableValues of that ActivityExecution
		ActivityExecutionExtensionPtr activityExecution = AS(ActivityExecutionExtension, group->activityExecution.lock());
		accessibleVariableValues = activityExecution->getVariableValues();
	}

	return accessibleVariableValues;
}

VariableValuePtr VariableActionActivation::getVariableValue(const VariablePtr& variable)
{
	// Find the appropriate VariableValue matching the give Variable
	// from all VariableValues accessible within the context of this Activation's action's owner.

	VariableValueListPtr accessibleVariableValues = this->getAccessibleVariableValues();

	VariableValuePtr variableValue = nullptr;
	unsigned int i = 0, accessibleVariableValuesSize = accessibleVariableValues->size();
	while(variableValue == nullptr && i < accessibleVariableValuesSize)
	{
		const VariableValuePtr& v = accessibleVariableValues->at(i);
		if(v->variable == variable)
		{
			variableValue = v;
		}

		i++;
	}

	return variableValue;
}
