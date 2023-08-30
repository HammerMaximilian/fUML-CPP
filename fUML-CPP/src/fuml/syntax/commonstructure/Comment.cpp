/*
 * Comment.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include <fuml/syntax/commonstructure/Comment.h>

void Comment::setAnnotatedElement(const ElementPtr& annotatedElement)
{
	this->annotatedElement->push_back(annotatedElement);
} // setAnnotatedElement

void Comment::setBody(std::string body)
{
	this->body = body;
} // setBody
