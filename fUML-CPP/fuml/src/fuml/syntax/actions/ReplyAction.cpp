/*
 * ReplyAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/ReplyAction.h>

void ReplyAction::setReplyToCall(const TriggerPtr& replyToCall)
{
	this->replyToCall = replyToCall;
}

void ReplyAction::addReplyValue(const InputPinPtr& replyValue)
{
	Action::addInput(replyValue);
	this->replyValue->push_back(replyValue);
}

void ReplyAction::setReturnInformation(const InputPinPtr& returnInformation)
{
	Action::addInput(returnInformation);
	this->returnInformation = returnInformation;
}
