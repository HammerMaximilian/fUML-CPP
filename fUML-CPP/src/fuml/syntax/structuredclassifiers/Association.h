/*
 * Association.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_STRUCTUREDCLASSIFIERS_ASSOCIATION_H_
#define FUML_SYNTAX_STRUCTUREDCLASSIFIERS_ASSOCIATION_H_

#include <memory>
#include <vector>
#include "fuml/syntax/classification/Classifier.h"

namespace fuml::syntax::classification
{
	class Property;
	typedef std::vector<std::shared_ptr<fuml::syntax::classification::Property>> PropertyList;
}
namespace fuml::syntax::commonstructure
{
	class Type;
	typedef std::vector<std::shared_ptr<fuml::syntax::commonstructure::Type>> TypeList;
}

namespace fuml::syntax::structuredclassifiers
{
	class Association : public fuml::syntax::classification::Classifier
	{
		public:
			bool isDerived = false;
			std::shared_ptr<fuml::syntax::classification::PropertyList> ownedEnd = std::make_shared<fuml::syntax::classification::PropertyList>();
			std::shared_ptr<fuml::syntax::commonstructure::TypeList> endType = std::make_shared<fuml::syntax::commonstructure::TypeList>();
			std::shared_ptr<fuml::syntax::classification::PropertyList> memberEnd = std::make_shared<fuml::syntax::classification::PropertyList>();
			std::shared_ptr<fuml::syntax::classification::PropertyList> navigableOwnedEnd = std::make_shared<fuml::syntax::classification::PropertyList>();

		private:
			std::weak_ptr<fuml::syntax::structuredclassifiers::Association> thisAssociationPtr;

		public:
			virtual void setThisPtr(std::weak_ptr<fuml::syntax::structuredclassifiers::Association>);

			void addOwnedEnd(const std::shared_ptr<fuml::syntax::classification::Property>&);
			void addNavigableOwnedEnd(
				const std::shared_ptr<fuml::syntax::classification::Property>&);
			void addMemberEnd(const std::shared_ptr<fuml::syntax::classification::Property>&);

		protected:
			void _addMemberEnd(const std::shared_ptr<fuml::syntax::classification::Property>&);
	}; // Association
}

#endif /* FUML_SYNTAX_STRUCTUREDCLASSIFIERS_ASSOCIATION_H_ */
