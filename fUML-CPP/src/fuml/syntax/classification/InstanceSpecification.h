/*
 * InstanceSpecification.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_INSTANCESPECIFICATION_H_
#define FUML_SYNTAX_CLASSIFICATION_INSTANCESPECIFICATION_H_

#include <fuml/syntax/fwd.h>
#include <fuml/syntax/commonstructure/NamedElement.h>

namespace fuml::syntax::classification
{
	class InstanceSpecification : public NamedElement
	{
		public:
			ClassifierListPtr classifier = std::make_shared<ClassifierList>();
			SlotListPtr slot = std::make_shared<SlotList>();

		private:
			std::weak_ptr<InstanceSpecification> thisInstanceSpecificationPtr;

		public:
			virtual void setThisPtr(std::weak_ptr<InstanceSpecification>);

			void addClassifier(const ClassifierPtr&);
			void addSlot(const SlotPtr&);
	}; // InstanceSpecification
}

#endif /* FUML_SYNTAX_CLASSIFICATION_INSTANCESPECIFICATION_H_ */
