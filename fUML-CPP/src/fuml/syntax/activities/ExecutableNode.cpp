/*
 * ExecutableNode.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/activities/ExceptionHandler.h>
#include <fuml/syntax/activities/ExecutableNode.h>
#include <vector>

using namespace fuml::syntax::activities;

ExecutableNode::~ExecutableNode()
{
}

void ExecutableNode::setThisPtr(std::weak_ptr<ExecutableNode> thisExecutableNodePtr)
{
	this->thisExecutableNodePtr = thisExecutableNodePtr;
	fuml::syntax::commonstructure::Element::setThisPtr(thisExecutableNodePtr);
}

void ExecutableNode::addExceptionHandler(const std::shared_ptr<fuml::syntax::activities::ExceptionHandler>& handler)
{
	fuml::syntax::commonstructure::Element::addOwnedElement(handler);
	this->handler->push_back(handler);
	handler->protectedNode = thisExecutableNodePtr.lock();
}
