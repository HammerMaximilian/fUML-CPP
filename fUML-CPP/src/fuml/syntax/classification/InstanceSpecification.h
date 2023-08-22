/*
 * InstanceSpecification.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_INSTANCESPECIFICATION_H_
#define FUML_SYNTAX_CLASSIFICATION_INSTANCESPECIFICATION_H_

#include <memory>
#include "fuml/syntax/commonstructure/NamedElement.h"
#include "ClassifierList.h"
#include "SlotList.h"

namespace fuml::syntax::classification
{
	class InstanceSpecification : public fuml::syntax::commonstructure::NamedElement
	{
		public:
			std::shared_ptr<fuml::syntax::classification::ClassifierList> classifier = std::make_shared<fuml::syntax::classification::ClassifierList>();
			std::shared_ptr<fuml::syntax::classification::SlotList> slot = std::make_shared<fuml::syntax::classification::SlotList>();

		private:
			std::weak_ptr<fuml::syntax::classification::InstanceSpecification> thisInstanceSpecificationPtr;

		public:
			virtual void setThisPtr(std::weak_ptr<fuml::syntax::classification::InstanceSpecification>);

			void addClassifier(const std::shared_ptr<fuml::syntax::classification::Classifier>&);
			void addSlot(const std::shared_ptr<fuml::syntax::classification::Slot>&);
	}; // InstanceSpecification
}

using InstanceSpecification = fuml::syntax::classification::InstanceSpecification;
using InstanceSpecificationPtr = std::shared_ptr<InstanceSpecification>;

#endif /* FUML_SYNTAX_CLASSIFICATION_INSTANCESPECIFICATION_H_ */
