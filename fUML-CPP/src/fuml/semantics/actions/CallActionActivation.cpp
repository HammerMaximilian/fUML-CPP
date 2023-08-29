/*
 * CallActionActivation.cpp
 *
 *  Created on: 29.08.2023
 *      Author: maha6913
 */

#include <fuml/semantics/actions/CallActionActivation.h>

#include <fuml/semantics/actions/InputPinActivation.h>
#include <fuml/semantics/actions/PinStreamingParameterListener.h>
#include <fuml/semantics/commonbehavior/Execution.h>
#include <fuml/semantics/commonbehavior/StreamingParameterValue.h>
#include <fuml/syntax/actions/CallAction.h>
#include <fuml/syntax/actions/InputPin.h>
#include <fuml/syntax/actions/OutputPin.h>
#include <fuml/syntax/classification/Parameter.h>
#include <fuml/syntax/commonbehavior/Behavior.h>

CallActionActivation::~CallActionActivation()
{
}

void CallActionActivation::initialize(const ActivityNodePtr &node,
		const ActivityNodeActivationGroupPtr &group)
{
	// Initialize this call action activation to be not streaming.

	ActionActivation::initialize(node, group);
	this->isStreaming = false;
} // initialize

bool CallActionActivation::isReady()
{
	// Check that this call action activation is ready to fire, accounting for
	// the possibility of pins corresponding to streaming parameters. In order
	// to be ready, only argument pin activations for non-streaming parameters must
	// be ready, except if all the argument pin activations are for streaming
	// parameters with multiplicity lower bound greater than 0, in which case
	// at least one of those pins must have an offered value.

	bool ready = this->isControlReady();

	CallActionPtr callAction = std::dynamic_pointer_cast<CallAction>(
			this->node);
	InputPinListPtr argumentPins = callAction->argument;

	if (ready && argumentPins->size() > 0)
	{
		ParameterListPtr parameters = this->getParameters();
		ParameterListPtr inputParameters(new ParameterList());
		for (const ParameterPtr &parameter : *parameters)
		{
			if (parameter->direction == ParameterDirectionKind::in
					|| parameter->direction == ParameterDirectionKind::inout)
			{
				inputParameters->push_back(parameter);
			}
		}

		bool streamingReady = false;
		unsigned int j = 1;
		unsigned int argumentPinsSize = argumentPins->size();
		unsigned int inputParametersSize = inputParameters->size();
		while (ready && j <= argumentPinsSize)
		{
			const InputPinPtr &argumentPin = argumentPins->at(j - 1);
			InputPinActivationPtr pinActivation = std::dynamic_pointer_cast<
					InputPinActivation>(this->getPinActivation(argumentPin));
			if (j > inputParametersSize)
			{
				ready = pinActivation->isReady();
			}
			bool isStream = false;
			if (j <= inputParametersSize)
			{
				isStream = inputParameters->at(j - 1)->isStream;
			}
			if (!isStream)
			{
				// If there are any non-streaming argument pins, then streaming
				// is considered to be ready.
				streamingReady = true;

				// All non-streaming argument pins must be ready.
				ready = pinActivation->isReady();
			}
			else if (pinActivation->isReadyForStreaming())
			{
				// If there are only streaming argument pins, then streaming
				// is ready if any of them are ready for streaming.
				streamingReady = true;
			}
			j = j + 1;
		}

		ready = ready & streamingReady;
	}

	return ready;
} // isReady

