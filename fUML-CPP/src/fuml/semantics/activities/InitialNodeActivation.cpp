/*
 * InitialNodeActivation.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/activities/InitialNodeActivation.h>

#include <fuml/semantics/activities/ControlToken.h>

void InitialNodeActivation::fire(
		const TokenListPtr& incomingTokens)
{
	// Create a single token and send offers for it.

	TokenListPtr tokens(new TokenList());
	tokens->push_back(ControlTokenPtr(new ControlToken()));
	this->addTokens(tokens);

	this->sendOffers(tokens);
} // fire
