/*
 * Namespace.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_NAMESPACE_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_NAMESPACE_H_

#include <memory>
#include <vector>
#include "PackageableElement.h"

namespace fuml::syntax::commonstructure
{
	class ElementImport;
	typedef std::vector<std::shared_ptr<fuml::syntax::commonstructure::ElementImport>> ElementImportList;
	typedef std::vector<std::shared_ptr<fuml::syntax::commonstructure::NamedElement>> NamedElementList;
	class PackageImport;
	typedef std::vector<std::shared_ptr<fuml::syntax::commonstructure::PackageImport>> PackageImportList;
	class PackageableElement;
	typedef std::vector<std::shared_ptr<fuml::syntax::commonstructure::PackageableElement>> PackageableElementList;
}

namespace fuml::syntax::commonstructure
{
	class Namespace : virtual public fuml::syntax::commonstructure::PackageableElement
	{

		public:
			std::shared_ptr<fuml::syntax::commonstructure::NamedElementList> member = std::make_shared<fuml::syntax::commonstructure::NamedElementList>();
			std::shared_ptr<fuml::syntax::commonstructure::NamedElementList> ownedMember = std::make_shared<fuml::syntax::commonstructure::NamedElementList>();
			std::shared_ptr<fuml::syntax::commonstructure::ElementImportList> elementImport = std::make_shared<fuml::syntax::commonstructure::ElementImportList>();
			std::shared_ptr<fuml::syntax::commonstructure::PackageImportList> packageImport = std::make_shared<fuml::syntax::commonstructure::PackageImportList>();
			std::shared_ptr<fuml::syntax::commonstructure::PackageableElementList> importedMember = std::make_shared<fuml::syntax::commonstructure::PackageableElementList>();

		private:
			std::weak_ptr<fuml::syntax::commonstructure::Namespace> thisNamespacePtr;

		public:
			virtual ~Namespace() = 0;
			virtual void setThisPtr(std::weak_ptr<fuml::syntax::commonstructure::Namespace>);

			void addElementImport(
				const std::shared_ptr<fuml::syntax::commonstructure::ElementImport>&);
			void addPackageImport(
				const std::shared_ptr<fuml::syntax::commonstructure::PackageImport>&);

		protected:
			void addOwnedMember(
				const std::shared_ptr<fuml::syntax::commonstructure::NamedElement>&);
			void addMember(const std::shared_ptr<fuml::syntax::commonstructure::NamedElement>&);

		private:
			void addImportedMember(
				const std::shared_ptr<fuml::syntax::commonstructure::PackageableElement>&);
	}; // Namespace
}
#endif /* FUML_SYNTAX_COMMONSTRUCTURE_NAMESPACE_H_ */
