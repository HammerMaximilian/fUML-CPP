/*
 * LiteralString.cpp
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */

#include "LiteralString.h"

using namespace fuml::syntax::values;

void LiteralString::setValue(std::string value)
{
	this->value = value;
}
