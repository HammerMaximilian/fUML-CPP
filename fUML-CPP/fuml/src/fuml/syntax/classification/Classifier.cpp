/*
 * Classifier.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/classification/Classifier.h>
#include <fuml/syntax/classification/Generalization.h>
#include <fuml/syntax/classification/Property.h>
#include <fuml/syntax/commonstructure/VisibilityKind.h>

Classifier::~Classifier()
{
}

void Classifier::setThisClassifierPtr(ClassifierPtr_w thisClassifierPtr)
{
	this->thisClassifierPtr = thisClassifierPtr;
	Namespace::setThisNamespacePtr(thisClassifierPtr);
}

void Classifier::addGeneralization(const GeneralizationPtr& generalization)
{
	this->addOwnedElement(generalization);
	this->generalization->push_back(generalization);
	generalization->_setSpecific(thisClassifierPtr.lock());
	this->general->push_back(generalization->general);

	// In this implementation, members of base classes are not inherited
	// Instead, if all members, owned members as well as members of direct or indirect base classes should be accessed
	// Use method allMembers()
	/*NamedElementListPtr inheritedMembers = this->inherit(
		generalization->general->inheritableMembers(thisClassifierPtr.lock()));

	for (const NamedElementPtr& inheritedMember : *inheritedMembers)
	{
		this->addMember(inheritedMember);
		this->inheritedMember->push_back(inheritedMember);
	}*/
} // addGeneralization

void Classifier::setIsAbstract(bool isAbstract)
{
	this->isAbstract = isAbstract;
} // setIsAbstract

NamedElementListPtr Classifier::inherit(const NamedElementListPtr& inhs)
{
	NamedElementListPtr inheritedElements = std::make_shared<NamedElementList>();

	for (const NamedElementPtr& inh : *inhs)
	{
		inheritedElements->push_back(inh);
	}

	return inheritedElements;

} // inherit

NamedElementListPtr Classifier::inheritableMembers(const ClassifierPtr& c)
{
	NamedElementListPtr inheritable = std::make_shared<NamedElementList>();

	for (const NamedElementPtr& m : *(this->member))
	{
		if (c->hasVisibilityOf(m))
		{
			inheritable->push_back(m);
		}
	}

	return inheritable;
} // inheritableMembers

bool Classifier::hasVisibilityOf(const NamedElementPtr& n)
{
	for (const NamedElementPtr& inheritedMember : *(this->inheritedMember))
	{
		if (inheritedMember == n)
		{
			return n->visibility != VisibilityKind::private_;
		}
	}

	return true;
} // hasVisibilityOf

void Classifier::setIsFinalSpecialization(bool isFinalSpecialization)
{
	this->isFinalSpecialization = isFinalSpecialization;
} // setIsFinalSpecialization

void Classifier::addFeature(const FeaturePtr& feature)
{
	// Note: This operation should not be used directly to add Properties.
	// The addAttribute operation should be used instead.

	this->feature->push_back(feature);
	feature->_addFeaturingClassifier(thisClassifierPtr.lock());
} // addFeature

void Classifier::addAttribute(const PropertyPtr& attribute)
{
	this->addFeature(attribute);
	this->attribute->push_back(attribute);
} // addAttribute

NamedElementListPtr Classifier::allMembers()
{
	if(!allMembersConstructed)
	{
		for(const ClassifierPtr& c : *(this->general))
		{
			NamedElementListPtr inheritedMembers = this->inherit(c->inheritableMembers(thisClassifierPtr.lock()));

			for (const NamedElementPtr& inheritedMember : *inheritedMembers)
			{
				this->addMember(inheritedMember);
				this->inheritedMember->push_back(inheritedMember);
			}
		}
	}

	return this->member;
} // allMembers
