/*
 * PrimitiveTypesModel.cpp
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#include <utils/primitivetypes/PrimitiveTypesModel.h>

#include <fuml/syntax/simpleclassifiers/PrimitiveType.h>
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
	Boolean.reset(new PrimitiveType());
	Boolean->setThisDataTypePtr(Boolean);
	Boolean->setName("Boolean");

	//PrimitiveType Integer
	Integer.reset(new PrimitiveType());
	Integer->setThisDataTypePtr(Integer);
	Integer->setName("Integer");

	//PrimitiveType Real
	Real.reset(new PrimitiveType());
	Real->setThisDataTypePtr(Real);
	Real->setName("Real");

	//PrimitiveType Integer
	String.reset(new PrimitiveType());
	String->setThisDataTypePtr(String);
	String->setName("String");

	//PrimitiveType Integer
	UnlimitedNatural.reset(new PrimitiveType());
	UnlimitedNatural->setThisDataTypePtr(UnlimitedNatural);
	UnlimitedNatural->setName("UnlimitedNatural");
}
