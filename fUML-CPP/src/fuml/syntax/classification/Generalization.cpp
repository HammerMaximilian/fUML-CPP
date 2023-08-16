/*
 * Generalization.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include "Generalization.h"

#include "Classifier.h"

using namespace fuml::syntax::classification;

void Generalization::setIsSubstitutable(bool isSubstitutable)
{
	this->isSubstitutable = isSubstitutable;
} // setIsSubstitutable

void Generalization::setGeneral(const std::shared_ptr<fuml::syntax::classification::Classifier>& general)
{
	this->general = general;
} // setGeneral

void Generalization::_setSpecific(const std::shared_ptr<fuml::syntax::classification::Classifier>& specific)
{
	this->specific = specific;
} // _setSpecific
