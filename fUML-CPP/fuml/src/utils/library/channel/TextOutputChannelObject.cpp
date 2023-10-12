/*
 * TextOutputChannelObject.cpp
 *
 *  Created on: 13.09.2023
 *      Author: maha6913
 */

#include <utils/library/channel/TextOutputChannelObject.h>

#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/BooleanValue.h>
#include <fuml/semantics/simpleclassifiers/IntegerValue.h>
#include <fuml/semantics/simpleclassifiers/RealValue.h>
#include <fuml/semantics/simpleclassifiers/StringValue.h>
#include <fuml/semantics/simpleclassifiers/UnlimitedNaturalValue.h>
#include <utils/library/common/Status.h>
#include <utils/library/FoundationalModelLibraryModel.h>
#include <utils/library/libraryclass/OperationExecution.h>

using namespace fuml::library::channel;

TextOutputChannelObject::TextOutputChannelObject()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_TextOutputChannel);
}

TextOutputChannelObject::~TextOutputChannelObject()
{
}

void TextOutputChannelObject::writeLine(std::string value,
	const std::shared_ptr<fuml::library::common::Status>& errorStatus)
{
	this->writeString(value, errorStatus);
	this->writeNewLine(errorStatus);
}

void TextOutputChannelObject::writeInteger(int value, const std::shared_ptr<fuml::library::common::Status>& errorStatus)
{
	this->writeString(std::to_string(value), errorStatus);
}

void TextOutputChannelObject::writeReal(float value, const std::shared_ptr<fuml::library::common::Status>& errorStatus)
{
	this->writeString(std::to_string(value), errorStatus);
}

void TextOutputChannelObject::writeBoolean(bool value,
	const std::shared_ptr<fuml::library::common::Status>& errorStatus)
{
	this->writeString((value) ? "true" : "false", errorStatus);
}

void TextOutputChannelObject::writeUnlimitedNatural(UMLPrimitiveTypes::unlimitedNatural value,
	const std::shared_ptr<fuml::library::common::Status>& errorStatus)
{
	if (value < 0)
	{
		this->writeString("*", errorStatus);
	}
	else
	{
		this->writeString(std::to_string(value), errorStatus);
	}
}

void TextOutputChannelObject::execute(const std::shared_ptr<fuml::library::libraryclass::OperationExecution>& execution)
{
	std::string name = execution->getOperationName();

	ParameterValuePtr parameterValue = execution->getParameterValue("value");

	std::shared_ptr<fuml::library::common::Status> status(
		new fuml::library::common::Status(this->locus, "TextOutputChannelObject"));

	if (name == "writeNewLine")
	{
		this->writeNewLine(status);
		this->updateStatus(execution, status);
	}
	else if (name == "writeString")
	{
		this->writeString(std::dynamic_pointer_cast<StringValue>(parameterValue->values->at(0))->value, status);
		this->updateStatus(execution, status);
	}
	else if (name == "writeLine")
	{
		this->writeLine(std::dynamic_pointer_cast<StringValue>(parameterValue->values->at(0))->value, status);
		this->updateStatus(execution, status);
	}
	else if (name == "writeInteger")
	{
		this->writeInteger(std::dynamic_pointer_cast<IntegerValue>(parameterValue->values->at(0))->value, status);
		this->updateStatus(execution, status);
	}
	else if (name == "writeReal")
	{
		this->writeReal(std::dynamic_pointer_cast<RealValue>(parameterValue->values->at(0))->value, status);
		this->updateStatus(execution, status);
	}
	else if (name == "writeBoolean")
	{
		this->writeBoolean(std::dynamic_pointer_cast<BooleanValue>(parameterValue->values->at(0))->value, status);
		this->updateStatus(execution, status);
	}
	else if (name == "writeUnlimitedNatural")
	{
		this->writeUnlimitedNatural(
			std::dynamic_pointer_cast<UnlimitedNaturalValue>(parameterValue->values->at(0))->value, status);
		this->updateStatus(execution, status);
	}
	else
	{
		OutputChannelObject::execute(execution);
	}
}
