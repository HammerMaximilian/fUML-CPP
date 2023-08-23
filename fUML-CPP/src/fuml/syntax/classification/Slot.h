/*
 * Slot.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_SLOT_H_
#define FUML_SYNTAX_CLASSIFICATION_SLOT_H_

#include <memory>
#include <fuml/syntax/commonstructure/Element.h>
#include <fuml/syntax/values/ValueSpecificationList.h>

namespace fuml::syntax::classification
{
	class InstanceSpecification;
	class StructuralFeature;
}
using InstanceSpecification = fuml::syntax::classification::InstanceSpecification;
using InstanceSpecificationPtr = std::shared_ptr<InstanceSpecification>;
using StructuralFeature = fuml::syntax::classification::StructuralFeature;
using StructuralFeaturePtr = std::shared_ptr<StructuralFeature>;

namespace fuml::syntax::values
{
	class ValueSpecification;
}
using ValueSpecification = fuml::syntax::values::ValueSpecification;
using ValueSpecificationPtr = std::shared_ptr<ValueSpecification>;

namespace fuml::syntax::classification
{
	class Slot : public Element
	{
		public:
			InstanceSpecificationPtr owningInstance = nullptr;
			StructuralFeaturePtr definingFeature = nullptr;
			ValueSpecificationListPtr value = std::make_shared<fuml::syntax::values::ValueSpecificationList>();

		public:
			void setDefiningFeature(
					StructuralFeaturePtr);
			void addValue(ValueSpecificationPtr);
			void _setOwningInstance(
					InstanceSpecificationPtr);
	}; // Slot
}

using Slot = fuml::syntax::classification::Slot;
using SlotPtr = std::shared_ptr<Slot>;

#endif /* FUML_SYNTAX_CLASSIFICATION_SLOT_H_ */
