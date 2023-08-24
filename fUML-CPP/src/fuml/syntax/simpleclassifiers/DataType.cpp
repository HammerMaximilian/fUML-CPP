/*
 * DataType.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/simpleclassifiers/DataType.h>
#include <fuml/syntax/classification/Property.h>

void DataType::setThisDataTypePtr(std::weak_ptr<DataType> thisDataTypePtr)
{
	this->thisDataTypePtr = thisDataTypePtr;
	Classifier::setThisClassifierPtr(thisDataTypePtr);
}

void DataType::addOwnedAttribute(
	const PropertyPtr& ownedAttribute)
{
	Classifier::addAttribute(ownedAttribute);
	Namespace::addOwnedMember(ownedAttribute);

	this->ownedAttribute->push_back(ownedAttribute);
	ownedAttribute->_setDatatype(thisDataTypePtr.lock());
} // addOwnedAttribute
