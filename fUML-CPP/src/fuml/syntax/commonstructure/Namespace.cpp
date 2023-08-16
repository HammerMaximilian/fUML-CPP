/*
 * Namespace.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include "Namespace.h"

#include "ElementImport.h"
#include "PackageImport.h"
#include "fuml/syntax/packages/Package.h"

using namespace fuml::syntax::commonstructure;

Namespace::~Namespace()
{
}

void Namespace::addOwnedMember(
	const std::shared_ptr<fuml::syntax::commonstructure::NamedElement>& ownedMember)
{
	this->addOwnedElement(ownedMember);

	this->ownedMember->push_back(ownedMember);
	ownedMember->namespace_ = thisNamespacePtr.lock();

	this->addMember(ownedMember);
} // addOwnedMember

void Namespace::addMember(const std::shared_ptr<fuml::syntax::commonstructure::NamedElement>& member)
{
	// Note: This operation should not be used for owned members. The
	// operation addOwnedMember should be used instead.

	// Debug.println("[addMember] member is a " +
	// member.getClass().getName() + "; name = " + member.name);

	this->member->push_back(member);

} // addMember

void Namespace::addElementImport(
	const std::shared_ptr<fuml::syntax::commonstructure::ElementImport>& elementImport)
{
	this->addOwnedElement(elementImport);

	this->elementImport->push_back(elementImport);
	elementImport->importingNamespace = thisNamespacePtr.lock();

	this->addImportedMember(elementImport->importedElement);
} // addElementImport

void Namespace::addPackageImport(
	const std::shared_ptr<fuml::syntax::commonstructure::PackageImport>& packageImport)
{
	this->addOwnedElement(packageImport);

	this->packageImport->push_back(packageImport);
	packageImport->importingNamespace = thisNamespacePtr.lock();

	std::shared_ptr<fuml::syntax::commonstructure::PackageableElementList> importedElements =
			packageImport->importedPackage->visibleMembers();
	for(const std::shared_ptr<fuml::syntax::commonstructure::PackageableElement>& importedElement : *importedElements)
	{
		this->addImportedMember(importedElement);
	}
} // addPackageImport

void Namespace::addImportedMember(
	const std::shared_ptr<fuml::syntax::commonstructure::PackageableElement>& importedMember)
{
	this->addMember(importedMember);
	this->importedMember->push_back(importedMember);
} // addImportedMember
