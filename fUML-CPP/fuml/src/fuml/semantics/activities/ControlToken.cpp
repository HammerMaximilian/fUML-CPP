/*
 * ControlToken.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/activities/ControlToken.h>

bool ControlToken::equals(const TokenPtr& other)
{
	// Return true if the other token is a control token, because control
	// tokens are interchangable.

	return IS(ControlToken, other);
}

TokenPtr ControlToken::copy()
{
	// Return a new control token.

	ControlTokenPtr newValue(new ControlToken());
	newValue->setThisTokenPtr(newValue);

	return newValue;
}

bool ControlToken::isControl()
{
	// Return true for a control token.

	return true;
}

const ValuePtr& ControlToken::getValue()
{
	// Control tokens do not have values.
	static const ValuePtr null = nullptr;
	return null;
}
