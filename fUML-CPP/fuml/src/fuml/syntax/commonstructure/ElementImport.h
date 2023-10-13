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
#include <string>

namespace fuml::syntax::commonstructure
{
	class ElementImport : public Element
	{
		public:
			VisibilityKind visibility;
			std::string alias = "";
			PackageableElementPtr importedElement = nullptr;
			NamespacePtr_w importingNamespace;

		public:
			virtual ~ElementImport() = default;

			void setAlias(std::string);
			void setVisibility(VisibilityKind);
			void setImportedElement(const PackageableElementPtr&);
			void _setImportingNamespace(const NamespacePtr&);
	};
// ElementImport
}

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_ELEMENTIMPORT_H_ */
