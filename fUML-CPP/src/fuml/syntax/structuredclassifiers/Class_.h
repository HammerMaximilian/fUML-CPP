/*
 * Class_.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_STRUCTUREDCLASSIFIERS_CLASS__H_
#define FUML_SYNTAX_STRUCTUREDCLASSIFIERS_CLASS__H_

#include <fuml/syntax/classification/Classifier.h>
#include <fuml/syntax/classification/ClassifierList.h>
#include <fuml/syntax/classification/OperationList.h>
#include <fuml/syntax/classification/PropertyList.h>
#include <fuml/syntax/commonbehavior/BehavioredClassifier.h>
#include <fuml/syntax/commonstructure/NamedElementList.h>
#include <fuml/syntax/simpleclassifiers/ReceptionList.h>
#include <fuml/syntax/structuredclassifiers/Class_List.h>
#include <memory>

namespace fuml::syntax::classification
{
	class Generalization;
	class Operation;
	class Property;
}
using Generalization = fuml::syntax::classification::Generalization;
using GeneralizationPtr = std::shared_ptr<Generalization>;
using Operation = fuml::syntax::classification::Operation;
using OperationPtr = std::shared_ptr<Operation>;
using Property = fuml::syntax::classification::Property;
using PropertyPtr = std::shared_ptr<Property>;

namespace fuml::syntax::simpleclassifiers
{
	class Reception;
}
using Reception = fuml::syntax::simpleclassifiers::Reception;
using ReceptionPtr = std::shared_ptr<Reception>;

namespace fuml::syntax::structuredclassifiers
{
	class Class_ : public BehavioredClassifier
	{
		public:
			OperationListPtr ownedOperation = std::make_shared<OperationList>();
			bool isActive = false;
			ReceptionListPtr ownedReception = std::make_shared<ReceptionList>();
			PropertyListPtr ownedAttribute = std::make_shared<PropertyList>();
			ClassifierListPtr nestedClassifier = std::make_shared<ClassifierList>();
			bool isID = false;
			Class_ListPtr superClass = std::make_shared<Class_List>();

		private:
			std::weak_ptr<Class_> thisClass_Ptr;

		public:
			virtual void setThisPtr(std::weak_ptr<Class_>);

			void setIsActive(bool);
			void addGeneralization(
				const GeneralizationPtr&);
			void addOwnedAttribute(
				const PropertyPtr&);
			void addOwnedOperation(
				const OperationPtr&);
			void addOwnedReception(
				const ReceptionPtr&);
			NamedElementListPtr inherit(
				const NamedElementListPtr&);
			void addNestedClassifier(
				const ClassifierPtr&);
	}; // Class
}

using Class_ = fuml::syntax::structuredclassifiers::Class_;
using Class_Ptr = std::shared_ptr<Class_>;

#endif /* FUML_SYNTAX_STRUCTUREDCLASSIFIERS_CLASS__H_ */
