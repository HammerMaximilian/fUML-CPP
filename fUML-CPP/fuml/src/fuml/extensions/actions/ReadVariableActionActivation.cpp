/*
 * ReadVariableActionActivation.cpp
 *
 *  Created on: 02.12.2025
 *      Author: maxs
 */

#include <fuml/extensions/actions/ReadVariableActionActivation.h>

#include <fuml/extensions/activities/VariableValue.h>
#include <uml/actions/ReadVariableAction.h>

void ReadVariableActionActivation::doAction()
{
	// Get the values of the appropriate variable and place them on the result output pin.

	ReadVariableActionPtr action = AS(ReadVariableAction, this->node);
	const VariablePtr& variable = action->variable;
	VariableValuePtr variableValue = this->getVariableValue(variable);
	ValueListPtr values(new ValueList());

	if(variableValue != nullptr)
	{
		values = variableValue->values;
	}

	this->putTokens(action->result, values);
}
