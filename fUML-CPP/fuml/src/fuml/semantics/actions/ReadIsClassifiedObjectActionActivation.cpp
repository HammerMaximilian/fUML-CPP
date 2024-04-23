/*
 * ReadIsClassifiedObjectActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/ReadIsClassifiedObjectActionActivation.h>

#include <fuml/semantics/simpleclassifiers/BooleanValue.h>
#include <uml/actions/ReadIsClassifiedObjectAction.h>

void ReadIsClassifiedObjectActionActivation::doAction()
{
	// Get the value on the object input pin and determine if it is
	// classified by the classifier specified in the action.
	// If the isDirect attribute of the action is false, then place true on
	// the result output pin if the input object has the specified
	// classifier or of one its (direct or indirect) descendants as a type.
	// If the isDirect attribute of the action is true, then place true on
	// the result output pin if the input object has the specified
	// classifier as a type.
	// Otherwise place false on the result output pin.

	ReadIsClassifiedObjectActionPtr action = AS(ReadIsClassifiedObjectAction, this->node);

	ValuePtr input = this->takeTokens(action->object)->at(0);

	bool result = false;
	if (action->isDirect)
	{
		result = input->hasType(action->classifier);
	}
	else
	{
		result = input->isInstanceOf(action->classifier);
	}

	ValueListPtr values(new ValueList());
	values->push_back(this->makeBooleanValue(result));

	this->putTokens(action->result, values);
} // doAction
