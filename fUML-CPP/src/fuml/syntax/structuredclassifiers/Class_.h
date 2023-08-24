/*
 * Class_.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_STRUCTUREDCLASSIFIERS_CLASS__H_
#define FUML_SYNTAX_STRUCTUREDCLASSIFIERS_CLASS__H_

#include <fuml/syntax/fwd.h>
#include <fuml/syntax/commonbehavior/BehavioredClassifier.h>

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
			virtual ~Class_() = default;
			void setThisClass_Ptr(std::weak_ptr<Class_>);

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

#endif /* FUML_SYNTAX_STRUCTUREDCLASSIFIERS_CLASS__H_ */
