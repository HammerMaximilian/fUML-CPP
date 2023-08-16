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

namespace fuml::syntax::classification
{
	class Classifier;
	typedef std::vector<std::shared_ptr<fuml::syntax::classification::Classifier>> ClassifierList;
	class Slot;
	typedef std::vector<std::shared_ptr<fuml::syntax::classification::Slot>> SlotList;
}

namespace fuml::syntax::classification
{
	class InstanceSpecification : public fuml::syntax::commonstructure::NamedElement
	{
		public:
			std::shared_ptr<fuml::syntax::classification::ClassifierList> classifier = std::make_shared<fuml::syntax::classification::ClassifierList>();
			std::shared_ptr<fuml::syntax::classification::SlotList> slot = std::make_shared<fuml::syntax::classification::SlotList>();

		protected:
			std::weak_ptr<fuml::syntax::classification::InstanceSpecification> thisInstanceSpecificationPtr;

		public:
			void addClassifier(const std::shared_ptr<fuml::syntax::classification::Classifier>&);
			void addSlot(const std::shared_ptr<fuml::syntax::classification::Slot>&);
	}; // InstanceSpecification
}

#endif /* FUML_SYNTAX_CLASSIFICATION_INSTANCESPECIFICATION_H_ */
