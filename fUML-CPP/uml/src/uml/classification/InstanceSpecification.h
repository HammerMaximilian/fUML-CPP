/*
 * InstanceSpecification.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef UML_CLASSIFICATION_INSTANCESPECIFICATION_H_
#define UML_CLASSIFICATION_INSTANCESPECIFICATION_H_

#include <uml/commonstructure/NamedElement.h>
#include <uml/fwd.h>

namespace uml::classification
{
	class InstanceSpecification : public NamedElement
	{
		public:
			ClassifierListPtr classifier = std::make_shared<ClassifierList>();
			SlotListPtr slot = std::make_shared<SlotList>();

		private:
			InstanceSpecificationPtr_w thisInstanceSpecificationPtr;

		public:
			virtual ~InstanceSpecification() = default;
			void setThisInstanceSpecificationPtr(InstanceSpecificationPtr_w);

			void addClassifier(const ClassifierPtr&);
			void addSlot(const SlotPtr&);
	};
// InstanceSpecification
}

#endif /* UML_CLASSIFICATION_INSTANCESPECIFICATION_H_ */
