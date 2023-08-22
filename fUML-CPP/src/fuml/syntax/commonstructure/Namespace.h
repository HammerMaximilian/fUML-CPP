/*
 * Namespace.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_NAMESPACE_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_NAMESPACE_H_

#include <fuml/syntax/commonstructure/ElementImportList.h>
#include <fuml/syntax/commonstructure/NamedElement.h>
#include <fuml/syntax/commonstructure/NamedElementList.h>
#include <fuml/syntax/commonstructure/PackageableElement.h>
#include <fuml/syntax/commonstructure/PackageableElementList.h>
#include <fuml/syntax/commonstructure/PackageImportList.h>
#include <memory>

namespace fuml::syntax::commonstructure
{
	class ElementImport;
	class PackageImport;
}
using ElementImport = fuml::syntax::commonstructure::ElementImport;
using ElementImportPtr = std::shared_ptr<ElementImport>;
using PackageImport = fuml::syntax::commonstructure::PackageImport;
using PackageImportPtr = std::shared_ptr<PackageImport>;

namespace fuml::syntax::commonstructure
{
	class Namespace : virtual public fuml::syntax::commonstructure::PackageableElement
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
			virtual void setThisPtr(std::weak_ptr<Namespace>);

			void addElementImport(
				const ElementImportPtr&);
			void addPackageImport(
				const PackageImportPtr&);

		protected:
			void addOwnedMember(
				const NamedElementPtr&);
			void addMember(const NamedElementPtr&);

		private:
			void addImportedMember(
				const PackageableElementPtr&);
	}; // Namespace
}

using Namespace = fuml::syntax::commonstructure::Namespace;
using NamespacePtr = std::shared_ptr<Namespace>;

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_NAMESPACE_H_ */
