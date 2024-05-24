/*
 * ReadStructuralFeatureActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/ReadStructuralFeatureActionActivation.h>

#include <uml/actions/ReadStructuralFeatureAction.h>
#include <uml/classification/StructuralFeature.h>

void ReadStructuralFeatureActionActivation::doAction()
{
	// Get the value of the object input pin.
	// If the given feature is an association end, then get all values of
	// that end for which the opposite end has the object input value and
	// place them on the result pin.
	// Otherwise, if the object input value is a structured value, then get
	// the values of the appropriate feature of the input value and place
	// them on the result output pin.

	ReadStructuralFeatureActionPtr action = AS(ReadStructuralFeatureAction, this->node);
	const StructuralFeaturePtr& feature = action->structuralFeature;

	ValuePtr value = this->takeTokens(action->object)->at(0);
	this->putTokens(action->result, this->getValues(value, feature));
} // doAction
