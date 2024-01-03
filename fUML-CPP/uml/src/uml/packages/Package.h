/*
 * Package.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef UML_PACKAGES_PACKAGE_H_
#define UML_PACKAGES_PACKAGE_H_

#include <uml/commonstructure/Namespace.h>
#include <string>

namespace uml::packages
{
	class Package : public Namespace
	{
		public:
			PackageableElementListPtr packagedElement = std::make_shared<PackageableElementList>();
			TypeListPtr ownedType = std::make_shared<TypeList>();
			PackageListPtr nestedPackage = std::make_shared<PackageList>();
			PackagePtr_w nestingPackage;
			std::string URI = "";

		private:
			PackagePtr_w thisPackagePtr;

		public:
			virtual ~Package() = default;
			void setThisPackagePtr(PackagePtr_w);

			void addPackagedElement(const PackageableElementPtr&);
			PackageableElementListPtr visibleMembers();
			bool makesVisible(const NamedElementPtr&);
			void setURI(std::string URI);
	};
//Package
}

#endif /* UML_PACKAGES_PACKAGE_H_ */
