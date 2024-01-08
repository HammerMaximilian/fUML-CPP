/*
 * Dependency.cpp
 *
 *  Created on: 03.01.2024
 *      Author: Maximilian
 */

#include <uml/commonstructure/Dependency.h>

void Dependency::setThisDependencyPtr(DependencyPtr_w thisDependencyPtr)
{
	this->thisDependencyPtr = thisDependencyPtr;
	Element::setThisElementPtr(thisDependencyPtr);
}

void Dependency::addClient(const NamedElementPtr& client)
{
	this->client->push_back(client);
	client->addClientDependency(thisDependencyPtr.lock());
}

void Dependency::addSupplier(const NamedElementPtr& supplier)
{
	this->supplier->push_back(supplier);
}
