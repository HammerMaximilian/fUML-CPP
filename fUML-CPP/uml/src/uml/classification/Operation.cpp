/*
 * Operation.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <uml/classification/Operation.h>
#include <uml/classification/Parameter.h>
#include <uml/classification/ParameterDirectionKind.h>
#include <uml/commonbehavior/Behavior.h>
#include <uml/simpleclassifiers/Interface.h>

void Operation::setThisOperationPtr(OperationPtr_w thisOperationPtr)
{
	this->thisOperationPtr = thisOperationPtr;
	BehavioralFeature::setThisBehavioralFeaturePtr(thisOperationPtr);
}

void Operation::setIsQuery(bool isQuery)
{
	this->isQuery = isQuery;
} // setIsQuery

void Operation::addOwnedParameter(const ParameterPtr& ownedParameter)
{
	BehavioralFeature::addOwnedParameter(ownedParameter);
	this->ownedParameter->push_back(ownedParameter);
	ownedParameter->_setOperation(thisOperationPtr.lock());

	if (ownedParameter->direction == ParameterDirectionKind::return_)
	{
		this->isOrdered = ownedParameter->isOrdered;
		this->isUnique = ownedParameter->isUnique;
		this->lower = ownedParameter->lower;
		this->upper = ownedParameter->upper;
		this->type = ownedParameter->type;
	}
} // addOwnedParameter

void Operation::addRedefinedOperation(const OperationPtr& redefinedOperation)
{
	RedefinableElement::addRedefinedElement(redefinedOperation);
	this->redefinedOperation->push_back(redefinedOperation);
} // addRedefinedOperation

void Operation::addMethod(const BehaviorPtr& method)
{
	// Note: To have a method, an operation must be owned by a class. The
	// method must be an owned behavior of the class.

	this->method->push_back(method);
	method->_setSpecification(thisOperationPtr.lock());

} // addMethod

void Operation::_setClass(const std::shared_ptr<Class_>& class_)
{
	this->class_ = class_;
	NamedElement::_setNamespace(class_);
} // _setClass

void Operation::_setInterface(const InterfacePtr& interface_)
{
	this->interface = interface_;
	NamedElement::_setNamespace(interface_);
}
