/*
 * BehavioredClassifier.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <uml/commonbehavior/Behavior.h>
#include <uml/commonbehavior/BehavioredClassifier.h>
#include <uml/simpleclassifiers/InterfaceRealization.h>

BehavioredClassifier::~BehavioredClassifier()
{
}

void BehavioredClassifier::setThisBehavioredClassifierPtr(
		BehavioredClassifierPtr_w thisBehavioredClassifierPtr)
{
	this->thisBehavioredClassifierPtr = thisBehavioredClassifierPtr;
	Classifier::setThisClassifierPtr(thisBehavioredClassifierPtr);
}

void BehavioredClassifier::addOwnedBehavior(const BehaviorPtr& ownedBehavior)
{
	Namespace::addOwnedMember(ownedBehavior);

	this->ownedBehavior->push_back(ownedBehavior);

	BehaviorPtr behavior = AS(Behavior, thisBehavioredClassifierPtr.lock());

	if (!behavior)
	{
		ownedBehavior->_setContext(thisBehavioredClassifierPtr.lock());
	}
	else
	{
		BehavioredClassifierPtr behaviorContext = behavior->context.lock();
		if(!behaviorContext)
		{
			ownedBehavior->_setContext(thisBehavioredClassifierPtr.lock());
		}
		else
		{
			ownedBehavior->_setContext(behaviorContext);
		}
	}

} // addOwnedBehavior

void BehavioredClassifier::setClassifierBehavior(const BehaviorPtr& classifierBehavior)
{
	// Note: The classifier behavior must also be added as an owned behavior
	// using addOwnedBehavior.

	this->classifierBehavior = classifierBehavior;
} // setClassifierBehavior

void BehavioredClassifier::addInterfaceRealization(const InterfaceRealizationPtr& interfaceRealization)
{
	this->interfaceRealization->push_back(interfaceRealization);
	interfaceRealization->_setImplementingClassifier(thisBehavioredClassifierPtr.lock());

	NamedElement::addClientDependency(interfaceRealization);
	Element::addOwnedElement(interfaceRealization);
}
