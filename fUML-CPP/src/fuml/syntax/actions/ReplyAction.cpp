/*
 * ReplyAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/ReplyAction.h>
#include <vector>

using namespace fuml::syntax::actions;

void ReplyAction::setReplyToCall(
	const std::shared_ptr<fuml::syntax::commonbehavior::Trigger>& replyToCall)
{
	this->replyToCall = replyToCall;
}

void ReplyAction::addReplyValue(const std::shared_ptr<InputPin>& replyValue)
{
	Action::addInput(replyValue);
	this->replyValue->push_back(replyValue);
}

void ReplyAction::setReturnInformation(const std::shared_ptr<InputPin>& returnInformation)
{
	Action::addInput(returnInformation);
	this->returnInformation = returnInformation;
}
