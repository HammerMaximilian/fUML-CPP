/*
 * Package.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_PACKAGES_PACKAGE_H_
#define FUML_SYNTAX_PACKAGES_PACKAGE_H_

#include <fuml/syntax/commonstructure/Namespace.h>
#include <fuml/syntax/commonstructure/PackageableElementList.h>
#include <fuml/syntax/commonstructure/TypeList.h>
#include <fuml/syntax/packages/PackageList.h>
#include <memory>
#include <string>

namespace fuml::syntax::packages
{
	class Package : public Namespace
	{
		using PackagePtr = std::shared_ptr<Package>;

		public:
			PackageableElementListPtr packagedElement = std::make_shared<PackageableElementList>();
			TypeListPtr ownedType = std::make_shared<TypeList>();
			PackageListPtr nestedPackage = std::make_shared<PackageList>();
			PackagePtr nestingPackage = nullptr;
			std::string URI = "";

		private:
			std::weak_ptr<Package> thisPackagePtr;

		public:
			virtual void setThisPtr(std::weak_ptr<Package>);

			void addPackagedElement(const PackageableElementPtr&);
			PackageableElementListPtr visibleMembers();
			bool makesVisible(const NamedElementPtr&);
			void setURI(std::string URI);
	}; //Package
}

using Package = fuml::syntax::packages::Package;
using PackagePtr = std::shared_ptr<Package>;

#endif /* FUML_SYNTAX_PACKAGES_PACKAGE_H_ */
