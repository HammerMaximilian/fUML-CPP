/*
 * ReadSelfActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/ReadSelfActionActivation.h>

#include <fuml/syntax/actions/ReadSelfAction.h>
#include <fuml/syntax/actions/OutputPin.h>
#include <fuml/semantics/structuredclassifiers/Reference.h>

void ReadSelfActionActivation::doAction()
{
	// Get the context object of the activity execution containing this
	// action activation and place a reference to it on the result output
	// pin.

	ReferencePtr context(new Reference());
	context->referent = this->getExecutionContext();

	OutputPinPtr resultPin = std::dynamic_pointer_cast<ReadSelfAction>(this->node)->result;
	this->putToken(resultPin, context);
} // doAction
