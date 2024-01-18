/*
 * ExpansionActivationGroup.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/ExpansionActivationGroup.h>

#include <fuml/semantics/actions/ExpansionRegionActivation.h>
#include <fuml/semantics/actions/OutputPinActivation.h>
#include <uml/actions/ExpansionNode.h>
#include <uml/actions/ExpansionRegion.h>
#include <uml/actions/InputPin.h>

ActivityNodeActivationPtr ExpansionActivationGroup::getNodeActivation(const ActivityNodePtr& node)
{
	// If the given node is an input pin of the expansion region, then
	// return the corresponding region-input output-pin activation.
	// If the given node is an input expansion node of the expansion region,
	// then return the corresponding group-input output-pin activation.
	// If the given node is an output expansion node of the expansion
	// region, then return the corresponding group-output output-pin
	// activation.
	// Otherwise return the node activation from the activation group, as
	// usual.

	ExpansionRegionPtr region = std::dynamic_pointer_cast<ExpansionRegion>(this->regionActivation->node);

	const InputPinListPtr& inputs = region->input;
	ActivityNodeActivationPtr activation = nullptr;

	unsigned int i = 1;
	unsigned int regionInputSize = inputs->size();
	while (activation == nullptr && i <= regionInputSize)
	{
		if (node == region->input->at(i - 1))
		{
			activation = this->regionInputs->at(i - 1);
		}
		i = i + 1;
	}

	unsigned int j = 1;
	unsigned int regionInputElementsSize = region->inputElement->size();
	while (activation == nullptr && j <= regionInputElementsSize)
	{
		if (node == region->inputElement->at(j - 1))
		{
			activation = this->groupInputs->at(j - 1);
		}
		j = j + 1;
	}

	unsigned int k = 1;
	unsigned int regionOutputElementsSize = region->outputElement->size();
	while (activation == nullptr && k <= regionOutputElementsSize)
	{
		if (node == region->outputElement->at(k - 1))
		{
			activation = this->groupOutputs->at(k - 1);
		}
		k = k + 1;
	}

	if (activation == nullptr)
	{
		activation = ActivityNodeActivationGroup::getNodeActivation(node);
	}

	return activation;
} // getNodeActivation

ActivityExecutionPtr ExpansionActivationGroup::getActivityExecution()
{
	// Get the activity execution that contains the expansion region
	// activation for this activation group.

	return this->regionActivation->getActivityExecution();
} // getActivityExecution

void ExpansionActivationGroup::suspend(const ActivityNodeActivationPtr& activation)
{
	// Suspend the given activation in this activation group. If this is
	// the only suspended activation, then suspend the associated region
	// activation.

	if (!this->isSuspended())
	{
		this->regionActivation->suspend();
	}
	ActivityNodeActivationGroup::suspend(activation);
} // suspend

void ExpansionActivationGroup::setThisExpansionActivationGroupPtr(
	ExpansionActivationGroupPtr_w thisExpansionActivationGroupPtr)
{
	this->thisExpansionActivationGroupPtr = thisExpansionActivationGroupPtr;
	ActivityNodeActivationGroup::setThisActivityNodeActivationGroupPtr(thisExpansionActivationGroupPtr);
}

void ExpansionActivationGroup::resume(const ActivityNodeActivationPtr& activation)
{
	// Resume the given activation in this activation group. If this is the
	// last suspended activation, then resume the associated region
	// activation.

	ActivityNodeActivationGroup::resume(activation);
	if (!this->isSuspended())
	{
		this->regionActivation->resume(this->thisExpansionActivationGroupPtr.lock());
	}
} // resume
