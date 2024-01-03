/*
 * ElementImport.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef UML_COMMONSTRUCTURE_ELEMENTIMPORT_H_
#define UML_COMMONSTRUCTURE_ELEMENTIMPORT_H_

#include <uml/commonstructure/Element.h>
#include <uml/commonstructure/VisibilityKind.h>
#include <string>

namespace uml::commonstructure
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

#endif /* UML_COMMONSTRUCTURE_ELEMENTIMPORT_H_ */
