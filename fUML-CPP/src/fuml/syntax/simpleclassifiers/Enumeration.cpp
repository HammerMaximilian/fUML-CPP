/*
 * Enumeration.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include "Enumeration.h"

#include "fuml/syntax/simpleclassifiers/EnumerationLiteral.h"

using namespace fuml::syntax::simpleclassifiers;

void Enumeration::setThisPtr(std::weak_ptr<fuml::syntax::simpleclassifiers::Enumeration> thisEnumerationPtr)
{
	this->thisEnumerationPtr = thisEnumerationPtr;
	fuml::syntax::simpleclassifiers::DataType::setThisPtr(thisEnumerationPtr);
}

void Enumeration::addOwnedLiteral(
	const std::shared_ptr<fuml::syntax::simpleclassifiers::EnumerationLiteral>& ownedLiteral)
{
	fuml::syntax::commonstructure::Namespace::addOwnedMember(ownedLiteral);

	this->ownedLiteral->push_back(ownedLiteral);
	ownedLiteral->_setEnumeration(thisEnumerationPtr.lock());
} // addOwnedAttribute
