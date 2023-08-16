/*
 * Operation.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include "Operation.h"

#include "Parameter.h"
#include "ParameterDirectionKind.h"
#include "fuml/syntax/commonbehavior/Behavior.h"

using namespace fuml::syntax::classification;

void Operation::setThisPtr(std::weak_ptr<fuml::syntax::classification::Operation> thisOperationPtr)
{
	this->thisOperationPtr = thisOperationPtr;
	fuml::syntax::classification::BehavioralFeature::setThisPtr(thisOperationPtr);
}

void Operation::setIsQuery(bool isQuery)
{
	this->isQuery = isQuery;
} // setIsQuery

void Operation::addOwnedParameter(
	const std::shared_ptr<fuml::syntax::classification::Parameter>& ownedParameter)
{
	BehavioralFeature::addOwnedParameter(ownedParameter);
	this->ownedParameter->push_back(ownedParameter);
	ownedParameter->_setOperation(thisOperationPtr.lock());

	if (ownedParameter->direction == fuml::syntax::classification::ParameterDirectionKind::return_) {
		this->isOrdered = ownedParameter->isOrdered;
		this->isUnique = ownedParameter->isUnique;
		this->lower = ownedParameter->lower;
		this->upper = ownedParameter->upper;
		this->type = ownedParameter->type;
	}
} // addOwnedParameter

void Operation::addRedefinedOperation(
	const std::shared_ptr<fuml::syntax::classification::Operation>& redefinedOperation)
{
	RedefinableElement::addRedefinedElement(redefinedOperation);
	this->redefinedOperation->push_back(redefinedOperation);
} // addRedefinedOperation

void Operation::addMethod(
	const std::shared_ptr<fuml::syntax::commonbehavior::Behavior>& method)
{
	// Note: To have a method, an operation must be owned by a class. The
	// method must be an owned behavior of the class.

	this->method->push_back(method);
	method->_setSpecification(thisOperationPtr.lock());

} // addMethod

void Operation::_setClass(const std::shared_ptr<fuml::syntax::structuredclassifiers::Class_>& class_) {
	this->class_ = class_;
} // _setClass
