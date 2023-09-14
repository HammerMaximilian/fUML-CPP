/*
 * ActivityParameterNodeStreamingParameterListener.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/activities/ActivityParameterNodeStreamingParameterListener.h>

#include <fuml/Debug.h>
#include <fuml/semantics/activities/ActivityParameterNodeActivation.h>
#include <fuml/syntax/activities/ActivityNode.h>

void ActivityParameterNodeStreamingParameterListener::post(const ValueListPtr& values)
{
	// Fire the activity parameter node activation.
	// (Note that the values do not have to be passed to the node activation,
	// because an input activity parameter node activation retrieves values
	// directly from the relevant parameter value.)

	fuml::Debug::println("[post] Posting to node " + this->nodeActivation->node->name);

	nodeActivation->fire(TokenListPtr(new TokenList));
}

bool ActivityParameterNodeStreamingParameterListener::isTerminated()
{
	// This listener is terminated if the node activation is not running.

	return !this->nodeActivation->isRunning();
}
