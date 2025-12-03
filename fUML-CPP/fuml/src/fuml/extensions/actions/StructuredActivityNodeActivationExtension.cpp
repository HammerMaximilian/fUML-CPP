/*
 * StructuredActivityNodeActivationExtension.cpp
 *
 *  Created on: 02.12.2025
 *      Author: maxs
 */

#include <fuml/extensions/actions/StructuredActivityNodeActivationExtension.h>

#include <fuml/extensions/activities/ActivityExecutionExtension.h>
#include <fuml/extensions/activities/VariableValue.h>
#include <fuml/semantics/activities/ActivityNodeActivationGroup.h>
#include <uml/actions/StructuredActivityNode.h>

void StructuredActivityNodeActivationExtension::initialize(const ActivityNodePtr& node, const ActivityNodeActivationGroupPtr& group)
{
	ActionActivation::initialize(node, group);
	this->createVariableValues();
}

void StructuredActivityNodeActivationExtension::createVariableValues()
{
	StructuredActivityNodePtr node = AS(StructuredActivityNode, this->node);
	const VariableListPtr& variables = node->variable;

	for(const VariablePtr& variable : *variables)
	{
		VariableValuePtr variableValue(new VariableValue());
		variableValue->variable = variable;
		this->variableValues->push_back(variableValue);
	}
}

VariableValueListPtr StructuredActivityNodeActivationExtension::getVariableValues()
{
	// Retrieve the VariableValues for all Variables that are accessible
	// within the scope of this StructuredActivityNodeActivation.
	// That is, all VariableValues directly owned by this StructuredActivityNodeActivation,
	// as well as all VariableValues owned by direct or indirect containing StructuredActivityNodeActivations,
	// as well as all VariableValues owned by the containing ActivityExecution.

	VariableValueListPtr allVariableValues(new VariableValueList());
	const VariableValueListPtr& directlyAccessibleVariableValues = this->variableValues;
	VariableValueListPtr indirectlyAccessibleVariableValues (new VariableValueList());

	for(const VariableValuePtr& directlyAccessibleVariableValue : *directlyAccessibleVariableValues)
	{
		allVariableValues->push_back(directlyAccessibleVariableValue);
	}

	ActivityNodeActivationGroupPtr group = this->group.lock();

	if(StructuredActivityNodeActivationExtensionPtr containingNodeActivation = AS(StructuredActivityNodeActivationExtension, group->containingNodeActivation.lock()))
	{
		// If this StructuredActivityNodeActivation is nested inside another StructuredActivityNodeActivation,
		// (recursively) collect all accessible VariableValues of the containing StructuredActivityNodeActivation.
		indirectlyAccessibleVariableValues = containingNodeActivation->getVariableValues();
	}
	else
	{
		// This StructuredActivityNodeActivation is directly nested inside an ActivityExecution.
		// Collect all accessible VariableValues of that ActivityExecution
		ActivityExecutionExtensionPtr activityExecution = AS(ActivityExecutionExtension, group->activityExecution.lock());
		indirectlyAccessibleVariableValues = activityExecution->getVariableValues();
	}

	for(const VariableValuePtr& indirectlyAccessibleVariableValue : *indirectlyAccessibleVariableValues)
	{
		allVariableValues->push_back(indirectlyAccessibleVariableValue);
	}

	return allVariableValues;
}
