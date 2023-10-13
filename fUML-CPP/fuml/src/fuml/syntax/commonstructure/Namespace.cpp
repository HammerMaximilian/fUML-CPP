/*
 * Namespace.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include <fuml/syntax/commonstructure/ElementImport.h>
#include <fuml/syntax/commonstructure/Namespace.h>
#include <fuml/syntax/commonstructure/PackageImport.h>
#include <fuml/syntax/packages/Package.h>

Namespace::~Namespace()
{
}

void Namespace::setThisNamespacePtr(NamespacePtr_w thisNamespacePtr)
{
	this->thisNamespacePtr = thisNamespacePtr;
	Element::setThisElementPtr(thisNamespacePtr);
}

void Namespace::addOwnedMember(const NamedElementPtr& ownedMember)
{
	this->addOwnedElement(ownedMember);

	this->ownedMember->push_back(ownedMember);
	ownedMember->namespace_ = thisNamespacePtr.lock();

	this->addMember(ownedMember);
} // addOwnedMember

void Namespace::addMember(const NamedElementPtr& member)
{
	// Note: This operation should not be used for owned members. The
	// operation addOwnedMember should be used instead.

	// Debug.println("[addMember] member is a " +
	// member.getClass().getName() + "; name = " + member.name);

	this->member->push_back(member);

} // addMember

void Namespace::addElementImport(const ElementImportPtr& elementImport)
{
	this->addOwnedElement(elementImport);

	this->elementImport->push_back(elementImport);
	elementImport->importingNamespace = thisNamespacePtr.lock();

	this->addImportedMember(elementImport->importedElement);
} // addElementImport

void Namespace::addPackageImport(const PackageImportPtr& packageImport)
{
	this->addOwnedElement(packageImport);

	this->packageImport->push_back(packageImport);
	packageImport->importingNamespace = thisNamespacePtr.lock();

	PackageableElementListPtr importedElements = packageImport->importedPackage->visibleMembers();
	for (const PackageableElementPtr& importedElement : *importedElements)
	{
		this->addImportedMember(importedElement);
	}
} // addPackageImport

void Namespace::addImportedMember(const PackageableElementPtr& importedMember)
{
	this->addMember(importedMember);
	this->importedMember->push_back(importedMember);
} // addImportedMember
