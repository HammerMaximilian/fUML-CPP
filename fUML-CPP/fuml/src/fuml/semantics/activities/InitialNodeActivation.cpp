/*
 * InitialNodeActivation.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/activities/InitialNodeActivation.h>

#include <fuml/semantics/activities/ControlToken.h>

void InitialNodeActivation::fire(const TokenListPtr& incomingTokens)
{
	// Create a single token and send offers for it.

	TokenListPtr tokens(new TokenList());
	ControlTokenPtr newControlToken(new ControlToken());
	newControlToken->setThisTokenPtr(newControlToken);
	tokens->push_back(newControlToken);
	this->addTokens(tokens);

	this->sendOffers(tokens);
} // fire
