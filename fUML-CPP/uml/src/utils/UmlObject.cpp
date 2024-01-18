/*
 * UmlObject.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include <functional>
#include <utils/UmlObject.h>

static size_t hashCode_(void* _addr);

using namespace uml;

UmlObject::~UmlObject()
{
}

std::string UmlObject::getXmiId() const
{
	return xmiId;
}

void UmlObject::setXmiId(std::string xmiId)
{
	this->xmiId = xmiId;
}

std::string UmlObject::getHref() const
{
	return href;
}

void UmlObject::setHref(std::string href)
{
	this->href = href;
}

std::string UmlObject::getXmiNamespace() const
{
	return xmiNamespace;
}

void UmlObject::setXmiNamespace(std::string _namespace)
{
	this->xmiNamespace = _namespace;
}

size_t UmlObject::hashCode()
{
	if (this->internalHash == 0)
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

