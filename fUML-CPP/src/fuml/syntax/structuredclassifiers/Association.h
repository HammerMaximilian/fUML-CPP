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
#include <fuml/syntax/classification/Classifier.h>
#include <fuml/syntax/classification/PropertyList.h>
#include <fuml/syntax/commonstructure/TypeList.h>

namespace fuml::syntax::classification
{
	class Property;
}
using Property = fuml::syntax::classification::Property;
using PropertyPtr = std::shared_ptr<Property>;

namespace fuml::syntax::structuredclassifiers
{
	class Association : public Classifier
	{
		public:
			bool isDerived = false;
			PropertyListPtr ownedEnd = std::make_shared<PropertyList>();
			TypeListPtr endType = std::make_shared<TypeList>();
			PropertyListPtr memberEnd = std::make_shared<PropertyList>();
			PropertyListPtr navigableOwnedEnd = std::make_shared<PropertyList>();

		private:
			std::weak_ptr<Association> thisAssociationPtr;

		public:
			virtual void setThisPtr(std::weak_ptr<Association>);

			void addOwnedEnd(const PropertyPtr&);
			void addNavigableOwnedEnd(
				const PropertyPtr&);
			void addMemberEnd(const PropertyPtr&);

		protected:
			void _addMemberEnd(const PropertyPtr&);
	}; // Association
}

using Association = fuml::syntax::structuredclassifiers::Association;
using AssociationPtr = std::shared_ptr<Association>;

#endif /* FUML_SYNTAX_STRUCTUREDCLASSIFIERS_ASSOCIATION_H_ */
