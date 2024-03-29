/*
 * ExecutableNode.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <uml/activities/ExceptionHandler.h>
#include <uml/activities/ExecutableNode.h>

ExecutableNode::~ExecutableNode()
{
}

void ExecutableNode::setThisExecutableNodePtr(ExecutableNodePtr_w thisExecutableNodePtr)
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
