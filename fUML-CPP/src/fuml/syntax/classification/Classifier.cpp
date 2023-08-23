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
#include <vector>

using namespace fuml::syntax::classification;

Classifier::~Classifier()
{
}

void Classifier::setThisPtr(std::weak_ptr<fuml::syntax::classification::Classifier> thisClassifierPtr)
{
	this->thisClassifierPtr = thisClassifierPtr;
	fuml::syntax::commonstructure::Namespace::setThisPtr(thisClassifierPtr);
}

void Classifier::addGeneralization(
	const std::shared_ptr<fuml::syntax::classification::Generalization>& generalization)
{
	this->addOwnedElement(generalization);
	this->generalization->push_back(generalization);
	generalization->_setSpecific(thisClassifierPtr.lock());
	this->general->push_back(generalization->general);

	std::shared_ptr<fuml::syntax::commonstructure::NamedElementList> inheritedMembers =
		this->inherit(generalization->general->inheritableMembers(thisClassifierPtr.lock()));

	for (const std::shared_ptr<fuml::syntax::commonstructure::NamedElement>& inheritedMember : *inheritedMembers)
	{
		this->addMember(inheritedMember);
		this->inheritedMember->push_back(inheritedMember);
	}
} // addGeneralization

void Classifier::setIsAbstract(bool isAbstract)
{
	this->isAbstract = isAbstract;
} // setIsAbstract

std::shared_ptr<fuml::syntax::commonstructure::NamedElementList> Classifier::inherit(
	const std::shared_ptr<fuml::syntax::commonstructure::NamedElementList>& inhs)
{
	std::shared_ptr<fuml::syntax::commonstructure::NamedElementList> inheritedElements = std::make_shared<fuml::syntax::commonstructure::NamedElementList>();

	for (const std::shared_ptr<fuml::syntax::commonstructure::NamedElement>& inh : *inhs) {
		inheritedElements->push_back(inh);
	}

	return inheritedElements;

} // inherit

std::shared_ptr<fuml::syntax::commonstructure::NamedElementList> Classifier::inheritableMembers(
	const std::shared_ptr<fuml::syntax::classification::Classifier>& c)
{
	std::shared_ptr<fuml::syntax::commonstructure::NamedElementList> inheritable = std::make_shared<fuml::syntax::commonstructure::NamedElementList>();

	for (const std::shared_ptr<fuml::syntax::commonstructure::NamedElement>& m : *(this->member)) {
		if (c->hasVisibilityOf(m)) {
			inheritable->push_back(m);
		}
	}

	return inheritable;
} // inheritableMembers

bool Classifier::hasVisibilityOf(const std::shared_ptr<fuml::syntax::commonstructure::NamedElement>& n)
{
	for (const std::shared_ptr<fuml::syntax::commonstructure::NamedElement>& inheritedMember : *(this->inheritedMember)) {
		if (inheritedMember == n) {
			return n->visibility != fuml::syntax::commonstructure::VisibilityKind::private_;
		}
	}

	return true;
} // hasVisibilityOf

void Classifier::setIsFinalSpecialization(bool isFinalSpecialization)
{
	this->isFinalSpecialization = isFinalSpecialization;
} // setIsFinalSpecialization

void Classifier::addFeature(const std::shared_ptr<fuml::syntax::classification::Feature>& feature)
{
	// Note: This operation should not be used directly to add Properties.
	// The addAttribute operation should be used instead.

	this->feature->push_back(feature);
	feature->_addFeaturingClassifier(thisClassifierPtr.lock());
} // addFeature

void Classifier::addAttribute(const std::shared_ptr<fuml::syntax::classification::Property>& attribute)
{
	this->addFeature(attribute);
	this->attribute->push_back(attribute);
} // addAttribute
