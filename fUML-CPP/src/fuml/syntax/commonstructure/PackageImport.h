/*
 * PackageImport.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_PACKAGEIMPORT_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_PACKAGEIMPORT_H_

#include <fuml/syntax/commonstructure/Element.h>
#include <fuml/syntax/commonstructure/VisibilityKind.h>
#include <memory>

namespace fuml::syntax::commonstructure
{
	class Namespace;
}
using Namespace = fuml::syntax::commonstructure::Namespace;
using NamespacePtr = std::shared_ptr<Namespace>;

namespace fuml::syntax::packages
{
	class Package;
}
using Package = fuml::syntax::packages::Package;
using PackagePtr = std::shared_ptr<Package>;

namespace fuml::syntax::commonstructure
{

	class PackageImport : public Element
	{
		public:
			VisibilityKind visibility;
			NamespacePtr importingNamespace = nullptr;
			PackagePtr importedPackage = nullptr;

		public:
			void setVisibility(
				VisibilityKind);
			void setImportedPackage(
				const PackagePtr&);
			void _setImportingNamespace(
				const NamespacePtr&);
	}; // PackageImport
}

using PackageImport = fuml::syntax::commonstructure::PackageImport;
using PackageImportPtr = std::shared_ptr<PackageImport>;

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_PACKAGEIMPORT_H_ */
