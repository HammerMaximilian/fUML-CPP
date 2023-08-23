/*
 * InstanceSpecification.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_INSTANCESPECIFICATION_H_
#define FUML_SYNTAX_CLASSIFICATION_INSTANCESPECIFICATION_H_

#include <fuml/syntax/classification/ClassifierList.h>
#include <fuml/syntax/classification/SlotList.h>
#include <fuml/syntax/commonstructure/NamedElement.h>
#include <memory>

namespace fuml::syntax::classification
{
	class Classifier;
	class Slot;
}
using Classifier = fuml::syntax::classification::Classifier;
using ClassifierPtr = std::shared_ptr<Classifier>;
using Slot = fuml::syntax::classification::Slot;
using SlotPtr = std::shared_ptr<Slot>;

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

using InstanceSpecification = fuml::syntax::classification::InstanceSpecification;
using InstanceSpecificationPtr = std::shared_ptr<InstanceSpecification>;

#endif /* FUML_SYNTAX_CLASSIFICATION_INSTANCESPECIFICATION_H_ */
