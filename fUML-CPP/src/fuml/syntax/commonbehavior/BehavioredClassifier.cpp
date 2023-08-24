/*
 * BehavioredClassifier.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/commonbehavior/Behavior.h>
#include <fuml/syntax/commonbehavior/BehavioredClassifier.h>

BehavioredClassifier::~BehavioredClassifier()
{
}

void BehavioredClassifier::setThisBehavioredClassifierPtr(std::weak_ptr<BehavioredClassifier> thisBehavioredClassifierPtr)
{
	this->thisBehavioredClassifierPtr = thisBehavioredClassifierPtr;
	Classifier::setThisClassifierPtr(thisBehavioredClassifierPtr);
}

void BehavioredClassifier::addOwnedBehavior(
	const BehaviorPtr& ownedBehavior)
{
	Namespace::addOwnedMember(ownedBehavior);

	this->ownedBehavior->push_back(ownedBehavior);

	BehaviorPtr behavior =
			std::dynamic_pointer_cast<Behavior>(thisBehavioredClassifierPtr.lock());

	if (!behavior || behavior->context == nullptr) {
		ownedBehavior->_setContext(thisBehavioredClassifierPtr.lock());
	} else {
		ownedBehavior->_setContext(behavior->context);
	}

} // addOwnedBehavior

void BehavioredClassifier::setClassifierBehavior(
	const BehaviorPtr& classifierBehavior) {
	// Note: The classifier behavior must also be added as an owned behavior
	// using addOwnedBehavior.

	this->classifierBehavior = classifierBehavior;
} // setClassifierBehavior
