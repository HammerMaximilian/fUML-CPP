/*
 * ObjectToken.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/activities/ObjectToken.h>

void ObjectToken::setThisObjectTokenPtr(ObjectTokenPtr_w thisObjectTokenPtr)
{
	this->thisObjectTokenPtr = thisObjectTokenPtr;
	Token::setThisTokenPtr(thisObjectTokenPtr);
}

bool ObjectToken::equals(const TokenPtr& other)
{
	// Test if this object token is the same as the other token.

	return (this->thisObjectTokenPtr.lock() == other);
} // equals

TokenPtr ObjectToken::copy()
{
	// Return a new object token with the same value as this token.
	// [Note: the holder of the copy is not set.]

	ObjectTokenPtr copy(new ObjectToken());
	copy->setThisTokenPtr(copy);
	copy->value = this->value;

	return copy;
} // copy

bool ObjectToken::isControl()
{
	// Return false for an object token.

	return false;
} // isControl

const ValuePtr& ObjectToken::getValue()
{
	// Return the value of this object token.

	return this->value;
} // getValue
