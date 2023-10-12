/*
 * OpaqueBehavior.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/commonbehavior/OpaqueBehavior.h>
#include <string>

void OpaqueBehavior::addBody(std::string body)
{
	this->body->push_back(body);
} // addBody

void OpaqueBehavior::addLanguage(std::string language)
{
	this->language->push_back(language);
} // addLanguage
