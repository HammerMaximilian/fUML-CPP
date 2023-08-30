/*
 * ForkNodeActivation.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/activities/ForkNodeActivation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/activities/ActivityEdgeInstance.h>
#include <fuml/semantics/activities/ActivityNodeActivationGroup.h>
#include <fuml/semantics/activities/ForkedToken.h>
#include <fuml/syntax/activities/ActivityNode.h>

void ForkNodeActivation::fire(const TokenListPtr& incomingTokens)
{
	// Create forked tokens for all incoming tokens and offer them on all
	// outgoing edges.

	utils::Debug::println(
		this->node == nullptr ? "[fire] Anonymous fork node." : "[fire] Fork node " + this->node->name + "...");

	const ActivityEdgeInstanceListPtr& outgoingEdges = this->outgoingEdges;
	int outgoingEdgeCount = outgoingEdges->size();

	TokenListPtr forkedTokens(new TokenList());
	for (const TokenPtr& token : *incomingTokens)
	{
		ForkedTokenPtr forkedToken(new ForkedToken());
		forkedToken->baseToken = token;
		forkedToken->remainingOffersCount = outgoingEdgeCount;
		forkedToken->baseTokenIsWithdrawn = false;
		forkedTokens->push_back(forkedToken);
	}

	this->addTokens(forkedTokens);

	this->sendOffers(forkedTokens);
} // fire

void ForkNodeActivation::terminate()
{
	// Terminate and remove any offered tokens.

	ActivityNodeActivation::terminate();
	this->clearTokens();
}
