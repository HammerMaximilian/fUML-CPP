/*
 * Interface.h
 *
 *  Created on: 03.01.2024
 *      Author: Maximilian
 */

#ifndef UML_SIMPLECLASSIFIERS_INTERFACE_H_
#define UML_SIMPLECLASSIFIERS_INTERFACE_H_

#include <uml/classification/Classifier.h>

namespace uml::simpleclassifiers
{
    class Interface : public Classifier // PSCS-specific
    {
    	public:
    		ClassifierListPtr nestedClassifier = std::make_shared<ClassifierList>();
    		PropertyListPtr ownedAttribute = std::make_shared<PropertyList>();
    		OperationListPtr ownedOperation = std::make_shared<OperationList>();
    		ReceptionListPtr ownedReception = std::make_shared<ReceptionList>();
    		InterfaceListPtr redefinedInterface = std::make_shared<InterfaceList>();

    	private:
    		InterfacePtr_w thisInterfacePtr;

    	public:
    		virtual ~Interface() = default;
    		void setThisInterfacePtr(InterfacePtr_w);

    		void addNestedClassifier(const ClassifierPtr&);
    		void addOwnedAttribute(const PropertyPtr&);
    		void addOwnedOperation(const OperationPtr&);
    		void addOwnedReception(const ReceptionPtr&);
    		void addRedefinedInterface(const InterfacePtr&);
    }; // Interface
}

#endif /* UML_SIMPLECLASSIFIERS_INTERFACE_H_ */
