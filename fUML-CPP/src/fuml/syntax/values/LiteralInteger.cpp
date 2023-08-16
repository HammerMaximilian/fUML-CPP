/*
 * LiteralInteger.cpp
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */

#include "LiteralInteger.h"

using namespace fuml::syntax::values;

void LiteralInteger::setValue(int value)
{
	this->value = value;
}
