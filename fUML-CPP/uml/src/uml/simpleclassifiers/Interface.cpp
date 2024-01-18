/*
 * Interface.cpp
 *
 *  Created on: 03.01.2024
 *      Author: Maximilian
 */

#include <uml/simpleclassifiers/Interface.h>

#include <uml/classification/Operation.h>
#include <uml/classification/Property.h>
#include <uml/simpleclassifiers/Reception.h>

void Interface::setThisInterfacePtr(InterfacePtr_w thisInterfacePtr)
{
	this->thisInterfacePtr = thisInterfacePtr;
	Classifier::setThisClassifierPtr(thisInterfacePtr);
}

void Interface::addNestedClassifier(const ClassifierPtr& nestedClassifier)
{
	Namespace::addOwnedMember(nestedClassifier);
	this->nestedClassifier->push_back(nestedClassifier);
} // addNestedClassifier

void Interface::addOwnedAttribute(const PropertyPtr& ownedAttribute)
{
	Classifier::addAttribute(ownedAttribute);
	Namespace::addOwnedMember(ownedAttribute);

	this->ownedAttribute->push_back(ownedAttribute);
	ownedAttribute->_setInterface(thisInterfacePtr.lock());
} // addOwnedAttribute

void Interface::addOwnedOperation(const OperationPtr& ownedOperation)
{
	Classifier::addFeature(ownedOperation);
	Namespace::addOwnedMember(ownedOperation);

	this->ownedOperation->push_back(ownedOperation);
	ownedOperation->_setInterface(thisInterfacePtr.lock());
} // addOwnedOperation

void Interface::addOwnedReception(const ReceptionPtr& ownedReception)
{
	Classifier::addFeature(ownedReception);
	Namespace::addOwnedMember(ownedReception);

	this->ownedReception->push_back(ownedReception);
} // addOwnedReception

void Interface::addRedefinedInterface(const InterfacePtr& redefinedInterface)
{
	this->redefinedInterface->push_back(redefinedInterface);
} // addNestedClassifier
