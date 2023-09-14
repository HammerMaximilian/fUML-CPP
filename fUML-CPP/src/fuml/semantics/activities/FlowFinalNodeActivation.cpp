/*
 * FlowFinalNodeActivation.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/activities/FlowFinalNodeActivation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/activities/Token.h>
#include <fuml/syntax/activities/ActivityNode.h>

void FlowFinalNodeActivation::fire(const TokenListPtr& incomingTokens)
{
	// Consume all incoming tokens.

	fuml::Debug::println("[fire] Flow final node " + this->node->name + "...");

	for (const TokenPtr& token : *incomingTokens)
	{
		token->withdraw();
	}
} // fire
