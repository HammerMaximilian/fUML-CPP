/*
 * InputPinActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/InputPinActivation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/actions/CallActionActivation.h>
#include <fuml/semantics/activities/Token.h>
#include <fuml/semantics/commonbehavior/StreamingParameterValue.h>
#include <fuml/syntax/actions/InputPin.h>

void InputPinActivation::receiveOffer()
{
	// If this pin activation is streaming, then accept offered tokens
	// up to the multiplicity upper bound of the pin and fire on the
	// accepted tokens.
	// If the pin activation is not streaming, then forward the offer
	// to the action activation. (When all input pins are ready, the
	// action will fire them.)

	if (this->isStreaming())
	{
		ActivityNodeActivation::receiveOffer();
	}
	else
	{
		this->actionActivation->receiveOffer();
	}
} // receiveOffer

void InputPinActivation::fire(const TokenListPtr& incomingTokens)
{
	// Add all incoming tokens to the pin.
	// If the pin activation is streaming, and there are incoming tokens,
	// then post the values from the tokens to the streaming parameter value.
	// Then check if the streaming parameter value has terminated and, if so,
	// terminate the action activation.

	PinActivation::fire(incomingTokens);

	if (this->isStreaming() && incomingTokens->size() > 0)
	{
		ValueListPtr values(new ValueList());
		for (const TokenPtr& token : *incomingTokens)
		{
			ValuePtr value = token->getValue();
			if (value != nullptr)
			{
				values->push_back(value);
			}
		}
		this->streamingParameterValue->post(values);

		if (this->streamingIsTerminated())
		{
			CallActionActivationPtr callActionActivation = std::dynamic_pointer_cast<CallActionActivation>(
				this->actionActivation);
			if (callActionActivation)
			{
				callActionActivation->completeStreamingCall();
			}
		}
	}
} // fire

bool InputPinActivation::isReady()
{
	// If this pin activation is not streaming, then return true if the total
	// number of values already being offered by the pin plus those being
	// offered by the sources of incoming edges is at least equal to the
	// minimum multiplicity of the pin.
	// If this pin activation is streaming, then return true if the minimum
	// multiplicity is zero or if there is at least one offered value.

	bool ready = ActivityNodeActivation::isReady();
	if (ready)
	{
		int minimum = std::dynamic_pointer_cast<Pin>(this->node)->lower;
		if (this->isStreaming())
		{
			if (minimum > 0)
			{
				minimum = 1;
			}
		}
		ready = this->getTotalValueCount() >= minimum;
	}

	return ready;
} // isReady

bool InputPinActivation::isReadyForStreaming()
{
	// Return true if this pin activation is ready assuming that it
	// corresponds to a streaming parameter. In this case, it is
	// ready if it has a lower multiplicity bound of zero, or if
	// there is at least one offered value.

	return ActivityNodeActivation::isReady()
		&& (std::dynamic_pointer_cast<Pin>(this->node)->lower == 0 || getTotalValueCount() >= 1);
} // isReadyForStreaming

bool InputPinActivation::isStreaming()
{
	// Return true if this pin activation is for a pin that corresponds
	// to a streaming input parameter.

	return this->streamingParameterValue != nullptr;
} // isStreaming

bool InputPinActivation::streamingIsTerminated()
{
	bool isTerminated = false;

	_beginIsolation();
	isTerminated = this->streamingParameterValue->isTerminated();
	fuml::Debug::println("[streamingIsTerminated] isTerminated = " + isTerminated);
	_endIsolation();

	return isTerminated;
} // streamingIsTerminated

int InputPinActivation::getTotalValueCount()
{
	// Return the total number of values already being offered by the
	// pin plus those being offered by the sources of incoming edges.

	return this->countUnofferedTokens() + this->countOfferedValues();
} // getTotalValueCount
