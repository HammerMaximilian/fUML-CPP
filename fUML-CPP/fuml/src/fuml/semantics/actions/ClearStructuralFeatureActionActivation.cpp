/*
 * ClearStructuralFeatureActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/ClearStructuralFeatureActionActivation.h>

#include <fuml/semantics/structuredclassifiers/Link.h>
#include <fuml/semantics/structuredclassifiers/Reference.h>
#include <uml/actions/ClearStructuralFeatureAction.h>
#include <uml/classification/StructuralFeature.h>
#include <uml/structuredclassifiers/Association.h>

void ClearStructuralFeatureActionActivation::doAction()
{
	// Get the value of the object input pin.
	// If the given feature is an association end, then
	// destroy all links that have the object input on the opposite end.
	// Otherwise, if the object input is a structured value, then
	// set the appropriate feature of the input value to be empty.

	ClearStructuralFeatureActionPtr action = AS(ClearStructuralFeatureAction, this->node);
	StructuralFeaturePtr feature = action->structuralFeature;
	AssociationPtr association = this->getAssociation(feature);

	ValuePtr value = this->takeTokens(action->object)->at(0);

	if (association != nullptr)
	{
		LinkListPtr links = this->getMatchingLinks(association, feature, value);
		for (const LinkPtr& link : *links)
		{
			link->destroy();
		}
	}
	else
	{
		StructuredValuePtr structuredValue = AS(StructuredValue, value);
		if (structuredValue)
		{
			ReferencePtr reference = AS(Reference, value);
			// If the value is a data value, then it must be copied before
			// any change is made.
			if (!reference)
			{
				value = value->copy();
			}

			structuredValue->setFeatureValue(action->structuralFeature, ValueListPtr(new ValueList()), 0);
		}
	}

	if (action->result != nullptr)
	{
		this->putToken(action->result, value);
	}
} // doAction
