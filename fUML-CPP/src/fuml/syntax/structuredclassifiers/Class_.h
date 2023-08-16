/*
 * Class_.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_STRUCTUREDCLASSIFIERS_CLASS__H_
#define FUML_SYNTAX_STRUCTUREDCLASSIFIERS_CLASS__H_

#include "fuml/syntax/commonbehavior/BehavioredClassifier.h"

namespace fuml::syntax::classification
{
	class Operation;
	typedef std::vector<std::shared_ptr<fuml::syntax::classification::Operation>> OperationList;
	class Property;
	typedef std::vector<std::shared_ptr<fuml::syntax::classification::Property>> PropertyList;
}
namespace fuml::syntax::simpleclassifiers
{
	class Reception;
	typedef std::vector<std::shared_ptr<fuml::syntax::simpleclassifiers::Reception>> ReceptionList;
}
namespace fuml::syntax::structuredclassifiers
{
	class Class_;
	typedef std::vector<std::shared_ptr<fuml::syntax::structuredclassifiers::Class_>> Class_List;
}

namespace fuml::syntax::structuredclassifiers
{
	class Class_ : public fuml::syntax::commonbehavior::BehavioredClassifier
	{
		public:
			std::shared_ptr<fuml::syntax::classification::OperationList> ownedOperation = std::make_shared<fuml::syntax::classification::OperationList>();
			bool isActive = false;
			std::shared_ptr<fuml::syntax::simpleclassifiers::ReceptionList> ownedReception = std::make_shared<fuml::syntax::simpleclassifiers::ReceptionList>();
			std::shared_ptr<fuml::syntax::classification::PropertyList> ownedAttribute = std::make_shared<fuml::syntax::classification::PropertyList>();
			std::shared_ptr<fuml::syntax::classification::ClassifierList> nestedClassifier = std::make_shared<fuml::syntax::classification::ClassifierList>();
			bool isID = false;
			std::shared_ptr<fuml::syntax::structuredclassifiers::Class_List> superClass = std::make_shared<fuml::syntax::structuredclassifiers::Class_List>();

		private:
			std::weak_ptr<fuml::syntax::structuredclassifiers::Class_> thisClass_Ptr;

		public:
			virtual void setThisPtr(std::weak_ptr<fuml::syntax::structuredclassifiers::Class_>);

			void setIsActive(bool);
			void addGeneralization(
				const std::shared_ptr<fuml::syntax::classification::Generalization>&);
			void addOwnedAttribute(
				const std::shared_ptr<fuml::syntax::classification::Property>&);
			void addOwnedOperation(
				const std::shared_ptr<fuml::syntax::classification::Operation>&);
			void addOwnedReception(
				const std::shared_ptr<fuml::syntax::simpleclassifiers::Reception>&);
			std::shared_ptr<fuml::syntax::commonstructure::NamedElementList> inherit(
				const std::shared_ptr<fuml::syntax::commonstructure::NamedElementList>&);
			void addNestedClassifier(
				const std::shared_ptr<fuml::syntax::classification::Classifier>&);
	}; // Class
}
#endif /* FUML_SYNTAX_STRUCTUREDCLASSIFIERS_CLASS__H_ */
