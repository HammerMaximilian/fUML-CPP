/*
 * TypedElement.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include <uml/commonstructure/TypedElement.h>

TypedElement::~TypedElement()
{
}

void TypedElement::setType(const TypePtr& type)
{
	this->type = type;
} // setType
