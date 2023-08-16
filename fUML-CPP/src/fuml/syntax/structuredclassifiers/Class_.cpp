/*
 * Class_.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include "Class_.h"

#include "fuml/syntax/classification/Generalization.h"
#include "fuml/syntax/classification/Operation.h"
#include "fuml/syntax/classification/Property.h"
#include "fuml/syntax/simpleclassifiers/Reception.h"

using namespace fuml::syntax::structuredclassifiers;

void Class_::setThisPtr(std::weak_ptr<fuml::syntax::structuredclassifiers::Class_> thisClass_Ptr)
{
	this->thisClass_Ptr = thisClass_Ptr;
	fuml::syntax::commonbehavior::BehavioredClassifier::setThisPtr(thisClass_Ptr);
}

void Class_::setIsActive(bool isActive) {
	this->isActive = isActive;
} // setIsActive

void Class_::addGeneralization(
		const std::shared_ptr<fuml::syntax::classification::Generalization>& generalization) {
	fuml::syntax::classification::Classifier::addGeneralization(generalization);

	std::shared_ptr<fuml::syntax::structuredclassifiers::Class_> superClass =
		std::dynamic_pointer_cast<fuml::syntax::structuredclassifiers::Class_>(generalization->general);

	if (superClass) {
		this->superClass->push_back(superClass);
	}
} // addGeneralization

void Class_::addOwnedAttribute(
		const std::shared_ptr<fuml::syntax::classification::Property>& ownedAttribute) {
	fuml::syntax::classification::Classifier::addAttribute(ownedAttribute);
	fuml::syntax::commonstructure::Namespace::addOwnedMember(ownedAttribute);

	this->ownedAttribute->push_back(ownedAttribute);
	ownedAttribute->_setClass(thisClass_Ptr.lock());
} // addOwnedAttribute

void Class_::addOwnedOperation(
		const std::shared_ptr<fuml::syntax::classification::Operation>& ownedOperation) {
	fuml::syntax::classification::Classifier::addFeature(ownedOperation);
	fuml::syntax::commonstructure::Namespace::addOwnedMember(ownedOperation);

	this->ownedOperation->push_back(ownedOperation);
	ownedOperation->_setClass(thisClass_Ptr.lock());
} // addOwnedOperation

void Class_::addOwnedReception(
		const std::shared_ptr<fuml::syntax::simpleclassifiers::Reception>& ownedReception) {
	fuml::syntax::commonstructure::Namespace::addOwnedMember(ownedReception);
	fuml::syntax::classification::Classifier::addFeature(ownedReception);

	this->ownedReception->push_back(ownedReception);
} // addOwnedReception

std::shared_ptr<fuml::syntax::commonstructure::NamedElementList> Class_::inherit(
		const std::shared_ptr<fuml::syntax::commonstructure::NamedElementList>& inhs) {
	// "The inherit operation is overridden to exclude redefined properties."

	std::shared_ptr<fuml::syntax::classification::RedefinableElementList> redefinableMembers(new fuml::syntax::classification::RedefinableElementList());

	for (const std::shared_ptr<fuml::syntax::commonstructure::NamedElement>& member : *(this->ownedMember))
	{
		std::shared_ptr<fuml::syntax::classification::RedefinableElement> redefinableElement =
			std::dynamic_pointer_cast<fuml::syntax::classification::RedefinableElement>(member);
		if (redefinableElement)
		{
			redefinableMembers->push_back(redefinableElement);
		}
	}

	std::shared_ptr<fuml::syntax::commonstructure::NamedElementList> inherited(new fuml::syntax::commonstructure::NamedElementList);

	for (const std::shared_ptr<fuml::syntax::commonstructure::NamedElement>& inh : *inhs)
	{
		bool exclude = false;
		for (const std::shared_ptr<fuml::syntax::classification::RedefinableElement>& redElem : *redefinableMembers) {
			std::shared_ptr<fuml::syntax::classification::RedefinableElementList> redefinedElements = redElem->redefinedElement;
			for (const std::shared_ptr<fuml::syntax::classification::RedefinableElement>& redElem_ : *redefinedElements) {
				if (redElem_ == inh) {
					exclude = true;
					break;
				}
			}
			if (exclude)
				break;
		}

		if (!exclude) {
			inherited->push_back(inh);
		}
	}

	return inherited;
} // inherit

void Class_::addNestedClassifier(
		const std::shared_ptr<fuml::syntax::classification::Classifier>& nestedClassifier) {
	this->addOwnedMember(nestedClassifier);
	this->nestedClassifier->push_back(nestedClassifier);
} // addNestedClassifier
