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

		public:
			NamedElementListPtr member = std::make_shared<NamedElementList>();
			NamedElementListPtr ownedMember = std::make_shared<NamedElementList>();
			ElementImportListPtr elementImport = std::make_shared<ElementImportList>();
			PackageImportListPtr packageImport = std::make_shared<PackageImportList>();
			PackageableElementListPtr importedMember = std::make_shared<PackageableElementList>();

		private:
			std::weak_ptr<Namespace> thisNamespacePtr;

		public:
			virtual ~Namespace() = 0;
			void setThisNamespacePtr(std::weak_ptr<Namespace>);

			void addElementImport(const ElementImportPtr&);
			void addPackageImport(const PackageImportPtr&);

		protected:
			void addOwnedMember(const NamedElementPtr&);
			void addMember(const NamedElementPtr&);

		private:
			void addImportedMember(const PackageableElementPtr&);
	};
// Namespace
}

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_NAMESPACE_H_ */
