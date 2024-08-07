/*
 * StartClassifierBehaviorActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/StartClassifierBehaviorActionActivation.h>

#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/structuredclassifiers/Reference.h>
#include <uml/actions/InputPin.h>
#include <uml/actions/StartClassifierBehaviorAction.h>
#include <uml/structuredclassifiers/Class_.h>

void StartClassifierBehaviorActionActivation::doAction()
{
	// Get the value on the object input pin. If it is not a reference, then
	// do nothing.
	// Start the classifier behavior of the referent object for the
	// classifier given as the type of the object input pin.
	// If the object input pin has no type, then start the classifier
	// behaviors of all types of the referent object. [The required behavior
	// in this case is not clear from the spec.]

	StartClassifierBehaviorActionPtr action = AS(StartClassifierBehaviorAction, this->node);

	ValuePtr object = this->takeTokens(action->object)->at(0);

	ReferencePtr reference = AS(Reference, object);

	if (reference)
	{
		reference->startBehavior(AS(Class_, action->object->type),
			ParameterValueListPtr(new ParameterValueList()));
	}
} // doAction
