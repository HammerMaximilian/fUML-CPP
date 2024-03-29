/*
 * BehavioralFeature.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <uml/classification/BehavioralFeature.h>
#include <uml/classification/Parameter.h>
#include <uml/commonbehavior/Behavior.h>

BehavioralFeature::~BehavioralFeature()
{
}

void BehavioralFeature::setThisBehavioralFeaturePtr(BehavioralFeaturePtr_w thisBehavioralFeaturePtr)
{
	this->thisBehavioralFeaturePtr = thisBehavioralFeaturePtr;
	Namespace::setThisNamespacePtr(thisBehavioralFeaturePtr);
}

void BehavioralFeature::setIsAbstract(bool isAbstract)
{
	this->isAbstract = isAbstract;
} // setIsAbstract

void BehavioralFeature::addOwnedParameter(const ParameterPtr& ownedParameter)
{
	Namespace::addOwnedMember(ownedParameter);
	this->ownedParameter->push_back(ownedParameter);
} // addOwnedParameter

void BehavioralFeature::addMethod(const BehaviorPtr& method)
{
	method->_setSpecification(thisBehavioralFeaturePtr.lock());
	this->method->push_back(method);
} // addMethod

void BehavioralFeature::addRaisedException(const TypePtr& raisedException)
{
	this->raisedException->push_back(raisedException);
} // addRaisedException
