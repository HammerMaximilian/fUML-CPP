/*
 * PinStreamingParameterListener.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/PinStreamingParameterListener.h>

#include <fuml/Debug.h>
#include <fuml/semantics/actions/PinActivation.h>
#include <fuml/semantics/activities/ObjectToken.h>
#include <uml/activities/ActivityNode.h>

void PinStreamingParameterListener::post(const ValueListPtr& values)
{
	// Fire the pin activation passing the posted values as incoming tokens,
	// then have the pin activation immediately offer these tokens (since
	// the pin activation would otherwise not offer them until its
	// associated action activation terminates).

	fuml::Debug::println("[post] Posting to node " + this->nodeActivation->node->name);

	TokenListPtr tokens(new TokenList());
	for (const ValuePtr& value : *values)
	{
		ObjectTokenPtr token(new ObjectToken());
		token->setThisObjectTokenPtr(token);
		token->value = value;
		tokens->push_back(token);
	}

	nodeActivation->fire(tokens);
	nodeActivation->sendUnofferedTokens();
} // post

bool PinStreamingParameterListener::isTerminated()
{
	// This listener is terminated if the node activation is not running.

	return !(this->nodeActivation->isRunning());
} // isTerminated
