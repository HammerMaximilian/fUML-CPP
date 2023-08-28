/*
 * ControlNodeActivation.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/activities/ControlNodeActivation.h>

#include <fuml/Debug.h>
#include <fuml/syntax/activities/ActivityNode.h>

ControlNodeActivation::~ControlNodeActivation()
{
}

void ControlNodeActivation::fire(const TokenListPtr &incomingTokens)
{
	// By default, offer all tokens on all outgoing edges.

	utils::Debug::println(this->node != nullptr,
			"[fire] Control node " + this->node->name + "...");

	this->sendOffers(incomingTokens);
} // fire
