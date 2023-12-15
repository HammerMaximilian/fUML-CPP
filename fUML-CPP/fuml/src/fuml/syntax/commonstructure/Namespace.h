/*
 * Namespace.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_NAMESPACE_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_NAMESPACE_H_

#include <fuml/syntax/commonstructure/PackageableElement.h>

namespace fuml::syntax::commonstructure
{
	class Namespace : virtual public PackageableElement
	{
		// Property "member" is encapsulated here an can be accessed via method "member()"
		// See Classifier.h
		protected:
			NamedElementListPtr _member = std::make_shared<NamedElementList>();

		public:
			NamedElementListPtr ownedMember = std::make_shared<NamedElementList>();
			ElementImportListPtr elementImport = std::make_shared<ElementImportList>();
			PackageImportListPtr packageImport = std::make_shared<PackageImportList>();
			PackageableElementListPtr importedMember = std::make_shared<PackageableElementList>();

		private:
			NamespacePtr_w thisNamespacePtr;

		public:
			virtual ~Namespace() = 0;
			void setThisNamespacePtr(NamespacePtr_w);

			void addElementImport(const ElementImportPtr&);
			void addPackageImport(const PackageImportPtr&);

			virtual const NamedElementListPtr& member();

		protected:
			void addOwnedMember(const NamedElementPtr&);
			void addMember(const NamedElementPtr&);

		private:
			void addImportedMember(const PackageableElementPtr&);
	};
// Namespace
}

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_NAMESPACE_H_ */
