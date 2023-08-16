/*
 * RedefinableElement.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include "RedefinableElement.h"

using namespace fuml::syntax::classification;

RedefinableElement::~RedefinableElement()
{
}

void RedefinableElement::setIsLeaf(bool isLeaf)
{
	this->isLeaf = isLeaf;
} // setIsLeaf

void RedefinableElement::addRedefinedElement(
	const std::shared_ptr<fuml::syntax::classification::RedefinableElement>& redefinedElement)
{
	this->redefinedElement->push_back(redefinedElement);
} // addRedefinedElement

void RedefinableElement::addRedefinitionContext(
	const std::shared_ptr<fuml::syntax::classification::Classifier>& redefinitionContext)
{
	this->redefinitionContext->push_back(redefinitionContext);
} // addRedefinitionContext
