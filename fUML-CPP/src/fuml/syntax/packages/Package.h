/*
 * Package.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_PACKAGES_PACKAGE_H_
#define FUML_SYNTAX_PACKAGES_PACKAGE_H_

#include <memory>
#include <vector>
#include "fuml/syntax/commonstructure/Namespace.h"
#include "fuml/syntax/commonstructure/TypeList.h"
#include "fuml/syntax/commonstructure/PackageableElementList.h"
#include "fuml/syntax/packages/PackageList.h"

namespace fuml::syntax::packages
{
	class Package : public fuml::syntax::commonstructure::Namespace
	{
		public:
			std::shared_ptr<fuml::syntax::commonstructure::PackageableElementList> packagedElement = std::make_shared<fuml::syntax::commonstructure::PackageableElementList>();
			std::shared_ptr<fuml::syntax::commonstructure::TypeList> ownedType = std::make_shared<fuml::syntax::commonstructure::TypeList>();
			std::shared_ptr<fuml::syntax::packages::PackageList> nestedPackage = std::make_shared<fuml::syntax::packages::PackageList>();
			std::shared_ptr<fuml::syntax::packages::Package> nestingPackage = nullptr;
			std::string URI = "";

		private:
			std::weak_ptr<fuml::syntax::packages::Package> thisPackagePtr;

		public:
			virtual void setThisPtr(std::weak_ptr<fuml::syntax::packages::Package>);

			void addPackagedElement(
				const std::shared_ptr<fuml::syntax::commonstructure::PackageableElement>&);
			std::shared_ptr<fuml::syntax::commonstructure::PackageableElementList> visibleMembers();
			bool makesVisible(const std::shared_ptr<fuml::syntax::commonstructure::NamedElement>&);
			void setURI(std::string URI);
	}; //Package
}

using Package = fuml::syntax::packages::Package;
using PackagePtr = std::shared_ptr<Package>;

#endif /* FUML_SYNTAX_PACKAGES_PACKAGE_H_ */
