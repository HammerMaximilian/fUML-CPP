/*
 * DataType.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <uml/classification/Property.h>
#include <uml/simpleclassifiers/DataType.h>

void DataType::setThisDataTypePtr(DataTypePtr_w thisDataTypePtr)
{
	this->thisDataTypePtr = thisDataTypePtr;
	Classifier::setThisClassifierPtr(thisDataTypePtr);
}

void DataType::addOwnedAttribute(const PropertyPtr& ownedAttribute)
{
	Classifier::addAttribute(ownedAttribute);
	Namespace::addOwnedMember(ownedAttribute);

	this->ownedAttribute->push_back(ownedAttribute);
	ownedAttribute->_setDatatype(thisDataTypePtr.lock());
} // addOwnedAttribute
