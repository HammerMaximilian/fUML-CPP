/*
 * RemoveVariableValueActionActivation.cpp
 *
 *  Created on: 02.12.2025
 *      Author: maxs
 */

#include <fuml/extensions/actions/RemoveVariableValueActionActivation.h>

#include <fuml/extensions/activities/VariableValue.h>
#include <fuml/semantics/loci/ChoiceStrategy.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/UnlimitedNaturalValue.h>
#include <uml/actions/RemoveVariableValueAction.h>
#include <uml/activities/Variable.h>
#include <UMLPrimitiveTypes/intList.h>

void RemoveVariableValueActionActivation::doAction()
{
	// Get the values of the value input pin.
	// Remove values from the given variable.
	// If isRemoveDuplicates is true, then remove all values equal to the input value.
	// If isRemoveDuplicates is false and there is no removeAt input pin,
	// remove any one variable value equal to the input value (if there are any that are equal).
	// If isRemoveDuplicates is false, and there is a removeAt input pin
	// remove the variable value at that position.

	RemoveVariableValueActionPtr action = AS(RemoveVariableValueAction, this->node);
	const VariablePtr& variable = action->variable;

	ValuePtr inputValue = nullptr;
	if (action->value != nullptr)
	{
		// NOTE: Multiplicity of the value input pin is required to be 1..1.
		inputValue = this->takeTokens(action->value)->at(0);
	}

	int removeAt = 0;
	if (action->removeAt != nullptr)
	{
		removeAt = AS(UnlimitedNaturalValue, this->takeTokens(action->removeAt)->at(0))->value;
	}

	VariableValuePtr variableValue = this->getVariableValue(variable);

	if(variableValue != nullptr)
	{
		if (action->isRemoveDuplicates)
		{
			int j = this->position(inputValue, variableValue->values, 1);
			while (j > 0)
			{
				variableValue->values->erase(variableValue->values->begin() + (j - 1));
				j = this->position(inputValue, variableValue->values, j);
			}

		}
		else if (action->removeAt == nullptr)
		{
			UMLPrimitiveTypes::intList positions;
			int j = this->position(inputValue, variableValue->values, 1);
			while (j > 0)
			{
				positions.push_back(j);
				j = this->position(inputValue, variableValue->values, j + 1);
			}

			if (positions.size() > 0)
			{
				// *** Nondeterministically choose which value to remove.
				// ***
				int k = AS(ChoiceStrategy,
					this->getExecutionLocus()->factory->getStrategy("choice"))->choose(positions.size());
				variableValue->values->erase(variableValue->values->begin() + positions.at(k - 1) - 1);
			}

		}
		else
		{
			if (variableValue->values->size() >= (unsigned int) removeAt)
			{
				variableValue->values->erase(variableValue->values->begin() + (removeAt - 1));
			}
		}
	}
}
