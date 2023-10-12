/*
 * Package.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_PACKAGES_PACKAGE_H_
#define FUML_SYNTAX_PACKAGES_PACKAGE_H_

#include <fuml/syntax/commonstructure/Namespace.h>
#include <string>

namespace fuml::syntax::packages
{
	class Package : public Namespace
	{
		public:
			PackageableElementListPtr packagedElement = std::make_shared<PackageableElementList>();
			TypeListPtr ownedType = std::make_shared<TypeList>();
			PackageListPtr nestedPackage = std::make_shared<PackageList>();
			PackagePtr nestingPackage = nullptr;
			std::string URI = "";

		private:
			std::weak_ptr<Package> thisPackagePtr;

		public:
			virtual ~Package() = default;
			void setThisPackagePtr(std::weak_ptr<Package>);

			void addPackagedElement(const PackageableElementPtr&);
			PackageableElementListPtr visibleMembers();
			bool makesVisible(const NamedElementPtr&);
			void setURI(std::string URI);
	};
//Package
}

#endif /* FUML_SYNTAX_PACKAGES_PACKAGE_H_ */
