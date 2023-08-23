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

namespace fuml::syntax::classification
{
	class Slot : public fuml::syntax::commonstructure::Element
	{
		public:
			std::shared_ptr<fuml::syntax::classification::InstanceSpecification> owningInstance = nullptr;
			std::shared_ptr<fuml::syntax::classification::StructuralFeature> definingFeature = nullptr;
			std::shared_ptr<fuml::syntax::values::ValueSpecificationList> value = std::make_shared<fuml::syntax::values::ValueSpecificationList>();

		public:
			void setDefiningFeature(
					std::shared_ptr<fuml::syntax::classification::StructuralFeature>);
			void addValue(std::shared_ptr<fuml::syntax::values::ValueSpecification>);
			void _setOwningInstance(
					std::shared_ptr<fuml::syntax::classification::InstanceSpecification>);
	}; // Slot
}

using Slot = fuml::syntax::classification::Slot;
using SlotPtr = std::shared_ptr<Slot>;

#endif /* FUML_SYNTAX_CLASSIFICATION_SLOT_H_ */
