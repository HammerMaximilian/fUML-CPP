/*
 * UnmarshallActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/UnmarshallActionActivation.h>

#include <fuml/semantics/simpleclassifiers/StructuredValue.h>
#include <fuml/syntax/actions/UnmarshallAction.h>

void UnmarshallActionActivation::doAction()
{
	// Get the value from the object input pin. If it is a structured value,
	// get the values for each of its attributes and place them on the
	// corresponding result pin. (Note that the number of result pins is
	// presumed to be the same as the number of attributes.)

	UnmarshallActionPtr action = std::dynamic_pointer_cast<UnmarshallAction>(this->node);
	ClassifierPtr unmarshallType = action->unmarshallType;
	OutputPinListPtr resultPins = action->result;

	ValuePtr value = this->takeTokens(action->object)->at(0);

	StructuredValuePtr structuredValue = std::dynamic_pointer_cast<StructuredValue>(value);

	if (structuredValue)
	{
		StructuralFeatureListPtr features = structuredValue->getMemberFeatures(unmarshallType);
		unsigned int featuresSize = features->size();
		for (unsigned int i = 0; i < featuresSize; i++)
		{
			const StructuralFeaturePtr& feature = features->at(i);
			const OutputPinPtr& resultPin = resultPins->at(i);
			this->putTokens(resultPin, this->getValues(value, feature));
		}
	}
} // doAction
