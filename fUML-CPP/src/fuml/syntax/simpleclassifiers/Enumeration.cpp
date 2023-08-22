/*
 * Enumeration.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/simpleclassifiers/Enumeration.h>
#include <fuml/syntax/simpleclassifiers/EnumerationLiteral.h>

void Enumeration::setThisPtr(std::weak_ptr<Enumeration> thisEnumerationPtr)
{
	this->thisEnumerationPtr = thisEnumerationPtr;
	DataType::setThisPtr(thisEnumerationPtr);
}

void Enumeration::addOwnedLiteral(
	const EnumerationLiteralPtr& ownedLiteral)
{
	Namespace::addOwnedMember(ownedLiteral);

	this->ownedLiteral->push_back(ownedLiteral);
	ownedLiteral->_setEnumeration(thisEnumerationPtr.lock());
} // addOwnedAttribute
