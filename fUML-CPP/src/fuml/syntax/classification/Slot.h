/*
 * Slot.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_SLOT_H_
#define FUML_SYNTAX_CLASSIFICATION_SLOT_H_

#include <fuml/syntax/fwd.h>
#include <fuml/syntax/commonstructure/Element.h>

namespace fuml::syntax::classification
{
	class Slot : public Element
	{
		public:
			InstanceSpecificationPtr owningInstance = nullptr;
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

#endif /* FUML_SYNTAX_CLASSIFICATION_SLOT_H_ */
