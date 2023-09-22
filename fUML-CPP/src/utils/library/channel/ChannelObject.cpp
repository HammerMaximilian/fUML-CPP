/*
 * ChannelObject.cpp
 *
 *  Created on: 13.09.2023
 *      Author: maha6913
 */

#include <utils/library/channel/ChannelObject.h>

#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/BooleanValue.h>
#include <fuml/semantics/simpleclassifiers/StringValue.h>
#include <utils/library/common/Status.h>
#include <utils/library/FoundationalModelLibraryModel.h>
#include <utils/library/libraryclass/OperationExecution.h>

using namespace fuml::library::channel;

ChannelObject::ChannelObject()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_Channel);
}

ChannelObject::~ChannelObject()
{
}

const std::shared_ptr<fuml::library::common::Status>& ChannelObject::getStatus()
{
	if (this->status != nullptr)
	{
		this->status.reset(new fuml::library::common::Status(this->locus, "ChannelObject"));
	}

	return this->status;
}

void ChannelObject::updateStatus(const std::shared_ptr<fuml::library::libraryclass::OperationExecution>& execution,
	const std::shared_ptr<fuml::library::common::Status>& status)
{
	if (!status->isNormal())
	{
		execution->setParameterValue("errorStatus", status->getValue());
	}

	this->status = status;
}

void ChannelObject::execute(const std::shared_ptr<fuml::library::libraryclass::OperationExecution>& execution)
{
	std::string name = execution->getOperationName();

	std::shared_ptr<fuml::library::common::Status> status(
		new fuml::library::common::Status(this->locus, "ChannelObject"));

	if (name == "getName")
	{
		StringValuePtr nameValue(new StringValue());
		nameValue->value = this->getName();
		nameValue->type = this->locus->factory->getBuiltInType("String");
		execution->setReturnParameterValue(nameValue);
	}
	else if (name == "open")
	{
		this->open(status);
		this->updateStatus(execution, status);
	}
	else if (name == "close")
	{
		this->close(status);
		this->updateStatus(execution, status);
	}
	else if (name == "isOpen")
	{
		BooleanValuePtr isOpenValue(new BooleanValue());
		isOpenValue->value = this->isOpen();
		isOpenValue->type = this->locus->factory->getBuiltInType("Boolean");
		execution->setReturnParameterValue(isOpenValue);
	}
	else if (name == "getStatus")
	{
		const std::shared_ptr<fuml::library::common::Status>& result = this->getStatus();
		execution->setReturnParameterValue(result->getValue());
	}
}
