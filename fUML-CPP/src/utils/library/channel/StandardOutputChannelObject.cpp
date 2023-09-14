/*
 * StandardOutputChannelObject.cpp
 *
 *  Created on: 13.09.2023
 *      Author: maha6913
 */

#include <utils/library/channel/StandardOutputChannelObject.h>

#include <fuml/semantics/values/Value.h>
#include <iostream>
#include <utils/library/common/Status.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::channel;

StandardOutputChannelObject::StandardOutputChannelObject()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->StandardOutputChannel);
}

std::string StandardOutputChannelObject::getName()
{
	return "StandardOutput";
}

void StandardOutputChannelObject::open(const std::shared_ptr<fuml::library::common::Status>&)
{
	this->opened = true;
}

void StandardOutputChannelObject::close(const std::shared_ptr<fuml::library::common::Status>&)
{
	this->opened = false;
}

bool StandardOutputChannelObject::isOpen()
{
	return this->opened;
}

bool StandardOutputChannelObject::isFull()
{
	return false;
}

void StandardOutputChannelObject::write(const ValuePtr& value,
	const std::shared_ptr<fuml::library::common::Status>& errorStatus)
{
	this->writeString(value->toString(), errorStatus);
}

void StandardOutputChannelObject::writeString(std::string value,
	const std::shared_ptr<fuml::library::common::Status>& errorStatus)
{
	if (this->isOpen())
	{
		// CAUTION: the following line causes GNU debugger to crash when stepped over
		std::cout << value << std::flush;
	}
	else
	{
		errorStatus->setStatus("StandardOutputChannel", -1, "Not open");
	}
}

void StandardOutputChannelObject::writeNewLine(const std::shared_ptr<fuml::library::common::Status>& errorStatus)
{
	if (this->isOpen())
	{
		std::cout << std::endl;
	}
	else
	{
		errorStatus->setStatus("StandardOutputChannel", -1, "Not open");
	}
}

ValuePtr StandardOutputChannelObject::new_()
{
	std::shared_ptr<StandardOutputChannelObject> newValue(new StandardOutputChannelObject());
	newValue->setThisImplementationObjectPtr(newValue);
	return newValue;
}
