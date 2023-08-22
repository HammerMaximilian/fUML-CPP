/*
 * ElementImport.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_ELEMENTIMPORT_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_ELEMENTIMPORT_H_

#include <fuml/syntax/commonstructure/Element.h>
#include <fuml/syntax/commonstructure/VisibilityKind.h>
#include <memory>
#include <string>

namespace fuml::syntax::commonstructure
{
	class Namespace;
	class PackageableElement;
}
using Namespace = fuml::syntax::commonstructure::Namespace;
using NamespacePtr = std::shared_ptr<Namespace>;
using PackageableElement = fuml::syntax::commonstructure::PackageableElement;
using PackageableElementPtr = std::shared_ptr<PackageableElement>;


namespace fuml::syntax::commonstructure
{
	class ElementImport : public fuml::syntax::commonstructure::Element
	{
		public:
			VisibilityKind visibility;
			std::string alias = "";
			PackageableElementPtr importedElement = nullptr;
			NamespacePtr importingNamespace = nullptr;

		public:
			void setAlias(std::string);
			void setVisibility(VisibilityKind);
			void setImportedElement(
				const PackageableElementPtr&);
			void _setImportingNamespace(
				const NamespacePtr&);
	}; // ElementImport
}

using ElementImport = fuml::syntax::commonstructure::ElementImport;
using ElementImportPtr = std::shared_ptr<ElementImport>;

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_ELEMENTIMPORT_H_ */
