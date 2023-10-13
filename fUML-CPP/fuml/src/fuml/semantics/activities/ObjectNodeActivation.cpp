/*
 * ObjectNodeActivation.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/activities/ObjectNodeActivation.h>

#include <fuml/semantics/activities/ActivityEdgeInstance.h>
#include <fuml/semantics/activities/ObjectToken.h>

ObjectNodeActivation::~ObjectNodeActivation()
{
}

void fuml::semantics::activities::ObjectNodeActivation::setThisObjectNodeActivationPtr(
	ObjectNodeActivationPtr_w thisObjectNodeActivationPtr)
{
	this->thisObjectNodeActivationPtr = thisObjectNodeActivationPtr;
	ActivityNodeActivation::setThisActivityNodeActivationPtr(thisObjectNodeActivationPtr);
}

void ObjectNodeActivation::run()
{
	// Initialize the offered token count to zero.

	ActivityNodeActivation::run();
	this->offeredTokenCount = 0;
} // run

void ObjectNodeActivation::sendOffers(const TokenListPtr& tokens)
{
	// If the set of tokens to be sent is empty, then offer a null token
	// instead.
	// Otherwise, offer the given tokens as usual.

	if (tokens->size() == 0)
	{
		ObjectTokenPtr token(new ObjectToken());
		token->holder = this->thisObjectNodeActivationPtr.lock();
		tokens->push_back(token);
	}

	ActivityNodeActivation::sendOffers(tokens);
} // sendOffers

void ObjectNodeActivation::terminate()
{
	// Terminate and remove any offered tokens.

	ActivityNodeActivation::terminate();
	this->clearTokens();
} // terminate

void ObjectNodeActivation::addToken(const TokenPtr& token)
{
	// Transfer the given token to be held by this node only if it is a
	// non-null object token.
	// If it is a control token or a null token, consume it without holding
	// it.

	if (token->getValue() == nullptr)
	{
		token->withdraw();
	}
	else
	{
		ActivityNodeActivation::addToken(token);
	}
} // addToken

int ObjectNodeActivation::removeToken(const TokenPtr& token)
{
	// Remove the given token, if it is held by this node activation.

	int i = ActivityNodeActivation::removeToken(token);
	if (i > 0 && i <= this->offeredTokenCount)
	{
		this->offeredTokenCount = this->offeredTokenCount - 1;
	}

	return i;
} // removeToken

void ObjectNodeActivation::clearTokens()
{
	// Remove all held tokens.

	ActivityNodeActivation::clearTokens();
	this->offeredTokenCount = 0;
} // clearTokens

int ObjectNodeActivation::countOfferedValues()
{
	// Count the total number of non-null object tokens being offered to
	// this node activation.

	unsigned int totalValueCount = 0;
	unsigned int i = 1;
	unsigned int incomingEdgesSize = this->incomingEdges->size();
	while (i <= incomingEdgesSize)
	{
		totalValueCount = totalValueCount + this->incomingEdges->at(i - 1)->countOfferedValues();
		i = i + 1;
	}

	return totalValueCount;
} // countOfferedValues

void ObjectNodeActivation::sendUnofferedTokens()
{
	// Send offers over all outgoing edges, if there are any tokens to be
	// offered.

	TokenListPtr tokens = this->getUnofferedTokens();
	this->offeredTokenCount = this->offeredTokenCount + tokens->size();

	this->sendOffers(tokens);
} // sendUnofferedTokens

int ObjectNodeActivation::countUnofferedTokens()
{
	// Return the number of unoffered tokens that are to be offered next.
	// (By default, this is all unoffered tokens.)

	if (this->heldTokens->size() == 0)
	{
		this->offeredTokenCount = 0;
	}

	return (this->heldTokens->size() - this->offeredTokenCount);
} // countUnofferedTokens

TokenListPtr ObjectNodeActivation::getUnofferedTokens()
{
	// Get the next set of unoffered tokens to be offered and return it.
	// [Note: This effectively treats all object flows as if they have
	// weight=*, rather than the weight=1 default in the current
	// superstructure semantics.]

	TokenListPtr tokens(new TokenList());

	unsigned int i = 1;
	unsigned int unofferedTokensCount = this->countUnofferedTokens();
	while (i <= unofferedTokensCount)
	{
		tokens->push_back(this->heldTokens->at(this->offeredTokenCount + i - 1));
		i = i + 1;
	}

	return tokens;
} // getUnofferedTokens

TokenListPtr ObjectNodeActivation::takeUnofferedTokens()
{
	// Take the next set of unoffered tokens to be offered from this node
	// activation and return them.

	TokenListPtr tokens = this->getUnofferedTokens();
	for (const TokenPtr& token : *tokens)
	{
		token->withdraw();
	}
	return tokens;
} // takeUnofferedTokens
