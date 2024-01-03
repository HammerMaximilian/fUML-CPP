/*
 * Enumeration.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <uml/simpleclassifiers/Enumeration.h>
#include <uml/simpleclassifiers/EnumerationLiteral.h>

void Enumeration::setThisEnumerationPtr(EnumerationPtr_w thisEnumerationPtr)
{
	this->thisEnumerationPtr = thisEnumerationPtr;
	DataType::setThisDataTypePtr(thisEnumerationPtr);
}

void Enumeration::addOwnedLiteral(const EnumerationLiteralPtr& ownedLiteral)
{
	Namespace::addOwnedMember(ownedLiteral);

	this->ownedLiteral->push_back(ownedLiteral);
	ownedLiteral->_setEnumeration(thisEnumerationPtr.lock());
} // addOwnedAttribute
