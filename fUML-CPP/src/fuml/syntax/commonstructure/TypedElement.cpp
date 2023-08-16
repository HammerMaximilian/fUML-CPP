/*
 * TypedElement.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include "TypedElement.h"

#include "Type.h"

using namespace fuml::syntax::commonstructure;

void TypedElement::setType(const std::shared_ptr<fuml::syntax::commonstructure::Type>& type)
{
	this->type = type;
} // setType
