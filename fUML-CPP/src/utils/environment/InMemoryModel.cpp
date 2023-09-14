/*
 * InMemoryModel.cpp
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#include <utils/environment/InMemoryModel.h>

#include <utils/FumlObject.h>

using namespace fuml::environment;

InMemoryModel::~InMemoryModel()
{
}

void InMemoryModel::addToElementRepository(std::string name, const std::shared_ptr<fuml::FumlObject>& object)
{
	this->elementRepository[name] = object;
}

std::shared_ptr<fuml::FumlObject> InMemoryModel::findElementByName(std::string name)
{
	try
	{
		std::shared_ptr<fuml::FumlObject> element = this->elementRepository.at(name);
		return element;
	}
	catch(...)
	{
		return nullptr;
	}
}
