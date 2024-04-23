/*
 * Status.cpp
 *
 *  Created on: 13.09.2023
 *      Author: maha6913
 */

#include <utils/library/common/Status.h>

#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/DataValue.h>
#include <fuml/semantics/simpleclassifiers/IntegerValue.h>
#include <fuml/semantics/simpleclassifiers/StringValue.h>
#include <uml/classification/Property.h>
#include <uml/simpleclassifiers/DataType.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::common;

DataTypePtr Status::statusType;

Status::Status(const LocusPtr& locus, std::string context, int code, std::string description)
{
	this->setPrimitiveTypes(locus);
	this->setStatus(context, code, description);
}

Status::Status(const LocusPtr& locus, std::string context)
{
	this->setPrimitiveTypes(locus);
	this->setStatus(context, 0, "Normal");
}

void Status::setPrimitiveTypes(const LocusPtr& locus)
{
	this->stringType = locus->factory->getBuiltInType("String");
	this->integerType = locus->factory->getBuiltInType("Integer");
}

const DataTypePtr& Status::getStatusType()
{
	if (statusType == nullptr)
	{
		statusType = fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status;
	}
	return statusType;
}

void Status::setStatusType(const DataTypePtr& type)
{
	statusType = type;
}

bool Status::isNormal()
{
	return this->code == 0;
}

void Status::setStatus(std::string context, int code, std::string description)
{
	this->context = context;
	this->code = code;
	this->description = description;
}

std::string Status::getContext()
{
	return this->context;
}

int Status::getCode()
{
	return this->code;
}

std::string Status::getDescription()
{
	return this->description;
}

ValuePtr Status::getValue()
{
	DataValuePtr value(new DataValue());
	const DataTypePtr& statusType = getStatusType();
	value->type = statusType;
	for (const PropertyPtr& attribute : *(statusType->ownedAttribute))
	{
		PrimitiveValuePtr attributeValue = nullptr;
		if (attribute->name == "context")
		{
			attributeValue.reset(new StringValue());
			attributeValue->type = this->stringType;
			AS(StringValue, attributeValue)->value = this->context;
		}
		else if (attribute->name == "code")
		{
			attributeValue.reset(new IntegerValue());
			attributeValue->type = this->integerType;
			AS(IntegerValue, attributeValue)->value = this->code;
		}
		else if (attribute->name == "description")
		{
			attributeValue.reset(new StringValue());
			attributeValue->type = this->stringType;
			AS(StringValue, attributeValue)->value = this->description;
		}
		ValueListPtr values(new ValueList());
		values->push_back(attributeValue);
		value->setFeatureValue(attribute, values, 0);
	}
	return value;
}
