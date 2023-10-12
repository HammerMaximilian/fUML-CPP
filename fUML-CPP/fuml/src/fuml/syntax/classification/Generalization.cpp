/*
 * Generalization.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/classification/Generalization.h>

void Generalization::setIsSubstitutable(bool isSubstitutable)
{
	this->isSubstitutable = isSubstitutable;
} // setIsSubstitutable

void Generalization::setGeneral(const ClassifierPtr& general)
{
	this->general = general;
} // setGeneral

void Generalization::_setSpecific(const ClassifierPtr& specific)
{
	this->specific = specific;
} // _setSpecific
