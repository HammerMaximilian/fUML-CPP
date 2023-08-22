/*
 * PackageImport.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_PACKAGEIMPORT_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_PACKAGEIMPORT_H_

#include <memory>
#include "Element.h"

namespace fuml::syntax::commonstructure
{
	class Namespace;
	enum class VisibilityKind;
}

namespace fuml::syntax::packages
{
	class Package;
}

namespace fuml::syntax::commonstructure
{

	class PackageImport : public fuml::syntax::commonstructure::Element
	{
		public:
			fuml::syntax::commonstructure::VisibilityKind visibility;
			std::shared_ptr<fuml::syntax::commonstructure::Namespace> importingNamespace = nullptr;
			std::shared_ptr<fuml::syntax::packages::Package> importedPackage = nullptr;

		public:
			void setVisibility(
				fuml::syntax::commonstructure::VisibilityKind);
			void setImportedPackage(
				const std::shared_ptr<fuml::syntax::packages::Package>&);
			void _setImportingNamespace(
				const std::shared_ptr<fuml::syntax::commonstructure::Namespace>&);
	}; // PackageImport
}

using PackageImport = fuml::syntax::commonstructure::PackageImport;
using PackageImportPtr = std::shared_ptr<PackageImport>;

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_PACKAGEIMPORT_H_ */
