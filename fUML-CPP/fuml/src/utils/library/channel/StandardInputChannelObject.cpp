/*
 * StandardInputChannelObject.cpp
 *
 *  Created on: 13.09.2023
 *      Author: maha6913
 */

#include <utils/library/channel/StandardInputChannelObject.h>

#include <utils/library/common/Status.h>
#include <utils/library/FoundationalModelLibraryModel.h>
#include <iostream>
#include <algorithm>

using namespace fuml::library::channel;

StandardInputChannelObject::StandardInputChannelObject()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_StandardInputChannel);
}

std::string StandardInputChannelObject::getName()
{
	return "StandardInput";
}

void StandardInputChannelObject::open(const std::shared_ptr<fuml::library::common::Status>& errorStatus)
{
	this->opened = true;
}

void StandardInputChannelObject::close(const std::shared_ptr<fuml::library::common::Status>& errorStatus)
{
	this->opened = false;
}

bool StandardInputChannelObject::isOpen()
{
	return this->isOpen();
}

bool StandardInputChannelObject::hasMore()
{
	return true;
}

ValuePtr StandardInputChannelObject::read(const std::shared_ptr<fuml::library::common::Status>& errorStatus)
{
	throw std::runtime_error("Unimplemented method");
}

ValuePtr StandardInputChannelObject::peek(const std::shared_ptr<fuml::library::common::Status>& errorStatus)
{
	throw std::runtime_error("Unimplemented method");
}

std::string StandardInputChannelObject::readCharacter(
	const std::shared_ptr<fuml::library::common::Status>& errorStatus)
{
	throw std::runtime_error("Unimplemented method");
}

std::string StandardInputChannelObject::peekCharacter(
	const std::shared_ptr<fuml::library::common::Status>& errorStatus)
{
	throw std::runtime_error("Unimplemented method");
}

std::string StandardInputChannelObject::readLine(
	const std::shared_ptr<fuml::library::common::Status>& errorStatus)
{
	if(this->opened)
	{
		//if(this->hasMore()) //always true by now
		//{
			std::string result = "";
			std::getline(std::cin, result);
			return result;
		//}
		//else
		//{
			//errorStatus->setStatus("StandardInputChannel", -2, "Not input");
			//return "";
		//}
	}
	else
	{
		errorStatus->setStatus("StandardInputChannel", -1, "Not opened");
		return "";
	}
}

bool StandardInputChannelObject::readBoolean(
	const std::shared_ptr<fuml::library::common::Status>& errorStatus)
{
	if(this->opened)
	{
		std::string s = this->readLine(errorStatus);

		std::string lowerStr = s;
		std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);

		if (lowerStr == "true")
		{
			return true;
		}
		else if (lowerStr == "false")
		{
			return false;
		}
		else
		{
			errorStatus->setStatus("StandardInputChannel", -3, "Cannot Convert");
			return false;
		}
	}
	else
	{
		errorStatus->setStatus("StandardInputChannel", -1, "Not opened");
		return false;
	}
}

int StandardInputChannelObject::readInteger(
	const std::shared_ptr<fuml::library::common::Status>& errorStatus)
{
	if(this->opened)
	{
		std::string s = this->readLine(errorStatus);

		try
		{
			return std::stoi(s);
		}
		catch (...)
		{
			errorStatus->setStatus("StandardInputChannel", -3, "Cannot Convert");
			return INT_MIN;
		}
	}
	else
	{
		errorStatus->setStatus("StandardInputChannel", -1, "Not opened");
		return INT_MIN;
	}
}

float StandardInputChannelObject::readReal(
	const std::shared_ptr<fuml::library::common::Status>& errorStatus)
{
	if(this->opened)
	{
		std::string s = this->readLine(errorStatus);

		try
		{
			return std::stof(s);
		}
		catch (...)
		{
			errorStatus->setStatus("StandardInputChannel", -3, "Cannot Convert");
			return INT_MIN;
		}
	}
	else
	{
		errorStatus->setStatus("StandardInputChannel", -1, "Not opened");
		return INT_MIN;
	}
}

UMLPrimitiveTypes::unlimitedNatural StandardInputChannelObject::readUnlimitedNatural(
	const std::shared_ptr<fuml::library::common::Status>& errorStatus)
{
	return this->readInteger(errorStatus);
}

ValuePtr StandardInputChannelObject::new_()
{
	std::shared_ptr<StandardInputChannelObject> newValue(new StandardInputChannelObject());
	newValue->setThisImplementationObjectPtr(newValue);
	return newValue;
}
