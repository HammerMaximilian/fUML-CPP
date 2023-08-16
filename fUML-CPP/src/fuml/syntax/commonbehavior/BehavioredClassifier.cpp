/*
 * BehavioredClassifier.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include "BehavioredClassifier.h"

#include "Behavior.h"

using namespace fuml::syntax::commonbehavior;

BehavioredClassifier::~BehavioredClassifier()
{
}

void BehavioredClassifier::setThisPtr(std::weak_ptr<fuml::syntax::commonbehavior::BehavioredClassifier> thisBehavioredClassifierPtr)
{
	this->thisBehavioredClassifierPtr = thisBehavioredClassifierPtr;
	fuml::syntax::classification::Classifier::setThisPtr(thisBehavioredClassifierPtr);
}

void BehavioredClassifier::addOwnedBehavior(
	const std::shared_ptr<fuml::syntax::commonbehavior::Behavior>& ownedBehavior)
{
	fuml::syntax::commonstructure::Namespace::addOwnedMember(ownedBehavior);

	this->ownedBehavior->push_back(ownedBehavior);

	std::shared_ptr<fuml::syntax::commonbehavior::Behavior> behavior =
			std::dynamic_pointer_cast<fuml::syntax::commonbehavior::Behavior>(thisBehavioredClassifierPtr.lock());

	if (!behavior || behavior->context == nullptr) {
		ownedBehavior->_setContext(thisBehavioredClassifierPtr.lock());
	} else {
		ownedBehavior->_setContext(behavior->context);
	}

} // addOwnedBehavior

void BehavioredClassifier::setClassifierBehavior(
	const std::shared_ptr<fuml::syntax::commonbehavior::Behavior>& classifierBehavior) {
	// Note: The classifier behavior must also be added as an owned behavior
	// using addOwnedBehavior.

	this->classifierBehavior = classifierBehavior;
} // setClassifierBehavior
