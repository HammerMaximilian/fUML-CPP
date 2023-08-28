/*
 * ActivityEdgeInstance.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/activities/ActivityEdgeInstance.h>

#include <fuml/semantics/activities/Token.h>
#include <fuml/semantics/activities/Offer.h>
#include <fuml/semantics/activities/ActivityNodeActivation.h>
#include <fuml/syntax/activities/ActivityEdge.h>

void ActivityEdgeInstance::sendOffer(const TokenListPtr &tokens)
{
	// Send an offer from the source to the target.
	// Keep the offered tokens until taken by the target.
	// (Note that any one edge should only be handling either all object
	// tokens or all control tokens.)

	OfferPtr offer(new Offer());

	for (const TokenPtr &token : *tokens)
	{
		offer->offeredTokens->push_back(token);
	}

	this->offers->push_back(offer);

	this->target->receiveOffer();
} // sendOffer

int ActivityEdgeInstance::countOfferedValues()
{
	// Return the number of values being offered in object tokens.

	int count = 0;
	const OfferListPtr &offers = this->offers;
	for (const OfferPtr &offer : *offers)
	{
		count = count + offer->countOfferedValues();
	}

	return count;
} // countOfferedValues

TokenListPtr ActivityEdgeInstance::takeOfferedTokens()
{
	// Take all the offered tokens and return them.

	TokenListPtr tokens(new TokenList());
	const OfferListPtr &offers = this->offers;

	while (offers->size() > 0)
	{
		TokenListPtr offeredTokens = offers->at(0)->getOfferedTokens();
		for (const TokenPtr &offeredToken : *offeredTokens)
		{
			tokens->push_back(offeredToken);
		}
		offers->erase(offers->begin());
	}

	return tokens;
} // takeOfferedTokens

TokenListPtr ActivityEdgeInstance::takeOfferedTokens(int maxCount)
{
	// Take all the offered tokens, up to the given maximum count of
	// non-null object tokens, and return them.

	TokenListPtr tokens(new TokenList());
	int remainingCount = maxCount;
	const OfferListPtr &offers = this->offers;

	while (offers->size() > 0 && remainingCount > 0)
	{
		const OfferPtr &offer = offers->at(0);
		TokenListPtr offeredTokens = offer->getOfferedTokens();
		int count = offer->countOfferedValues();
		if (count <= remainingCount)
		{
			for (const TokenPtr &offeredToken : *offeredTokens)
			{
				tokens->push_back(offeredToken);
			}
			remainingCount = remainingCount - count;
			offers->erase(offers->begin());
		}
		else
		{
			for (const TokenPtr &token : *offeredTokens)
			{
				if (token->getValue() != nullptr)
				{
					tokens->push_back(token);
				}
			}
			offer->removeOfferedValues(remainingCount);
			remainingCount = 0;
		}
	}

	return tokens;
} // takeOfferedTokens

TokenListPtr ActivityEdgeInstance::getOfferedTokens()
{
	// Get the offered tokens (after which the tokens will still be
	// offered).

	TokenListPtr tokens(new TokenList());
	const OfferListPtr &offers = this->offers;

	for (const OfferPtr &offer : *offers)
	{
		TokenListPtr offeredTokens = offer->getOfferedTokens();
		for (const TokenPtr &token : *offeredTokens)
		{
			tokens->push_back(token);
		}
	}

	return tokens;
} // getOfferedTokens

bool ActivityEdgeInstance::hasOffer()
{
	// Return true if there are any pending offers.

	bool hasTokens = false;
	unsigned int i = 1;
	const OfferListPtr offers = this->offers;
	unsigned int offersSize = offers->size();
	while (!hasTokens && i <= offersSize)
	{
		hasTokens = offers->at(i - 1)->hasTokens();
		i = i + 1;
	}

	return hasTokens;
} // hasOffer
