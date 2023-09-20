/*
 * Offer.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/activities/Offer.h>

#include <fuml/semantics/activities/Token.h>

int Offer::countOfferedValues()
{
	// Return the number of values being offered on object tokens.
	// Remove any tokens that have already been withdrawn and don't include
	// them in the count.

	this->removeWithdrawnTokens();

	int count = 0;
	const TokenListPtr& offeredTokens = this->offeredTokens;
	for (const TokenPtr& offeredToken : *offeredTokens)
	{
		if (offeredToken->getValue() != nullptr)
		{
			count = count + 1;
		}
	}

	return count;
} // countOfferedValues

TokenListPtr Offer::getOfferedTokens()
{
	// Get the offered tokens, removing any that have been withdrawn.

	this->removeWithdrawnTokens();

	TokenListPtr tokens(new TokenList());
	const TokenListPtr& offeredTokens = this->offeredTokens;
	for (const TokenPtr& offeredToken : *offeredTokens)
	{
		tokens->push_back(offeredToken);
	}

	return tokens;
} // getOfferedTokens

void Offer::removeOfferedValues(int count)
{
	// Remove the given number of non-null object tokens from those in this
	// offer.

	int n = count;
	int i = 1;
	while (n > 0)
	{
		if (this->offeredTokens->at(i - 1)->getValue() != nullptr)
		{
			this->offeredTokens->erase(this->offeredTokens->begin() + (i - 1));
		}
		else
		{
			i = i + 1;
		}
		n = n - 1;
	}
} // removeOfferedValues

void Offer::removeWithdrawnTokens()
{
	// Remove any tokens that have already been consumed.

	const TokenListPtr& offeredTokens = this->offeredTokens;

	TokenList::iterator it = offeredTokens->begin();
	TokenList::iterator end = offeredTokens->end();
	while (it != end)
	{
		if ((*it)->isWithdrawn())
		{
			it = offeredTokens->erase(it);
		}
		it++;
	}
} // removeWithdrawnTokens

bool Offer::hasTokens()
{
	// Check whether this offer has any tokens that have not been withdrawn.

	this->removeWithdrawnTokens();
	return this->offeredTokens->size() > 0;
} // hasTokens
