/*
 * LoopNodeActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/LoopNodeActivation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/actions/OutputPinActivation.h>
#include <fuml/semantics/actions/Values.h>
#include <fuml/semantics/activities/ActivityNodeActivationGroup.h>
#include <fuml/semantics/simpleclassifiers/BooleanValue.h>
#include <uml/actions/LoopNode.h>
#include <uml/actions/OutputPin.h>

void fuml::semantics::actions::LoopNodeActivation::setThisLoopNodeActivationPtr(
	LoopNodeActivationPtr_w thisLoopNodeActivationPtr)
{
	this->thisLoopNodeActivationPtr = thisLoopNodeActivationPtr;
	StructuredActivityNodeActivation::setThisStructuredActivityNodeActivationPtr(thisLoopNodeActivationPtr);
}

void LoopNodeActivation::doStructuredActivity()
{
	// Set the initial values for the body outputs to the values of the loop
	// variable input pins.
	// If isTestedFirst is true, then repeatedly run the test part and the
	// body part of the loop, copying values from the body outputs to the
	// loop variables.
	// If isTestedFirst is false, then repeatedly run the body part and the
	// test part of the loop, copying values from the body outputs to the
	// loop variables.
	// When the test fails, copy the values of the body outputs to the loop
	// outputs.
	// [Note: The body outputs are used for the loop outputs, rather than
	// the loop variables, since values on the loop variables may be
	// consumed when running the test for the last time.]

	LoopNodePtr loopNode = std::dynamic_pointer_cast<LoopNode>(this->node);
	const InputPinListPtr& loopVariableInputs = loopNode->loopVariableInput;

	this->bodyOutputLists->clear();
	for (const InputPinPtr& loopVariableInput : *loopVariableInputs)
	{
		ValuesPtr bodyOutputList(new Values());
		bodyOutputList->values = this->takeTokens(loopVariableInput);
		this->bodyOutputLists->push_back(bodyOutputList);
	}

	this->isTerminateAll = false;
	this->doLoop(true);
} // doStructuredActivity

void LoopNodeActivation::doLoop(bool continuing)
{
	// If isTestedFirst is true, then repeatedly run the test part and the
	// body part of the loop, copying values from the body outputs to the
	// loop variables.
	// If isTestedFirst is false, then repeatedly run the body part and the
	// test part of the loop, copying values from the body outputs to the
	// loop variables.

	LoopNodePtr loopNode = std::dynamic_pointer_cast<LoopNode>(this->node);
	const OutputPinListPtr& loopVariables = loopNode->loopVariable;
	const OutputPinListPtr& resultPins = loopNode->result;

	while (continuing)
	{
		// Set loop variable values
		this->runLoopVariables();
		unsigned int loopVariablesSize = loopVariables->size();
		for (unsigned int i = 0; i < loopVariablesSize; i++)
		{
			const OutputPinPtr& loopVariable = loopVariables->at(i);
			const ValuesPtr& bodyOutputList = bodyOutputLists->at(i);
			const ValueListPtr& values = bodyOutputList->values;
			this->putPinValues(loopVariable, values);
			std::dynamic_pointer_cast<OutputPinActivation>(this->activationGroup->getNodeActivation(loopVariable))
				->sendUnofferedTokens();
		}

		// Run all the non-executable, non-pin nodes in the conditional
		// node.
		const ActivityNodeActivationListPtr& nodeActivations = this->activationGroup->nodeActivations;
		ActivityNodeActivationListPtr nonExecutableNodeActivations(new ActivityNodeActivationList());
		for (const ActivityNodeActivationPtr& nodeActivation : *nodeActivations)
		{
			ExecutableNodePtr executableNode = std::dynamic_pointer_cast<ExecutableNode>(nodeActivation->node);
			PinPtr pin = std::dynamic_pointer_cast<Pin>(nodeActivation->node);

			if (!(executableNode || pin))
			{
				nonExecutableNodeActivations->push_back(nodeActivation);
			}
		}
		this->activationGroup->run(nonExecutableNodeActivations);

		// Run the loop
		if (loopNode->isTestedFirst)
		{
			continuing = this->runTest();
			if (continuing)
			{
				this->runBody();
			}
		}
		else
		{
			this->runBody();
			if (this->isRunning() & !this->isSuspended())
			{
				continuing = this->runTest();
			}
		}

		if (!this->isTerminateAll & this->isRunning() & !this->isSuspended())
		{
			this->activationGroup->terminateAll();
		}
		else
		{
			continuing = false;
		}

		std::string state = (continuing ? "Continuing." : (this->isSuspended() ? "Suspended" : "Done."));
		fuml::Debug::println("[doStructuredActivity] " + state);

	}

	if (!this->isTerminateAll & this->isRunning() & !this->isSuspended())
	{
		unsigned int bodyOutputListsSize = bodyOutputLists->size();
		for (unsigned int i = 0; i < bodyOutputListsSize; i++)
		{
			const ValuesPtr& bodyOutputList = bodyOutputLists->at(i);
			const OutputPinPtr& resultPin = resultPins->at(i);
			this->putTokens(resultPin, bodyOutputList->values);
		}
	}
} // doLoop

bool LoopNodeActivation::runTest()
{
	// Run the test part of the loop node for this node activation.
	// Return the value on the decider pin.

	fuml::Debug::println("[runTest] Running test...");

	LoopNodePtr loopNode = std::dynamic_pointer_cast<LoopNode>(this->node);

	this->activationGroup->runNodes(this->makeActivityNodeList(loopNode->test));

	ValueListPtr values = this->getPinValues(loopNode->decider);

	// If there is no decider value, treat it as false.
	bool decision = false;
	if (values->size() > 0)
	{
		decision = std::dynamic_pointer_cast<BooleanValue>(values->at(0))->value;
	}

	std::string testFailed = (decision ? "Test succeeded." : "Test failed.");
	fuml::Debug::println("[runTest] " + testFailed);

	return decision;
} // runTest

void LoopNodeActivation::runBody()
{
	// Run the body part of the loop node for this node activation and save
	// the body outputs.

	fuml::Debug::println("[runBody] Running body...");

	LoopNodePtr loopNode = std::dynamic_pointer_cast<LoopNode>(this->node);

	this->activationGroup->runNodes(this->makeActivityNodeList(loopNode->bodyPart));

	if (!this->isTerminateAll & !this->isSuspended())
	{
		this->saveBodyOutputs();
	}
} // runBody

void LoopNodeActivation::saveBodyOutputs()
{
	// Save the body outputs for use in the next iteration.

	LoopNodePtr loopNode = std::dynamic_pointer_cast<LoopNode>(this->node);
	const OutputPinListPtr& bodyOutputs = loopNode->bodyOutput;
	const ValuesListPtr& bodyOutputLists = this->bodyOutputLists;
	unsigned int bodyOutputsSize = bodyOutputs->size();
	for (unsigned int i = 0; i < bodyOutputsSize; i++)
	{
		const OutputPinPtr& bodyOutput = bodyOutputs->at(i);
		const ValuesPtr& bodyOutputList = bodyOutputLists->at(i);
		bodyOutputList->values = this->getPinValues(bodyOutput);
	}
} // saveBodyOutputs

void LoopNodeActivation::runLoopVariables()
{
	// Run the loop variable pins of the loop node for this node activation.

	this->activationGroup->runNodes(this->makeLoopVariableList());
} // runLoopVariables

void LoopNodeActivation::createNodeActivations()
{
	// In addition to creating activations for contained nodes, create
	// activations for any loop variables.

	StructuredActivityNodeActivation::createNodeActivations();
	this->activationGroup->createNodeActivations(this->makeLoopVariableList());
} // createNodeActivations

ActivityNodeListPtr LoopNodeActivation::makeLoopVariableList()
{
	// Return an activity node list containing the loop variable pins for
	// the loop node of this activation.

	LoopNodePtr loopNode = std::dynamic_pointer_cast<LoopNode>(this->node);
	ActivityNodeListPtr nodes(new ActivityNodeList());

	const OutputPinListPtr& loopVariables = loopNode->loopVariable;
	for (const OutputPinPtr& loopVariable : *loopVariables)
	{
		nodes->push_back(loopVariable);
	}

	return nodes;
} // makeLoopVariableList

void LoopNodeActivation::terminateAll()
{
	// Copy the values of the body outputs to the loop outputs, and then
	// terminate all activations in the loop.

	this->isTerminateAll = true;

	LoopNodePtr loopNode = std::dynamic_pointer_cast<LoopNode>(this->node);
	const OutputPinListPtr& bodyOutputs = loopNode->bodyOutput;
	const OutputPinListPtr& resultPins = loopNode->result;
	unsigned int bodyOutputsSize = bodyOutputs->size();
	for (unsigned int i = 0; i < bodyOutputsSize; i++)
	{
		const OutputPinPtr& bodyOutput = bodyOutputs->at(i);
		const OutputPinPtr& resultPin = resultPins->at(i);
		this->putTokens(resultPin, this->getPinValues(bodyOutput));
	}

	StructuredActivityNodeActivation::terminateAll();
} // terminateAll

void LoopNodeActivation::resume()
{
	// When this loop node is resumed after being suspended, continue with
	// its next iteration (if any). Once the loop has completed execution
	// without being suspended again, complete the action.

	LoopNodePtr loopNode = std::dynamic_pointer_cast<LoopNode>(this->node);

	this->saveBodyOutputs();

	if (!this->isTerminateAll)
	{
		if (loopNode->mustIsolate)
		{
			_beginIsolation();
			this->continueLoop();
			_endIsolation();
		}
		else
		{
			this->continueLoop();
		}
	}

	if (this->isSuspended())
	{
		// NOTE: If the subsequent iteration of the loop suspends it again,
		// then it is necessary to remove the previous suspension from the
		// containing activity node activation group.
		this->group.lock()->resume(this->thisLoopNodeActivationPtr.lock());
	}
	else
	{
		StructuredActivityNodeActivation::resume();
	}
} // resume

void LoopNodeActivation::continueLoop()
{
	// Continue the loop node when it is resumed after being suspended. If
	// isTestedFirst is true, then continue executing the loop. If
	// isTestedFirst is false, then run the test to determine whether
	// the loop should be continued or completed.
	// [Note that this presumes that an accept event action is not allowed
	// in the test part of a loop node.]

	LoopNodePtr loopNode = std::dynamic_pointer_cast<LoopNode>(this->node);

	bool continuing = true;
	if (!loopNode->isTestedFirst)
	{
		continuing = this->runTest();
	}

	if (this->isRunning())
	{
		this->activationGroup->terminateAll();
		this->doLoop(continuing);
	}
} // continueLoop
