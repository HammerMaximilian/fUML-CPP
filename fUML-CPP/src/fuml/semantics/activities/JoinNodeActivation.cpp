/*
 * JoinNodeActivation.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/activities/JoinNodeActivation.h>

#include <fuml/semantics/activities/ActivityEdgeInstance.h>

bool JoinNodeActivation::isReady()
{
	// Check that all incoming edges have sources that are offering tokens.

	bool ready = true;
	unsigned int i = 1;
	unsigned int incomingEdgesSize = this->incomingEdges->size();
	while (ready && i <= incomingEdgesSize) {
		ready = this->incomingEdges->at(i - 1)->hasOffer();
		i = i + 1;
	}

	return ready;
} // isReady
