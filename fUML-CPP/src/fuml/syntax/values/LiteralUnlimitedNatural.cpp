/*
 * LiteralUnlimitedNatural.cpp
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */

#include "LiteralUnlimitedNatural.h"

using namespace fuml::syntax::values;

void LiteralUnlimitedNatural::setValue(UMLPrimitiveTypes::unlimitedNatural value)
{
	this->value = value;
}
