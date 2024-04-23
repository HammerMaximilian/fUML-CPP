/*
 * Package.cpp
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */

#include <uml/commonstructure/ElementImport.h>
#include <uml/commonstructure/NamedElement.h>
#include <uml/commonstructure/PackageableElement.h>
#include <uml/commonstructure/PackageImport.h>
#include <uml/commonstructure/Type.h>
#include <uml/commonstructure/VisibilityKind.h>
#include <uml/packages/Package.h>

void Package::setThisPackagePtr(PackagePtr_w thisPackagePtr)
{
	this->thisPackagePtr = thisPackagePtr;
	Namespace::setThisNamespacePtr(thisPackagePtr);
}

void Package::addPackagedElement(const PackageableElementPtr& packagedElement)
{
	Namespace::addOwnedMember(packagedElement);
	this->packagedElement->push_back(packagedElement);

	TypePtr type = AS(Type, packagedElement);

	if (type)
	{
		this->ownedType->push_back(type);
		type->_setPackage(thisPackagePtr.lock());
	}

	PackagePtr package = AS(Package, packagedElement);

	if (package)
	{
		this->nestedPackage->push_back(package);
		package->nestingPackage = thisPackagePtr.lock();
	}

} // addPackagedElement

PackageableElementListPtr Package::visibleMembers()
{
	PackageableElementListPtr visibleMembers = std::make_shared<PackageableElementList>();

	for (const PackageableElementPtr& member : *(this->packagedElement))
	{
		if (this->makesVisible(member))
		{
			visibleMembers->push_back(member);
		}
	}

	return visibleMembers;
} // visibleMembers

bool Package::makesVisible(const NamedElementPtr& el)
{
	for (const NamedElementPtr& member : *(this->ownedMember))
	{
		if (member == el)
		{
			return ((member->visibility == VisibilityKind::null_) || (member->visibility == VisibilityKind::public_));
		}
	}

	for (const ElementImportPtr& elementImport : *(this->elementImport))
	{
		if (elementImport->importedElement == el)
		{
			return true;
		}
	}

	for (const PackageImportPtr& packageImport : *(this->packageImport))
	{
		if (packageImport->visibility == VisibilityKind::public_)
		{
			// NOTE: This won't work unless the imported package members
			// have already been loaded
			NamedElementListPtr packageMembers = packageImport->importedPackage->_member;
			for (const NamedElementPtr& packageMember : *packageMembers)
			{
				if (packageMember == el)
				{
					return true;
				}
			}
		}
	}

	return false;
} // makesVisible

void Package::setURI(std::string URI)
{
	this->URI = URI;
} // setURI
