/*
 * ClearVariableActionActivation.cpp
 *
 *  Created on: 02.12.2025
 *      Author: maxs
 */

#include <fuml/extensions/actions/ClearVariableActionActivation.h>

#include <fuml/extensions/activities/VariableValue.h>
#include <uml/actions/ClearVariableAction.h>

void ClearVariableActionActivation::doAction()
{
	// Set the appropriate variable's value to be empty.

	ClearVariableActionPtr action = AS(ClearVariableAction, this->node);
	const VariablePtr& variable = action->variable;

	VariableValuePtr variableValue = this->getVariableValue(variable);

	if(variableValue != nullptr)
	{
		variableValue->values.reset(new ValueList());
		variableValue->position = 0;
	}
}
