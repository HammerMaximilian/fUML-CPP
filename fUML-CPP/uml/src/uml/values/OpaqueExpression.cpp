/*
 * OpaqueExpression.cpp
 *
 *  Created on: 03.01.2024
 *      Author: Maximilian
 */

#include <uml/values/OpaqueExpression.h>

void OpaqueExpression::addBody(std::string body)
{
	this->body->push_back(body);
}

void OpaqueExpression::addLanguage(std::string language)
{
	this->language->push_back(language);
}

void OpaqueExpression::setBehavior(const BehaviorPtr& behavior)
{
	this->behavior = behavior;
}
