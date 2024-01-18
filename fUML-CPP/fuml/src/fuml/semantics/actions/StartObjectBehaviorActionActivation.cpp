/*
 * StartObjectBehaviorActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/StartObjectBehaviorActionActivation.h>

#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/structuredclassifiers/Reference.h>
#include <uml/actions/InputPin.h>
#include <uml/actions/StartObjectBehaviorAction.h>
#include <uml/classification/Parameter.h>
#include <uml/commonbehavior/Behavior.h>

void StartObjectBehaviorActionActivation::doAction()
{
	// Get the value on the object input pin. If it is not a reference, then
	// do nothing.
	// Start the behavior of the referent object for the classifier given as
	// the type of the object input pin, with parameter values taken from
	// the argument input pins.
	// If the object input pin has no type, then start the classifier
	// behaviors of all types of the referent object.

	StartObjectBehaviorActionPtr action = std::dynamic_pointer_cast<StartObjectBehaviorAction>(this->node);

	ValuePtr object = this->takeTokens(action->object)->at(0);

	ReferencePtr reference = std::dynamic_pointer_cast<Reference>(object);

	if (reference)
	{
		Class_Ptr type = std::dynamic_pointer_cast<Class_>(action->object->type);
		const InputPinListPtr& argumentPins = action->argument;

		ParameterValueListPtr inputs(new ParameterValueList());

		if (type != nullptr)
		{
			BehaviorPtr behavior = std::dynamic_pointer_cast<Behavior>(type);

			if (behavior)
			{
				//
			}
			else
			{
				behavior = type->classifierBehavior;
			}

			if (behavior != nullptr)
			{
				const ParameterListPtr& parameters = behavior->ownedParameter;

				int pinNumber = 1;
				for (const ParameterPtr& parameter : *parameters)
				{
					int j = pinNumber;
					if (parameter->direction == ParameterDirectionKind::in
						|| parameter->direction == ParameterDirectionKind::inout)
					{
						ParameterValuePtr parameterValue(new ParameterValue());
						parameterValue->parameter = parameter;
						parameterValue->values = this->takeTokens(argumentPins->at(j - 1));
						inputs->push_back(parameterValue);
						j = j + 1;
					}
					pinNumber = j;
				}
			}
		}

		reference->startBehavior(type, inputs);
	}
} // doAction
