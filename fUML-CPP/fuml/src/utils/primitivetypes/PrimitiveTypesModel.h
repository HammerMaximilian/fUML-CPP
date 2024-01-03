/*
 * PrimitiveTypesModel.h
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#ifndef UTILS_PRIMITIVETYPES_PRIMITIVETYPESMODEL_H_
#define UTILS_PRIMITIVETYPES_PRIMITIVETYPESMODEL_H_

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

namespace fuml::primitivetypes
{
	class PrimitiveTypesModel : public uml::environment::InMemoryModel
	{
		public:
			PrimitiveTypePtr PrimitiveTypes_Boolean = nullptr;
			PrimitiveTypePtr PrimitiveTypes_Integer = nullptr;
			PrimitiveTypePtr PrimitiveTypes_Real = nullptr;
			PrimitiveTypePtr PrimitiveTypes_String = nullptr;
			PrimitiveTypePtr PrimitiveTypes_UnlimitedNatural = nullptr;

		public:
			virtual ~PrimitiveTypesModel() = default;
			static const std::shared_ptr<PrimitiveTypesModel>& Instance();

		private:
			PrimitiveTypesModel() = default;
			void initializeInMemoryModel();
	};
}

#endif /* UTILS_PRIMITIVETYPES_PRIMITIVETYPESMODEL_H_ */
