/*
 * LinkEndData.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <LinkEndData.h>

using namespace fuml::syntax::actions;

void LinkEndData::setEnd(const std::shared_ptr<fuml::syntax::classification::Property>& end)
{
	this->end = end;
} // setEnd

void LinkEndData::setValue(const std::shared_ptr<InputPin>& value)
{
	this->value = value;
} // setValue
