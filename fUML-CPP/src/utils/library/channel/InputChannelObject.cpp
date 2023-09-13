/*
 * InputInputChannelObject.cpp
 *
 *  Created on: 13.09.2023
 *      Author: maha6913
 */

#include <utils/library/channel/InputChannelObject.h>

#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/BooleanValue.h>
#include <utils/library/common/Status.h>
#include <utils/library/libraryclass/OperationExecution.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::channel;

InputChannelObject::InputChannelObject()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->InputChannel);
}

InputChannelObject::~InputChannelObject()
{
}

void InputChannelObject::execute(const std::shared_ptr<fuml::library::libraryclass::OperationExecution>& execution)
{
	std::string name = execution->getOperationName();

	std::shared_ptr<fuml::library::common::Status> status(
		new fuml::library::common::Status(this->locus, "InputChannelObject"));

	if (name == "hasMore")
	{
		BooleanValuePtr hasMoreValue(new BooleanValue());
		hasMoreValue->value = this->hasMore();
		hasMoreValue->type = this->locus->factory->getBuiltInType("Boolean");
		execution->setReturnParameterValue(hasMoreValue);
	}
	else if (name == "read")
	{
		ValuePtr value = this->read(status);
		if (value != nullptr)
		{
			execution->setParameterValue("value", value);
		}
	}
	else if (name == "peek")
	{
		ValuePtr value = this->peek(status);
		if (value != nullptr)
		{
			execution->setParameterValue("value", value);
		}
	}
	else
	{
		ChannelObject::execute(execution);
	}
}
