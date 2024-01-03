/*
 * Behavior.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <uml/commonbehavior/Behavior.h>

Behavior::~Behavior()
{
}

void Behavior::addOwnedParameter(const ParameterPtr& ownedParameter)
{
	//super.addOwnedMember(ownedParameter);
	this->ownedParameter->push_back(ownedParameter);
} // addOwnedParameter

void Behavior::_setContext(const BehavioredClassifierPtr& context)
{
	// Note: This is a helper operation intended to be called by certain
	// operations outside the Behavior class in order to allow the setting
	// of the context to be overriden in subclasses.
	// It should _not_ be called otherwise in order to set the context
	// directly, rather than via these other operations.

	// Debug.println("[_setContext] behavior = " + this.name +
	// ", context = " + context.name);

	this->context = context;
} // _setContext

void Behavior::_setSpecification(const BehavioralFeaturePtr& specification)
{
	this->specification = specification;
} // _setSpecification
