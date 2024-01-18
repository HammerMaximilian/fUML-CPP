/*
 * ActivityFinalNodeActivation.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/activities/ActivityFinalNodeActivation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/actions/ExpansionActivationGroup.h>
#include <fuml/semantics/actions/ExpansionRegionActivation.h>
#include <fuml/semantics/actions/StructuredActivityNodeActivation.h>
#include <fuml/semantics/activities/ActivityExecution.h>
#include <fuml/semantics/activities/ActivityNodeActivationGroup.h>
#include <uml/activities/ActivityNode.h>

void ActivityFinalNodeActivation::fire(const TokenListPtr& incomingTokens)
{
	// Terminate the activity execution or structured node activation
	// containing this activation.

	fuml::Debug::println("[fire] Activity final node " + this->node->name + "...");

	if (incomingTokens->size() > 0 || this->incomingEdges->size() == 0)
	{
		ActivityNodeActivationGroupPtr group = this->group.lock();
		ActivityExecutionPtr activityExecution = group->activityExecution.lock();
		StructuredActivityNodeActivationPtr containingNodeActivation = group->containingNodeActivation.lock();

		if (activityExecution != nullptr)
		{
			activityExecution->terminate();
		}
		else if (containingNodeActivation != nullptr)
		{
			containingNodeActivation->terminateAll();
		}
		else
		{
			ExpansionActivationGroupPtr expansionActivationGroup = std::dynamic_pointer_cast<ExpansionActivationGroup>(
				group);
			if (expansionActivationGroup)
			{
				expansionActivationGroup->regionActivation->terminate();
			}
		}
	}
} // fire
