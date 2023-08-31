/*
 * PrimitiveTypesModel.h
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#ifndef UTILS_PRIMITIVETYPES_PRIMITIVETYPESMODEL_H_
#define UTILS_PRIMITIVETYPES_PRIMITIVETYPESMODEL_H_

#include <fuml/syntax/fwd.h>
#include <utils/environment/InMemoryModel.h>

namespace fuml::primitivetypes
{
	class PrimitiveTypesModel : public fuml::environment::InMemoryModel
	{
		public:
			PrimitiveTypePtr Boolean = nullptr;
			PrimitiveTypePtr Integer = nullptr;
			PrimitiveTypePtr Real = nullptr;
			PrimitiveTypePtr String = nullptr;
			PrimitiveTypePtr UnlimitedNatural = nullptr;

		public:
			virtual ~PrimitiveTypesModel() = default;
			static const std::shared_ptr<PrimitiveTypesModel>& Instance();

			virtual BehaviorPtr getMainBehavior() override;

		private:
			PrimitiveTypesModel() = default;
			void initializeInMemoryModel();
	};
}

#endif /* UTILS_PRIMITIVETYPES_PRIMITIVETYPESMODEL_H_ */
