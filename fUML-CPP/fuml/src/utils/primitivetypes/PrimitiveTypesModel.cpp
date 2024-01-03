/*
 * PrimitiveTypesModel.cpp
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#include <utils/primitivetypes/PrimitiveTypesModel.h>

#include <uml/simpleclassifiers/PrimitiveType.h>
#include <stdexcept>

using namespace fuml::primitivetypes;

const std::shared_ptr<PrimitiveTypesModel>& PrimitiveTypesModel::Instance()
{
	static std::shared_ptr<PrimitiveTypesModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new PrimitiveTypesModel());
		instance->initializeInMemoryModel();
	}
	return instance;
}

void PrimitiveTypesModel::initializeInMemoryModel()
{
	/*
	 * Create in-memory model elements
	 */

	//PrimitiveType Boolean
	PrimitiveTypes_Boolean.reset(new PrimitiveType());
	PrimitiveTypes_Boolean->setThisDataTypePtr(PrimitiveTypes_Boolean);
	PrimitiveTypes_Boolean->setName("Boolean");

	//PrimitiveType Integer
	PrimitiveTypes_Integer.reset(new PrimitiveType());
	PrimitiveTypes_Integer->setThisDataTypePtr(PrimitiveTypes_Integer);
	PrimitiveTypes_Integer->setName("Integer");

	//PrimitiveType Real
	PrimitiveTypes_Real.reset(new PrimitiveType());
	PrimitiveTypes_Real->setThisDataTypePtr(PrimitiveTypes_Real);
	PrimitiveTypes_Real->setName("Real");

	//PrimitiveType Integer
	PrimitiveTypes_String.reset(new PrimitiveType());
	PrimitiveTypes_String->setThisDataTypePtr(PrimitiveTypes_String);
	PrimitiveTypes_String->setName("String");

	//PrimitiveType Integer
	PrimitiveTypes_UnlimitedNatural.reset(new PrimitiveType());
	PrimitiveTypes_UnlimitedNatural->setThisDataTypePtr(PrimitiveTypes_UnlimitedNatural);
	PrimitiveTypes_UnlimitedNatural->setName("UnlimitedNatural");
}
