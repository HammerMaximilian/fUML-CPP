/*
 * PinActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/PinActivation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/activities/ActivityEdgeInstance.h>
#include <uml/actions/Pin.h>

PinActivation::~PinActivation()
{
}

void PinActivation::fire(const TokenListPtr& incomingTokens)
{
	// Add all incoming tokens to the pin.

	fuml::Debug::println("[fire] Pin " + (this->node == nullptr ? "" : this->node->name + "..."));

	this->addTokens(incomingTokens);
} // fire

TokenListPtr PinActivation::takeOfferedTokens()
{
	// Take only a number of tokens only up to the limit allowed by
	// the multiplicity upper bound of the pin for this activation.

	int count = this->countUnofferedTokens();
	int upper = -1;

	// Note: A pin activation used in an expansion activation group
	// will have this->node == nullptr.
	if (this->node != nullptr)
	{
		upper = std::dynamic_pointer_cast<Pin>(this->node)->upper;
	}

	TokenListPtr tokens(new TokenList());

	// Note: upper < 0 indicates an unbounded upper multiplicity.
	if (upper < 0 || count < upper)
	{
		const ActivityEdgeInstanceListPtr& incomingEdges = this->incomingEdges;
		for (const ActivityEdgeInstancePtr& edge : *incomingEdges)
		{
			int incomingCount = edge->countOfferedValues();
			TokenListPtr incomingTokens(new TokenList());
			if (upper < 0 || incomingCount < upper - count)
			{
				incomingTokens = edge->takeOfferedTokens();
				count = count + incomingCount;
			}
			else if (count < upper)
			{
				incomingTokens = edge->takeOfferedTokens(upper - count);
				count = upper;
			}
			for (const TokenPtr& token : *incomingTokens)
			{
				tokens->push_back(token);
			}
		}
	}

	return tokens;
} // takeOfferedTokens