void CallActionActivation::doAction()
{
	// Get the call execution object, set its input parameters from the
	// argument pins and execute it.
	// If there are no streaming input parameters, then, once execution completes,
	// if the execution raised an exception, then propagate the exception.
	// Otherwise, copy the values of the output parameters of the call execution to
	// the result pins of the call action execution. In either case, destroy the
	// execution.
	// If there are streaming input parameters, then leave the call execution object
	// in place to process any additional inputs that may be posted to the streaming
	// input parameters.

	ExecutionPtr callExecution = this->getCallExecution();

	if (callExecution != nullptr)
	{
		this->callExecutions->push_back(callExecution);

		CallActionPtr callAction = std::dynamic_pointer_cast<CallAction>(
				this->node);
		InputPinListPtr argumentPins = callAction->argument;
		OutputPinListPtr resultPins = callAction->result;

		// Must get parameters from call execution behavior, to ensure the correct
		// parameters are used for an operation method.
		const ParameterListPtr &parameters =
				callExecution->getBehavior()->ownedParameter;

		unsigned int pinNumber = 1;
		unsigned int outputPinNumber = 1;
		InputPinActivationPtr streamingPinActivation = nullptr;
		this->nonStreamingOutputPins->clear();
		this->nonStreamingOutputParameters->clear();
		for (const ParameterPtr &parameter : *parameters)
		{
			if (parameter->direction == ParameterDirectionKind::in
					|| parameter->direction == ParameterDirectionKind::inout)
			{
				const InputPinPtr &argumentPin = argumentPins->at(
						pinNumber - 1);
				ParameterValuePtr parameterValue;
				if (parameter->isStream)
				{
					parameterValue.reset(new StreamingParameterValue());
					parameterValue->values = this->getTokens(argumentPin);
					streamingPinActivation = std::dynamic_pointer_cast<
							InputPinActivation>(
							this->getPinActivation(argumentPin));
					streamingPinActivation->streamingParameterValue =
							std::dynamic_pointer_cast<StreamingParameterValue>(
									parameterValue);
				}
				else
				{
					parameterValue.reset(new ParameterValue());
					parameterValue->values = this->takeTokens(argumentPin);
				}
				parameterValue->parameter = parameter;
				callExecution->setParameterValue(parameterValue);
				pinNumber = pinNumber + 1;
			}
			if (parameter->direction == ParameterDirectionKind::out
					|| parameter->direction == ParameterDirectionKind::inout
					|| parameter->direction == ParameterDirectionKind::return_)
			{
				OutputPinPtr resultPin = resultPins->at(outputPinNumber - 1);
				if (!parameter->isStream)
				{
					this->nonStreamingOutputPins->push_back(resultPin);
					this->nonStreamingOutputParameters->push_back(parameter);
				}
				else
				{
					ParameterValuePtr parameterValue(
							new StreamingParameterValue());
					parameterValue->parameter = parameter;
					PinStreamingParameterListenerPtr listener(
							new PinStreamingParameterListener());
					listener->nodeActivation = this->getPinActivation(
							resultPin);
					std::dynamic_pointer_cast<StreamingParameterValue>(
							parameterValue)->register_(listener);

					// Note: Add a new parameter value, so that there will
					// be two separate input and output parameter values for a
					// streaming inout parameter.
					callExecution->parameterValues->push_back(parameterValue);
				}
				outputPinNumber = outputPinNumber + 1;
			}
		}

		callExecution->execute();

		if (streamingPinActivation == nullptr)
		{
			this->isStreaming = false;
		}
		else
		{
			this->isStreaming =
					!streamingPinActivation->streamingIsTerminated();
		}

		if (!this->isStreaming)
		{
			this->completeCall(callExecution);
		}
	}
} // doAction

TokenListPtr CallActionActivation::completeAction()
{
	// If this call action activation is not streaming, then complete the action
	// normally. Otherwise, complete the action without checking for firing again
	// (but keep the call execution running).

	TokenListPtr incomingTokens;
	if (this->isStreaming)
	{
		incomingTokens.reset(new TokenList());
	}
	else
	{
		incomingTokens = ActionActivation::completeAction();
	}
	return incomingTokens;
} // completeAction

void CallActionActivation::completeCall(const ExecutionPtr &callExecution)
{
	// If the call execution raised an exception, then propagate it. Otherwise,
	// copy the values of the non-streaming output parameters of the call execution
	// to the corresponding result pin activations of the call action activation.
	// In either case, destroy the execution.

	if (callExecution->exception != nullptr)
	{
		this->propagateException(callExecution->exception);
	}
	else
	{
		const OutputPinListPtr &resultPins = this->nonStreamingOutputPins;
		const ParameterListPtr &parameters = this->nonStreamingOutputParameters;

		ParameterValueListPtr outputParameterValues =
				callExecution->getOutputParameterValues();

		unsigned int resultPinsSize = resultPins->size();

		for (unsigned int i = 0; i < resultPinsSize; i++)
		{
			const OutputPinPtr &resultPin = resultPins->at(i);
			const ParameterPtr &parameter = parameters->at(i);
			for (const ParameterValuePtr &outputParameterValue : *outputParameterValues)
			{
				if (outputParameterValue->parameter == parameter)
				{
					this->putTokens(resultPin, outputParameterValue->values);
				}
			}
		}
	}

	callExecution->destroy();
	this->removeCallExecution(callExecution);
} // completeCall

void CallActionActivation::completeStreamingCall()
{
	// Complete a streaming call execution and then complete this call action activation.

	if (this->callExecutions->size() > 0)
	{
		// Note: If the call is streaming, then isLocallyReentrant = false and
		// there should be at most one call execution.
		this->completeCall(this->callExecutions->at(0));
		ActionActivation::completeAction();
	}
} // completeStreamingCall

OutputPinListPtr CallActionActivation::getOfferingOutputPins()
{
	// Only send offers from output pins that correspond to non-streaming parameters.

	return this->nonStreamingOutputPins;
} // getOfferingOutputPins

void CallActionActivation::terminate()
{
	// Terminate all call executions (if any). If this call action
	// activation is streaming, complete the call before terminating the call
	// execution. Finally, terminate the call action activation itself.

	if (this->isStreaming)
	{
		this->completeStreamingCall();
	}
	else
	{
		for (const ExecutionPtr &execution : *(this->callExecutions))
		{
			execution->terminate();
		}
	}

	ActionActivation::terminate();
}

void CallActionActivation::removeCallExecution(const ExecutionPtr &execution)
{
	// Remove the given execution from the current list of call executions.

	const ExecutionListPtr &callExecutions = this->callExecutions;
	ExecutionList::iterator it = callExecutions->begin();
	ExecutionList::iterator endIt = callExecutions->end();

	for (; it != endIt; it++)
	{
		if (*it == execution)
		{
			callExecutions->erase(it);
			break;
		}
	}
} // removeCallExecution
