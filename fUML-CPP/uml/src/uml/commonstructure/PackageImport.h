/*
 * PackageImport.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef UML_COMMONSTRUCTURE_PACKAGEIMPORT_H_
#define UML_COMMONSTRUCTURE_PACKAGEIMPORT_H_

#include <uml/commonstructure/Element.h>
#include <uml/commonstructure/VisibilityKind.h>

namespace uml::commonstructure
{

	class PackageImport : public Element
	{
		public:
			VisibilityKind visibility;
			NamespacePtr importingNamespace = nullptr;
			PackagePtr importedPackage = nullptr;

		public:
			virtual ~PackageImport() = default;

			void setVisibility(VisibilityKind);
			void setImportedPackage(const PackagePtr&);
			void _setImportingNamespace(const NamespacePtr&);
	};
// PackageImport
}

#endif /* UML_COMMONSTRUCTURE_PACKAGEIMPORT_H_ */
