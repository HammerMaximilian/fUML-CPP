/*
 * LiteralReal.cpp
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */

#include "LiteralReal.h"

using namespace fuml::syntax::values;

void LiteralReal::setValue(float value)
{
	this->value = value;
}
