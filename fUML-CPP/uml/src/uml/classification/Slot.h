/*
 * Slot.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef UML_CLASSIFICATION_SLOT_H_
#define UML_CLASSIFICATION_SLOT_H_

#include <uml/fwd.h>
#include <uml/commonstructure/Element.h>

namespace uml::classification
{
	class Slot : public Element
	{
		public:
			InstanceSpecificationPtr_w owningInstance;
			StructuralFeaturePtr definingFeature = nullptr;
			ValueSpecificationListPtr value = std::make_shared<ValueSpecificationList>();

		public:
			virtual ~Slot() = default;

			void setDefiningFeature(StructuralFeaturePtr);
			void addValue(ValueSpecificationPtr);
			void _setOwningInstance(InstanceSpecificationPtr);
	};
// Slot
}

#endif /* UML_CLASSIFICATION_SLOT_H_ */
