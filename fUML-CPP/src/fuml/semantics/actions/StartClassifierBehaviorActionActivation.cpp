/*
 * StartClassifierBehaviorActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/StartClassifierBehaviorActionActivation.h>

#include <fuml/syntax/actions/StartClassifierBehaviorAction.h>
#include <fuml/syntax/actions/InputPin.h>
#include <fuml/syntax/structuredclassifiers/Class_.h>
#include <fuml/semantics/structuredclassifiers/Reference.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>

void StartClassifierBehaviorActionActivation::doAction()
{
	// Get the value on the object input pin. If it is not a reference, then
	// do nothing.
	// Start the classifier behavior of the referent object for the
	// classifier given as the type of the object input pin.
	// If the object input pin has no type, then start the classifier
	// behaviors of all types of the referent object. [The required behavior
	// in this case is not clear from the spec.]

	StartClassifierBehaviorActionPtr action = std::dynamic_pointer_cast<StartClassifierBehaviorAction>(this->node);

	const ValuePtr& object = this->takeTokens(action->object)->at(0);

	ReferencePtr reference = std::dynamic_pointer_cast<Reference>(object);

	if (reference) {
		reference->startBehavior(
				std::dynamic_pointer_cast<Class_>(action->object->type),
				ParameterValueListPtr(new ParameterValueList()));
	}
} // doAction
