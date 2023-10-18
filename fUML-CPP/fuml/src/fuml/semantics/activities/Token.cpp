/*
 * Token.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/activities/Token.h>

#include <fuml/semantics/activities/ActivityNodeActivation.h>

Token::~Token()
{
}

void Token::setThisTokenPtr(TokenPtr_w thisTokenPtr)
{
	this->thisTokenPtr = thisTokenPtr;
}

TokenPtr Token::transfer(const ActivityNodeActivationPtr& holder)
{
	// if this token does not have any holder, make the given holder its
	// holder.
	// Otherwise, remove this token from its holder and return a copy of it
	// transfered to a new holder.

	TokenPtr token = this->thisTokenPtr.lock();
	if (this->holder.lock() != nullptr)
	{
		this->withdraw();
		token = this->copy();
	}

	token->holder = holder;
	return token;
} // transfer

void Token::withdraw()
{
	// Remove this token from its holder, withdrawing any offers for it.

	if (!this->isWithdrawn())
	{
		TokenPtr thisTokenPtrLocked = this->thisTokenPtr.lock(); // This is done so this token won't be deleted (i.e. it's memory is freed) by the next line in case it is only referenced by it's holder
		this->holder.lock()->removeToken(this->thisTokenPtr.lock());
		this->holder.reset();
	}
} // withdraw

bool Token::isWithdrawn()
{
	// Test if this token has been withdrawn.

	return this->holder.lock() == nullptr;
} // isWithdrawn
