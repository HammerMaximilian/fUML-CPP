/*
 * ExecutableNode.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/activities/ExceptionHandler.h>
#include <fuml/syntax/activities/ExecutableNode.h>

ExecutableNode::~ExecutableNode()
{
}

void ExecutableNode::setThisExecutableNodePtr(std::weak_ptr<ExecutableNode> thisExecutableNodePtr)
{
	this->thisExecutableNodePtr = thisExecutableNodePtr;
	Element::setThisElementPtr(thisExecutableNodePtr);
}

void ExecutableNode::addExceptionHandler(const ExceptionHandlerPtr& handler)
{
	Element::addOwnedElement(handler);
	this->handler->push_back(handler);
	handler->protectedNode = thisExecutableNodePtr.lock();
}
