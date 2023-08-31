/*
 * LibraryModel.h
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_LIBRARYMODEL_H_
#define UTILS_LIBRARY_LIBRARYMODEL_H_

#include <fuml/syntax/fwd.h>
#include <utils/environment/InMemoryModel.h>

namespace fuml::library
{
	class LibraryModel : public fuml::environment::InMemoryModel
	{
		public:
			/*
			 * Boolean functions
			 */
			FunctionBehaviorPtr BooleanFunctions_And = nullptr;
			ParameterPtr BooleanFunctions_And_result = nullptr;
			ParameterPtr BooleanFunctions_And_x = nullptr;
			ParameterPtr BooleanFunctions_And_y = nullptr;
			FunctionBehaviorPtr BooleanFunctions_Implies = nullptr;
			ParameterPtr BooleanFunctions_Implies_result = nullptr;
			ParameterPtr BooleanFunctions_Implies_x = nullptr;
			ParameterPtr BooleanFunctions_Implies_y = nullptr;
			FunctionBehaviorPtr BooleanFunctions_Not = nullptr;
			ParameterPtr BooleanFunctions_Not_result = nullptr;
			ParameterPtr BooleanFunctions_Not_x = nullptr;
			FunctionBehaviorPtr BooleanFunctions_Or = nullptr;
			ParameterPtr BooleanFunctions_Or_result = nullptr;
			ParameterPtr BooleanFunctions_Or_x = nullptr;
			ParameterPtr BooleanFunctions_Or_y = nullptr;
			FunctionBehaviorPtr BooleanFunctions_ToBoolean = nullptr;
			ParameterPtr BooleanFunctions_ToBoolean_result = nullptr;
			ParameterPtr BooleanFunctions_ToBoolean_x = nullptr;
			FunctionBehaviorPtr BooleanFunctions_ToString = nullptr;
			ParameterPtr BooleanFunctions_ToString_result = nullptr;
			ParameterPtr BooleanFunctions_ToString_x = nullptr;
			FunctionBehaviorPtr BooleanFunctions_Xor = nullptr;
			ParameterPtr BooleanFunctions_Xor_result = nullptr;
			ParameterPtr BooleanFunctions_Xor_x = nullptr;
			ParameterPtr BooleanFunctions_Xor_y = nullptr;

		public:
			virtual ~LibraryModel() = default;
			static const std::shared_ptr<LibraryModel>& Instance();

			virtual BehaviorPtr getMainBehavior() override;

		private:
			LibraryModel() = default;
			void initializeInMemoryModel();
	};
}

#endif /* UTILS_LIBRARY_LIBRARYMODEL_H_ */
