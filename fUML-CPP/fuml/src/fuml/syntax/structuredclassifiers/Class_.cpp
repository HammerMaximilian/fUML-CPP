/*
 * Class_.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/classification/Generalization.h>
#include <fuml/syntax/classification/Operation.h>
#include <fuml/syntax/classification/Property.h>
#include <fuml/syntax/simpleclassifiers/Reception.h>
#include <fuml/syntax/structuredclassifiers/Class_.h>

void Class_::setThisClass_Ptr(Class_Ptr_w thisClass_Ptr)
{
	this->thisClass_Ptr = thisClass_Ptr;
	BehavioredClassifier::setThisBehavioredClassifierPtr(thisClass_Ptr);
}

void Class_::setIsActive(bool isActive)
{
	this->isActive = isActive;
} // setIsActive

void Class_::addGeneralization(const GeneralizationPtr& generalization)
{
	Classifier::addGeneralization(generalization);

	std::shared_ptr<Class_> superClass = std::dynamic_pointer_cast<Class_>(generalization->general);

	if (superClass)
	{
		this->superClass->push_back(superClass);
	}
} // addGeneralization

void Class_::addOwnedAttribute(const PropertyPtr& ownedAttribute)
{
	Classifier::addAttribute(ownedAttribute);
	Namespace::addOwnedMember(ownedAttribute);

	this->ownedAttribute->push_back(ownedAttribute);
	ownedAttribute->_setClass(thisClass_Ptr.lock());
} // addOwnedAttribute

void Class_::addOwnedOperation(const OperationPtr& ownedOperation)
{
	Classifier::addFeature(ownedOperation);
	Namespace::addOwnedMember(ownedOperation);

	this->ownedOperation->push_back(ownedOperation);
	ownedOperation->_setClass(thisClass_Ptr.lock());
} // addOwnedOperation

void Class_::addOwnedReception(const ReceptionPtr& ownedReception)
{
	Namespace::addOwnedMember(ownedReception);
	Classifier::addFeature(ownedReception);

	this->ownedReception->push_back(ownedReception);
} // addOwnedReception

NamedElementListPtr Class_::inherit(const NamedElementListPtr& inhs)
{
	// "The inherit operation is overridden to exclude redefined properties."

	RedefinableElementListPtr redefinableMembers(new RedefinableElementList());

	for (const NamedElementPtr& member : *(this->ownedMember))
	{
		RedefinableElementPtr redefinableElement = std::dynamic_pointer_cast<RedefinableElement>(member);
		if (redefinableElement)
		{
			redefinableMembers->push_back(redefinableElement);
		}
	}

	NamedElementListPtr inherited(new NamedElementList);

	for (const NamedElementPtr& inh : *inhs)
	{
		bool exclude = false;
		for (const RedefinableElementPtr& redElem : *redefinableMembers)
		{
			RedefinableElementListPtr redefinedElements = redElem->redefinedElement;
			for (const RedefinableElementPtr& redElem_ : *redefinedElements)
			{
				if (redElem_ == inh)
				{
					exclude = true;
					break;
				}
			}
			if (exclude)
				break;
		}

		if (!exclude)
		{
			inherited->push_back(inh);
		}
	}

	return inherited;
} // inherit

void Class_::addNestedClassifier(const ClassifierPtr& nestedClassifier)
{
	this->addOwnedMember(nestedClassifier);
	this->nestedClassifier->push_back(nestedClassifier);
} // addNestedClassifier
