/*
 * AddVariableValueActionActivation.cpp
 *
 *  Created on: 02.12.2025
 *      Author: maxs
 */

#include <fuml/extensions/actions/AddVariableValueActionActivation.h>

#include <fuml/extensions/activities/VariableValue.h>
#include <fuml/semantics/loci/ChoiceStrategy.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/UnlimitedNaturalValue.h>
#include <uml/actions/AddVariableValueAction.h>
#include <uml/activities/Variable.h>

void AddVariableValueActionActivation::doAction()
{
	// Get the values of the value input pin.
	// Add a value to the values for the appropriate variable.
	// If isReplaceAll is true, first remove all current matching variable values.
	// If isReplaceAll is false and there is an insertAt pin, insert the
	// value at the appropriate position.

	AddVariableValueActionPtr action = AS(AddVariableValueAction, this->node);
	const VariablePtr& variable = action->variable;

	ValueListPtr inputValues = this->takeTokens(action->value);

	// NOTE: Multiplicity of the value input pin is required to be 1..1.
	const ValuePtr& inputValue = inputValues->at(0);

	int insertAt = 0;
	if (action->insertAt != nullptr)
	{
		insertAt = (AS(UnlimitedNaturalValue, this->takeTokens(action->insertAt)->at(0)))->value;
	}

	VariableValuePtr variableValue = this->getVariableValue(variable);

	if(variableValue != nullptr)
	{
		if(action->isReplaceAll)
		{
			variableValue->values = inputValues;
			variableValue->position = 0;
		}
		else
		{
			if (variableValue->values->size() > 0 && insertAt == 0)
			{
				// *** If there is no insertAt pin, then the structural
				// feature must be unordered, and the insertion position is
				// immaterial. ***
				insertAt = (AS(ChoiceStrategy,
						this->getExecutionLocus()->factory->getStrategy("choice")))->choose(
						variableValue->values->size());
			}

			if (variable->isUnique)
			{
				// Remove any existing value that duplicates the input value
				int j = position(inputValue, variableValue->values, 1);
				if (j > 0)
				{
					variableValue->values->erase(variableValue->values->begin() + (j - 1));
				}
			}

			if (insertAt <= 0)
			{ // Note: insertAt = -1 indicates an
			  // unlimited value of "*"
				variableValue->values->push_back(inputValue);
			}
			else
			{
				variableValue->values->insert(variableValue->values->begin() + (insertAt - 1), inputValue);
			}
		}
	}
}
