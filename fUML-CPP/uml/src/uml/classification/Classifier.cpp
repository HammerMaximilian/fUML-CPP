/*
 * Classifier.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <uml/classification/Classifier.h>
#include <uml/classification/Generalization.h>
#include <uml/classification/Property.h>
#include <uml/commonstructure/VisibilityKind.h>

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

	// In this implementation, members of base classifiers are not inherited here
	// See method "Classifier::member()" below for further explanation
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

	for (const NamedElementPtr& m : *(this->_member))
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

// When using the generator to create an executable model within this implementation
// the order in which classifiers are initialized and base classifiers are added (and thus, base members are inherited)
// is arbitrary.
// This can lead to base classifier members not being inherited as they are not yet created
// Because of that, in this implementation, base members are not inherited when a generalization is added (i.e. in method "addGeneralization").
// Instead, property "Namespace::member" is encapsulated and can be accessed by method "Namespace::member()".
// This method is overridden here to inherit all base members recursively when "Classifier::member()" is first invoked.
// This first invocation happens during model execution, i.e. after all model classifiers have been completely created.
const NamedElementListPtr& Classifier::member()
{
	if(!memberConstructed)
	{
		for(const ClassifierPtr& c : *(this->general))
		{
			NamedElementListPtr allMembersOfBase = c->member(); // This is only done to recursively construct member
			NamedElementListPtr inheritedMembers = this->inherit(c->inheritableMembers(thisClassifierPtr.lock()));

			for (const NamedElementPtr& inheritedMember : *inheritedMembers)
			{
				this->addMember(inheritedMember);
				this->inheritedMember->push_back(inheritedMember);
			}
		}

		memberConstructed = true;
	}

	return this->_member;
} // allMembers
