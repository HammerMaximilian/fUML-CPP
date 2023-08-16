/*
 * DataType.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include "DataType.h"

#include "fuml/syntax/classification/Property.h"

using namespace fuml::syntax::simpleclassifiers;

void DataType::addOwnedAttribute(
	const std::shared_ptr<fuml::syntax::classification::Property>& ownedAttribute)
{
	fuml::syntax::classification::Classifier::addAttribute(ownedAttribute);
	fuml::syntax::commonstructure::Namespace::addOwnedMember(ownedAttribute);

	this->ownedAttribute->push_back(ownedAttribute);
	ownedAttribute->_setDatatype(thisDataTypePtr.lock());
} // addOwnedAttribute
