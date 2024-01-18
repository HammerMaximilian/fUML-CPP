/*
 * Class_.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef UML_STRUCTUREDCLASSIFIERS_CLASS__H_
#define UML_STRUCTUREDCLASSIFIERS_CLASS__H_

#include <uml/commonbehavior/BehavioredClassifier.h>
#include <uml/fwd.h>
#include <uml/structuredclassifiers/EncapsulatedClassifier.h>

namespace uml::structuredclassifiers
{
	class Class_ : public BehavioredClassifier, public EncapsulatedClassifier
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
			Class_Ptr_w thisClass_Ptr;

		public:
			virtual ~Class_() = default;
			void setThisClass_Ptr(Class_Ptr_w);

			void setIsActive(bool);
			virtual void addGeneralization(const GeneralizationPtr&) override;
			void addOwnedAttribute(const PropertyPtr&);
			void addOwnedOperation(const OperationPtr&);
			void addOwnedReception(const ReceptionPtr&);
			virtual NamedElementListPtr inherit(const NamedElementListPtr&) override;
			void addNestedClassifier(const ClassifierPtr&);
	};
// Class
}

#endif /* UML_STRUCTUREDCLASSIFIERS_CLASS__H_ */
