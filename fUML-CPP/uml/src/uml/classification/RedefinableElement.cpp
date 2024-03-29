/*
 * RedefinableElement.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <uml/classification/RedefinableElement.h>

RedefinableElement::~RedefinableElement()
{
}

void RedefinableElement::setIsLeaf(bool isLeaf)
{
	this->isLeaf = isLeaf;
} // setIsLeaf

void RedefinableElement::addRedefinedElement(const RedefinableElementPtr& redefinedElement)
{
	this->redefinedElement->push_back(redefinedElement);
} // addRedefinedElement

void RedefinableElement::addRedefinitionContext(const ClassifierPtr& redefinitionContext)
{
	this->redefinitionContext->push_back(redefinitionContext);
} // addRedefinitionContext
