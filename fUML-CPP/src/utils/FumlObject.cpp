/*
 * FumlObject.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include <utils/FumlObject.h>

using namespace utils;

std::string FumlObject::getXmiId() const
{
	return xmiId;
}

void FumlObject::setXmiId(std::string xmiId)
{
	this->xmiId = xmiId;
}

std::string FumlObject::getHref() const
{
	return href;
}

void FumlObject::setHref(std::string href)
{
	this->href = href;
}

std::string FumlObject::getXmiNamespace() const
{
	return xmiNamespace;
}

void FumlObject::setXmiNamespace(std::string _namespace)
{
	this->xmiNamespace = _namespace;
}


