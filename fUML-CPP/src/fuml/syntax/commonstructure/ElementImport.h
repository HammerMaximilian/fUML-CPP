/*
 * ElementImport.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_ELEMENTIMPORT_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_ELEMENTIMPORT_H_

#include <memory>
#include "Element.h"
#include "VisibilityKind.h"

namespace fuml::syntax::commonstructure
{
	class Namespace;
	class PackageableElement;
}

namespace fuml::syntax::commonstructure
{
	class ElementImport : public fuml::syntax::commonstructure::Element
	{

		public:
			fuml::syntax::commonstructure::VisibilityKind visibility;
			std::string alias = "";
			std::shared_ptr<fuml::syntax::commonstructure::PackageableElement> importedElement = nullptr;
			std::shared_ptr<fuml::syntax::commonstructure::Namespace> importingNamespace = nullptr;

		public:
			void setAlias(std::string);
			void setVisibility(
				fuml::syntax::commonstructure::VisibilityKind);
			void setImportedElement(
				const std::shared_ptr<fuml::syntax::commonstructure::PackageableElement>&);
			void _setImportingNamespace(
				const std::shared_ptr<fuml::syntax::commonstructure::Namespace>&);
	}; // ElementImport
}

using ElementImport = fuml::syntax::commonstructure::ElementImport;
using ElementImportPtr = std::shared_ptr<ElementImport>;

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_ELEMENTIMPORT_H_ */
