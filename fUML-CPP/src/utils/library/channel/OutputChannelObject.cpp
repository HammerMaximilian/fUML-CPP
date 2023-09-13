/*
 * OutputChannelObject.cpp
 *
 *  Created on: 13.09.2023
 *      Author: maha6913
 */

#include <utils/library/channel/OutputChannelObject.h>

#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/BooleanValue.h>
#include <utils/library/common/Status.h>
#include <utils/library/libraryclass/OperationExecution.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::channel;

OutputChannelObject::OutputChannelObject()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->OutputChannel);
}

OutputChannelObject::~OutputChannelObject()
{
}

void OutputChannelObject::execute(const std::shared_ptr<fuml::library::libraryclass::OperationExecution>& execution)
{
	std::string name = execution->getOperationName();

	if (name == "write")
	{
		std::shared_ptr<fuml::library::common::Status> status(
			new fuml::library::common::Status(this->locus, "OutputChannelObject"));
		this->write(execution->getParameterValue("value")->values->at(0), status);
		this->updateStatus(execution, status);
	}
	else if (name == "isFull")
	{
		BooleanValuePtr isFullValue(new BooleanValue());
		isFullValue->value = this->isFull();
		isFullValue->type = this->locus->factory->getBuiltInType("Boolean");
		execution->setReturnParameterValue(isFullValue);
	}
	else
	{
		ChannelObject::execute(execution);
	}
}
