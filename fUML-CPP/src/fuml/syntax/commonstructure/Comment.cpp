/*
 * Comment.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include "Comment.h"

#include "Element.h"
#include "ElementList.h"

using namespace fuml::syntax::commonstructure;

void Comment::setAnnotatedElement(
	const std::shared_ptr<fuml::syntax::commonstructure::Element>& annotatedElement)
{
	this->annotatedElement->push_back(annotatedElement);
} // setAnnotatedElement

void Comment::setBody(std::string body)
{
	this->body = body;
} // setBody
