/*
 * Association.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef UML_STRUCTUREDCLASSIFIERS_ASSOCIATION_H_
#define UML_STRUCTUREDCLASSIFIERS_ASSOCIATION_H_

#include <uml/classification/Classifier.h>
#include <uml/fwd.h>

namespace uml::structuredclassifiers
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
			AssociationPtr_w thisAssociationPtr;

		public:
			virtual ~Association() = default;
			void setThisAssociationPtr(AssociationPtr_w);

			void addOwnedEnd(const PropertyPtr&);
			void addNavigableOwnedEnd(const PropertyPtr&);
			void addMemberEnd(const PropertyPtr&);

		protected:
			void _addMemberEnd(const PropertyPtr&);
	};
// Association
}

#endif /* UML_STRUCTUREDCLASSIFIERS_ASSOCIATION_H_ */
