/*
 * Package.cpp
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */
#include "Package.h"

#include "fuml/syntax/commonstructure/ElementImport.h"
#include "fuml/syntax/commonstructure/NamedElement.h"
#include "fuml/syntax/commonstructure/NamedElementList.h"
#include "fuml/syntax/commonstructure/PackageableElement.h"
#include "fuml/syntax/commonstructure/PackageableElementList.h"
#include "fuml/syntax/commonstructure/PackageImport.h"
#include "fuml/syntax/commonstructure/Type.h"
#include "fuml/syntax/commonstructure/VisibilityKind.h"

using namespace fuml::syntax::packages;

void Package::addPackagedElement(
		const std::shared_ptr<fuml::syntax::commonstructure::PackageableElement>& packagedElement)
{
	Namespace::addOwnedMember(packagedElement);
	this->packagedElement->push_back(packagedElement);

	std::shared_ptr<fuml::syntax::commonstructure::Type> type =
			std::dynamic_pointer_cast<fuml::syntax::commonstructure::Type>(packagedElement);

	if (type)
	{
		this->ownedType->push_back(type);
		type->_setPackage(thisPackagePtr.lock());
	}

	std::shared_ptr<fuml::syntax::packages::Package> package =
			std::dynamic_pointer_cast<fuml::syntax::packages::Package>(packagedElement);

	if (package)
	{
		this->nestedPackage->push_back(package);
		package->nestingPackage = thisPackagePtr.lock();
	}

} // addPackagedElement

std::shared_ptr<fuml::syntax::commonstructure::PackageableElementList> Package::visibleMembers()
{
	std::shared_ptr<fuml::syntax::commonstructure::PackageableElementList> visibleMembers =
			std::make_shared<fuml::syntax::commonstructure::PackageableElementList>();

	for (const std::shared_ptr<fuml::syntax::commonstructure::PackageableElement>& member : *(this->packagedElement))
	{
		if (this->makesVisible(member))
		{
			visibleMembers->push_back(member);
		}
	}

	return visibleMembers;
} // visibleMembers

bool Package::makesVisible(const std::shared_ptr<fuml::syntax::commonstructure::NamedElement>& el)
{
	for (const std::shared_ptr<fuml::syntax::commonstructure::NamedElement>& member : *(this->ownedMember))
	{
		if (member == el)
		{
			return ((member->visibility == fuml::syntax::commonstructure::VisibilityKind::null_)
					|| (member->visibility == fuml::syntax::commonstructure::VisibilityKind::public_));
		}
	}

	for (const std::shared_ptr<fuml::syntax::commonstructure::ElementImport>& elementImport : *(this->elementImport))
	{
		if (elementImport->importedElement == el)
		{
			return true;
		}
	}

	for (const std::shared_ptr<fuml::syntax::commonstructure::PackageImport>& packageImport : *(this->packageImport))
	{
		if (packageImport->visibility == fuml::syntax::commonstructure::VisibilityKind::public_) {
			// NOTE: This won't work unless the imported package members
			// have already been loaded
			std::shared_ptr<fuml::syntax::commonstructure::NamedElementList> packageMembers = packageImport->importedPackage->member;
			for (const std::shared_ptr<fuml::syntax::commonstructure::NamedElement>& packageMember : *packageMembers)
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
