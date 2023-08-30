/*
 * EnumerationLiteral.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/simpleclassifiers/Enumeration.h>
#include <fuml/syntax/simpleclassifiers/EnumerationLiteral.h>

void EnumerationLiteral::_setEnumeration(const EnumerationPtr& enumeration)
{
	InstanceSpecification::addClassifier(enumeration);
	this->classifier = enumeration;
	this->enumeration = enumeration;
}
