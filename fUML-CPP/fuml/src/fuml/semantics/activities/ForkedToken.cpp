/*
 * ForkedToken.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/activities/ForkedToken.h>

void ForkedToken::setThisForkedTokenPtr(ForkedTokenPtr_w thisForkedTokenPtr)
{
	this->thisForkedTokenPtr = thisForkedTokenPtr;
	Token::setThisTokenPtr(thisForkedTokenPtr);
}

bool ForkedToken::isControl()
{
	// Test if the base token is a control token.

	return this->baseToken->isControl();
}

void ForkedToken::withdraw()
{
	// If the base token is not withdrawn, then withdraw it.
	// Decrement the remaining offers count.
	// When the remaining number of offers is zero, then remove this token
	// from its holder.

	if (!this->baseTokenIsWithdrawn && !this->baseToken->isWithdrawn())
	{
		this->baseToken->withdraw();

		// NOTE: This keeps a base token that is a forked token from being
		// withdrawn more than once, since withdrawing a forked token may
		// not actually remove it from its fork node holder.
		this->baseTokenIsWithdrawn = true;
	}

	if (this->remainingOffersCount > 0)
	{
		this->remainingOffersCount = this->remainingOffersCount - 1;
	}

	if (this->remainingOffersCount == 0)
	{
		Token::withdraw();
	}
}

TokenPtr ForkedToken::copy()
{
	// Return a copy of the base token.

	return this->baseToken->copy();
}

bool ForkedToken::equals(const TokenPtr& otherToken)
{		// Test if this token is equal to another token.

	return (this->thisForkedTokenPtr.lock() == otherToken);
}

const ValuePtr& ForkedToken::getValue()
{
	// Return the value of the base token.

	return this->baseToken->getValue();
}
