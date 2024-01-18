/*
 * LinkEndData.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <uml/actions/LinkEndData.h>

void LinkEndData::setEnd(const PropertyPtr& end)
{
	this->end = end;
} // setEnd

void LinkEndData::setValue(const InputPinPtr& value)
{
	this->value = value;
} // setValue
