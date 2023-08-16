/*
 * EnumerationLiteral.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include "EnumerationLiteral.h"

#include "fuml/syntax/simpleclassifiers/Enumeration.h"

using namespace fuml::syntax::simpleclassifiers;

void EnumerationLiteral::_setEnumeration(
	const std::shared_ptr<fuml::syntax::simpleclassifiers::Enumeration>& enumeration)
{
	fuml::syntax::classification::InstanceSpecification::addClassifier(enumeration);
	this->classifier = enumeration;
	this->enumeration = enumeration;
}
