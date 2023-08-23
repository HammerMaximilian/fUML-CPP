/*
 * FumlObject.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include <utils/FumlObject.h>
#include <functional>

static size_t hashCode_(void* _addr);

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

size_t FumlObject::hashCode()
{
	if(this->internalHash == 0)
	{
		this->internalHash = hashCode_(this);
	}

	return this->internalHash;
}

static size_t hashCode_(void* _addr)
{
	std::hash<void*> hasher;
	return hasher(_addr);
}

