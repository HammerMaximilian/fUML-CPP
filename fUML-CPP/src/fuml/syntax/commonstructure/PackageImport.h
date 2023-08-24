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

namespace fuml::syntax::commonstructure
{

	class PackageImport : public Element
	{
		public:
			VisibilityKind visibility;
			NamespacePtr importingNamespace = nullptr;
			PackagePtr importedPackage = nullptr;

		public:
			virtual ~PackageImport() = default;
		
			void setVisibility(
				VisibilityKind);
			void setImportedPackage(
				const PackagePtr&);
			void _setImportingNamespace(
				const NamespacePtr&);
	}; // PackageImport
}

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_PACKAGEIMPORT_H_ */
