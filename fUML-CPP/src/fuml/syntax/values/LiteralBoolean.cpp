/*
 * LiteralBoolean.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include "LiteralBoolean.h"

using namespace fuml::syntax::values;

void LiteralBoolean::setValue(bool value)
{
	this->value = value;
}
