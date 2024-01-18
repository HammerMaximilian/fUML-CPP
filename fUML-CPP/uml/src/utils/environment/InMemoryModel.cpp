/*
 * InMemoryModel.cpp
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#include <utils/environment/InMemoryModel.h>

#include <utils/UmlObject.h>

using namespace uml::environment;

InMemoryModel::~InMemoryModel()
{
}

void InMemoryModel::addToElementRepository(std::string name, const std::shared_ptr<uml::UmlObject>& object)
{
	this->elementRepository[name] = object;
}

std::shared_ptr<uml::UmlObject> InMemoryModel::findElementByName(std::string name)
{
	try
	{
		std::shared_ptr<uml::UmlObject> element = this->elementRepository.at(name);
		return element;
	}
	catch(...)
	{
		return nullptr;
	}
}
