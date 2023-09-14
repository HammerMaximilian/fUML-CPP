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
			 * Primitive Behaviors
			 */
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

				/*
				 * Integer functions
				 */
				FunctionBehaviorPtr IntegerFunctions_Abs = nullptr;
				ParameterPtr IntegerFunctions_Abs_result = nullptr;
				ParameterPtr IntegerFunctions_Abs_x = nullptr;
				FunctionBehaviorPtr IntegerFunctions_Div = nullptr;
				ParameterPtr IntegerFunctions_Div_result = nullptr;
				ParameterPtr IntegerFunctions_Div_x = nullptr;
				ParameterPtr IntegerFunctions_Div_y = nullptr;
				FunctionBehaviorPtr IntegerFunctions_Max = nullptr;
				ParameterPtr IntegerFunctions_Max_result = nullptr;
				ParameterPtr IntegerFunctions_Max_x = nullptr;
				ParameterPtr IntegerFunctions_Max_y = nullptr;
				FunctionBehaviorPtr IntegerFunctions_Min = nullptr;
				ParameterPtr IntegerFunctions_Min_result = nullptr;
				ParameterPtr IntegerFunctions_Min_x = nullptr;
				ParameterPtr IntegerFunctions_Min_y = nullptr;
				FunctionBehaviorPtr IntegerFunctions_Mod = nullptr;
				ParameterPtr IntegerFunctions_Mod_result = nullptr;
				ParameterPtr IntegerFunctions_Mod_x = nullptr;
				ParameterPtr IntegerFunctions_Mod_y = nullptr;
				FunctionBehaviorPtr IntegerFunctions_Neg = nullptr;
				ParameterPtr IntegerFunctions_Neg_result = nullptr;
				ParameterPtr IntegerFunctions_Neg_x = nullptr;
				FunctionBehaviorPtr IntegerFunctions_ToInteger = nullptr;
				ParameterPtr IntegerFunctions_ToInteger_result = nullptr;
				ParameterPtr IntegerFunctions_ToInteger_x = nullptr;
				FunctionBehaviorPtr IntegerFunctions_ToString = nullptr;
				ParameterPtr IntegerFunctions_ToString_result = nullptr;
				ParameterPtr IntegerFunctions_ToString_x = nullptr;
				FunctionBehaviorPtr IntegerFunctions_ToUnlimitedNatural = nullptr;
				ParameterPtr IntegerFunctions_ToUnlimitedNatural_result = nullptr;
				ParameterPtr IntegerFunctions_ToUnlimitedNatural_x = nullptr;
				FunctionBehaviorPtr IntegerFunctions_divide = nullptr;
				ParameterPtr IntegerFunctions_divide_result = nullptr;
				ParameterPtr IntegerFunctions_divide_x = nullptr;
				ParameterPtr IntegerFunctions_divide_y = nullptr;
				FunctionBehaviorPtr IntegerFunctions_equals = nullptr;
				ParameterPtr IntegerFunctions_equals_result = nullptr;
				ParameterPtr IntegerFunctions_equals_x = nullptr;
				ParameterPtr IntegerFunctions_equals_y = nullptr;
				FunctionBehaviorPtr IntegerFunctions_greaterOrEqual = nullptr;
				ParameterPtr IntegerFunctions_greaterOrEqual_result = nullptr;
				ParameterPtr IntegerFunctions_greaterOrEqual_x = nullptr;
				ParameterPtr IntegerFunctions_greaterOrEqual_y = nullptr;
				FunctionBehaviorPtr IntegerFunctions_greaterThan = nullptr;
				ParameterPtr IntegerFunctions_greaterThan_result = nullptr;
				ParameterPtr IntegerFunctions_greaterThan_x = nullptr;
				ParameterPtr IntegerFunctions_greaterThan_y = nullptr;
				FunctionBehaviorPtr IntegerFunctions_lessOrEqual = nullptr;
				ParameterPtr IntegerFunctions_lessOrEqual_result = nullptr;
				ParameterPtr IntegerFunctions_lessOrEqual_x = nullptr;
				ParameterPtr IntegerFunctions_lessOrEqual_y = nullptr;
				FunctionBehaviorPtr IntegerFunctions_lessThan = nullptr;
				ParameterPtr IntegerFunctions_lessThan_result = nullptr;
				ParameterPtr IntegerFunctions_lessThan_x = nullptr;
				ParameterPtr IntegerFunctions_lessThan_y = nullptr;
				FunctionBehaviorPtr IntegerFunctions_minus = nullptr;
				ParameterPtr IntegerFunctions_minus_result = nullptr;
				ParameterPtr IntegerFunctions_minus_x = nullptr;
				ParameterPtr IntegerFunctions_minus_y = nullptr;
				FunctionBehaviorPtr IntegerFunctions_plus = nullptr;
				ParameterPtr IntegerFunctions_plus_result = nullptr;
				ParameterPtr IntegerFunctions_plus_x = nullptr;
				ParameterPtr IntegerFunctions_plus_y = nullptr;
				FunctionBehaviorPtr IntegerFunctions_times = nullptr;
				ParameterPtr IntegerFunctions_times_result = nullptr;
				ParameterPtr IntegerFunctions_times_x = nullptr;
				ParameterPtr IntegerFunctions_times_y = nullptr;

				/*
				 * Real Functions
				 */
				FunctionBehaviorPtr RealFunctions_Abs = nullptr;
				ParameterPtr RealFunctions_Abs_result = nullptr;
				ParameterPtr RealFunctions_Abs_x = nullptr;
				FunctionBehaviorPtr RealFunctions_Floor = nullptr;
				ParameterPtr RealFunctions_Floor_result = nullptr;
				ParameterPtr RealFunctions_Floor_x = nullptr;
				FunctionBehaviorPtr RealFunctions_Inv = nullptr;
				ParameterPtr RealFunctions_Inv_result = nullptr;
				ParameterPtr RealFunctions_Inv_x = nullptr;
				FunctionBehaviorPtr RealFunctions_Max = nullptr;
				ParameterPtr RealFunctions_Max_result = nullptr;
				ParameterPtr RealFunctions_Max_x = nullptr;
				ParameterPtr RealFunctions_Max_y = nullptr;
				FunctionBehaviorPtr RealFunctions_Min = nullptr;
				ParameterPtr RealFunctions_Min_result = nullptr;
				ParameterPtr RealFunctions_Min_x = nullptr;
				ParameterPtr RealFunctions_Min_y = nullptr;
				FunctionBehaviorPtr RealFunctions_Neg = nullptr;
				ParameterPtr RealFunctions_Neg_result = nullptr;
				ParameterPtr RealFunctions_Neg_x = nullptr;
				FunctionBehaviorPtr RealFunctions_Round = nullptr;
				ParameterPtr RealFunctions_Round_result = nullptr;
				ParameterPtr RealFunctions_Round_x = nullptr;
				FunctionBehaviorPtr RealFunctions_ToInteger = nullptr;
				ParameterPtr RealFunctions_ToInteger_result = nullptr;
				ParameterPtr RealFunctions_ToInteger_x = nullptr;
				FunctionBehaviorPtr RealFunctions_ToReal = nullptr;
				ParameterPtr RealFunctions_ToReal_result = nullptr;
				ParameterPtr RealFunctions_ToReal_x = nullptr;
				FunctionBehaviorPtr RealFunctions_ToString = nullptr;
				ParameterPtr RealFunctions_ToString_result = nullptr;
				ParameterPtr RealFunctions_ToString_x = nullptr;
				FunctionBehaviorPtr RealFunctions_divide = nullptr;
				ParameterPtr RealFunctions_divide_result = nullptr;
				ParameterPtr RealFunctions_divide_x = nullptr;
				ParameterPtr RealFunctions_divide_y = nullptr;
				FunctionBehaviorPtr RealFunctions_greaterOrEqual = nullptr;
				ParameterPtr RealFunctions_greaterOrEqual_result = nullptr;
				ParameterPtr RealFunctions_greaterOrEqual_x = nullptr;
				ParameterPtr RealFunctions_greaterOrEqual_y = nullptr;
				FunctionBehaviorPtr RealFunctions_greaterThan = nullptr;
				ParameterPtr RealFunctions_greaterThan_result = nullptr;
				ParameterPtr RealFunctions_greaterThan_x = nullptr;
				ParameterPtr RealFunctions_greaterThan_y = nullptr;
				FunctionBehaviorPtr RealFunctions_lessOrEqual = nullptr;
				ParameterPtr RealFunctions_lessOrEqual_result = nullptr;
				ParameterPtr RealFunctions_lessOrEqual_x = nullptr;
				ParameterPtr RealFunctions_lessOrEqual_y = nullptr;
				FunctionBehaviorPtr RealFunctions_lessThan = nullptr;
				ParameterPtr RealFunctions_lessThan_result = nullptr;
				ParameterPtr RealFunctions_lessThan_x = nullptr;
				ParameterPtr RealFunctions_lessThan_y = nullptr;
				FunctionBehaviorPtr RealFunctions_minus = nullptr;
				ParameterPtr RealFunctions_minus_result = nullptr;
				ParameterPtr RealFunctions_minus_x = nullptr;
				ParameterPtr RealFunctions_minus_y = nullptr;
				FunctionBehaviorPtr RealFunctions_plus = nullptr;
				ParameterPtr RealFunctions_plus_result = nullptr;
				ParameterPtr RealFunctions_plus_x = nullptr;
				ParameterPtr RealFunctions_plus_y = nullptr;
				FunctionBehaviorPtr RealFunctions_times = nullptr;
				ParameterPtr RealFunctions_times_result = nullptr;
				ParameterPtr RealFunctions_times_x = nullptr;
				ParameterPtr RealFunctions_times_y = nullptr;

				/*
				 * String Functions
				 */
				FunctionBehaviorPtr StringFunctions_Concat = nullptr;
				ParameterPtr StringFunctions_Concat_result = nullptr;
				ParameterPtr StringFunctions_Concat_x = nullptr;
				ParameterPtr StringFunctions_Concat_y = nullptr;
				FunctionBehaviorPtr StringFunctions_Size = nullptr;
				ParameterPtr StringFunctions_Size_result = nullptr;
				ParameterPtr StringFunctions_Size_x = nullptr;
				FunctionBehaviorPtr StringFunctions_Substring = nullptr;
				ParameterPtr StringFunctions_Substring_lower = nullptr;
				ParameterPtr StringFunctions_Substring_result = nullptr;
				ParameterPtr StringFunctions_Substring_upper = nullptr;
				ParameterPtr StringFunctions_Substring_x = nullptr;

				/*
				 * UnlimitedNatural Functions
				 */
				FunctionBehaviorPtr UnlimitedNaturalFunctions_Max = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_Max_result = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_Max_x = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_Max_y = nullptr;
				FunctionBehaviorPtr UnlimitedNaturalFunctions_Min = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_Min_result = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_Min_x = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_Min_y = nullptr;
				FunctionBehaviorPtr UnlimitedNaturalFunctions_ToInteger = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_ToInteger_result = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_ToInteger_x = nullptr;
				FunctionBehaviorPtr UnlimitedNaturalFunctions_ToString = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_ToString_result = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_ToString_x = nullptr;
				FunctionBehaviorPtr UnlimitedNaturalFunctions_ToUnlimitedNatural = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_ToUnlimitedNatural_result = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_ToUnlimitedNatural_x = nullptr;
				FunctionBehaviorPtr UnlimitedNaturalFunctions_greaterOrEqual = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_greaterOrEqual_result = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_greaterOrEqual_x = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_greaterOrEqual_y = nullptr;
				FunctionBehaviorPtr UnlimitedNaturalFunctions_greaterThan = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_greaterThan_result = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_greaterThan_x = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_greaterThan_y = nullptr;
				FunctionBehaviorPtr UnlimitedNaturalFunctions_lessOrEqual = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_lessOrEqual_result = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_lessOrEqual_x = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_lessOrEqual_y = nullptr;
				FunctionBehaviorPtr UnlimitedNaturalFunctions_lessThan = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_lessThan_result = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_lessThan_x = nullptr;
				ParameterPtr UnlimitedNaturalFunctions_lessThan_y = nullptr;

				/*
				 * List Functions
				 */
				FunctionBehaviorPtr ListFunctions_ListSize = nullptr;
				ParameterPtr ListFunctions_ListSize_list = nullptr;
				ParameterPtr ListFunctions_ListSize_result = nullptr;
				FunctionBehaviorPtr ListFunctions_ListGet = nullptr;
				ParameterPtr ListFunctions_ListGet_list = nullptr;
				ParameterPtr ListFunctions_ListGet_index = nullptr;
				ParameterPtr ListFunctions_ListGet_result = nullptr;
				FunctionBehaviorPtr ListFunctions_ListConcat = nullptr;
				ParameterPtr ListFunctions_ListConcat_list1 = nullptr;
				ParameterPtr ListFunctions_ListConcat_list2 = nullptr;
				ParameterPtr ListFunctions_ListConcat_result = nullptr;

			/*
			 * Common
			 */
				/*
				 * Signal Notification
				 */
				SignalPtr Notification = nullptr;
				PropertyPtr Notification_content = nullptr;

				/*
				 * Class Listener
				 */
				Class_Ptr Listener = nullptr;
				ReceptionPtr Listener_Notification = nullptr;

				/*
				 * DataType Status
				 */
				DataTypePtr Status = nullptr;
				PropertyPtr Status_context = nullptr;
				PropertyPtr Status_code = nullptr;
				PropertyPtr Status_description = nullptr;

			/*
			 * BasicInputOutput
			 */
				/*
				 * Class Channel
				 */
				Class_Ptr Channel = nullptr;
				OperationPtr Channel_getName = nullptr;
				ParameterPtr Channel_getName_ReturnResult = nullptr;
				OperationPtr Channel_open = nullptr;
				ParameterPtr Channel_open_errorStatus = nullptr;
				OperationPtr Channel_close = nullptr;
				ParameterPtr Channel_close_errorStatus = nullptr;
				OperationPtr Channel_isOpen = nullptr;
				ParameterPtr Channel_isOpen_ReturnResult = nullptr;
				OperationPtr Channel_getStatus = nullptr;
				ParameterPtr Channel_getStatus_ReturnResult = nullptr;

				/*
				 * Class InputChannel
				 */
				Class_Ptr InputChannel = nullptr;
				GeneralizationPtr InputChannel_Generalization_Channel = nullptr;
				OperationPtr InputChannel_hasMore = nullptr;
				ParameterPtr InputChannel_hasMore_ReturnResult = nullptr;
				OperationPtr InputChannel_read = nullptr;
				ParameterPtr InputChannel_read_value = nullptr;
				ParameterPtr InputChannel_read_errorStatus = nullptr;
				OperationPtr InputChannel_peek = nullptr;
				ParameterPtr InputChannel_peek_value = nullptr;
				ParameterPtr InputChannel_peek_errorStatus = nullptr;

				/*
				 * Class OutputChannel
				 */
				Class_Ptr OutputChannel = nullptr;
				GeneralizationPtr OutputChannel_Generalization_Channel = nullptr;
				OperationPtr OutputChannel_write = nullptr;
				ParameterPtr OutputChannel_write_value = nullptr;
				ParameterPtr OutputChannel_write_errorStatus = nullptr;
				OperationPtr OutputChannel_isFull = nullptr;
				ParameterPtr OutputChannel_isFull_ReturnResult = nullptr;

				/*
				 * TextInputChannel
				 */
				Class_Ptr TextInputChannel = nullptr;
				GeneralizationPtr TextInputChannel_Generalization_InputChannel = nullptr;
				OperationPtr TextInputChannel_readCharacter = nullptr;
				ParameterPtr TextInputChannel_readCharacter_ReturnResult = nullptr;
				ParameterPtr TextInputChannel_readCharacter_errorStatus = nullptr;
				OperationPtr TextInputChannel_peekCharacter = nullptr;
				ParameterPtr TextInputChannel_peekCharacter_OwnedParameter = nullptr;
				ParameterPtr TextInputChannel_peekCharacter_errorStatus = nullptr;
				OperationPtr TextInputChannel_readLine = nullptr;
				ParameterPtr TextInputChannel_readLine_ReturnResult = nullptr;
				ParameterPtr TextInputChannel_readLine_errorStatus = nullptr;
				OperationPtr TextInputChannel_readInteger = nullptr;
				ParameterPtr TextInputChannel_readInteger_ReturnResult = nullptr;
				ParameterPtr TextInputChannel_readInteger_errorStatus = nullptr;
				OperationPtr TextInputChannel_readReal = nullptr;
				ParameterPtr TextInputChannel_readReal_ReturnResult = nullptr;
				ParameterPtr TextInputChannel_readReal_errorStatus = nullptr;
				OperationPtr TextInputChannel_readBoolean = nullptr;
				ParameterPtr TextInputChannel_readBoolean_ReturnResult = nullptr;
				ParameterPtr TextInputChannel_readBoolean_errorStatus = nullptr;
				OperationPtr TextInputChannel_readUnlimitedNatural = nullptr;
				ParameterPtr TextInputChannel_readUnlimitedNatural_ReturnResult = nullptr;
				ParameterPtr TextInputChannel_readUnlimitedNatural_errorStatus = nullptr;

				/*
				 * TextOutputChannel
				 */
				Class_Ptr TextOutputChannel = nullptr;
				GeneralizationPtr TextOutputChannel_Generalization_OutputChannel = nullptr;
				OperationPtr TextOutputChannel_writeString = nullptr;
				ParameterPtr TextOutputChannel_writeString_value = nullptr;
				ParameterPtr TextOutputChannel_writeString_errorStatus = nullptr;
				OperationPtr TextOutputChannel_writeNewLine = nullptr;
				ParameterPtr TextOutputChannel_writeNewLine_errorStatus = nullptr;
				OperationPtr TextOutputChannel_writeLine = nullptr;
				ParameterPtr TextOutputChannel_writeLine_value = nullptr;
				ParameterPtr TextOutputChannel_writeLine_errorStatus = nullptr;
				OperationPtr TextOutputChannel_writeInteger = nullptr;
				ParameterPtr TextOutputChannel_writeInteger_value = nullptr;
				ParameterPtr TextOutputChannel_writeInteger_errorStatus = nullptr;
				OperationPtr TextOutputChannel_writeReal = nullptr;
				ParameterPtr TextOutputChannel_writeReal_value = nullptr;
				ParameterPtr TextOutputChannel_writeReal_errorStatus = nullptr;
				OperationPtr TextOutputChannel_writeBoolean = nullptr;
				ParameterPtr TextOutputChannel_writeBoolean_value = nullptr;
				ParameterPtr TextOutputChannel_writeBoolean_errorStatus = nullptr;
				OperationPtr TextOutputChannel_writeUnlimitedNatural = nullptr;
				ParameterPtr TextOutputChannel_writeUnlimitedNatural_value = nullptr;
				ParameterPtr TextOutputChannel_writeUnlimitedNatural_errorStatus = nullptr;

				/*
				 * StandardInputChannel
				 */
				Class_Ptr StandardInputChannel = nullptr;
				GeneralizationPtr StandardInputChannel_Generalization_TextInputChannel = nullptr;

				/*
				 * StandardOutputChannel
				 */
				Class_Ptr StandardOutputChannel = nullptr;
				GeneralizationPtr StandardOutputChannel_Generalization_TextOutputChannel = nullptr;

				/*
				 * Activity WriteLine
				 */
				ActivityPtr WriteLine = nullptr;
				ParameterPtr WriteLine_value = nullptr;
				ParameterPtr WriteLine_errorStatus = nullptr;
				ActivityParameterNodePtr WriteLine_ActivityParameterNode_value = nullptr;
				ActivityParameterNodePtr WriteLine_ActivityParameterNode_errorStatus = nullptr;
				ReadExtentActionPtr WriteLine_ReadExtentAction_StandardOutputChannel = nullptr;
				OutputPinPtr WriteLine_ReadExtentAction_StandardOutputChannel_result = nullptr;
				CallOperationActionPtr WriteLine_CallOperationAction_writeLine = nullptr;
				InputPinPtr WriteLine_CallOperationAction_writeLine_target = nullptr;
				InputPinPtr WriteLine_CallOperationAction_writeLine_value = nullptr;
				OutputPinPtr WriteLine_CallOperationAction_writeLine_errorStatus = nullptr;
				ObjectFlowPtr WriteLine_From_StandardOutputChannel_result_To_writeLine_target = nullptr;
				ObjectFlowPtr WriteLine_From_value_To_writeLine_value = nullptr;
				ObjectFlowPtr WriteLine_From_writeLine_errorStatus_To_errorStatus = nullptr;

				/*
				 * Class ActiveChannel
				 */
				Class_Ptr ActiveChannel = nullptr;
				GeneralizationPtr ActiveChannel_Generalization_Channel = nullptr;
				OperationPtr ActiveChannel_register = nullptr;
				ParameterPtr ActiveChannel_register_listener = nullptr;
				OperationPtr ActiveChannel_unregister = nullptr;
				ParameterPtr ActiveChannel_unregister_listener = nullptr;

				/*
				 * Activity ReadLine
				 */
				ActivityPtr ReadLine = nullptr;
				ParameterPtr ReadLine_errorStatus = nullptr;
				ParameterPtr ReadLine_result = nullptr;
				ActivityParameterNodePtr ReadLine_ActivityParameterNode_errorStatus = nullptr;
				ActivityParameterNodePtr ReadLine_ActivityParameterNode_result = nullptr;
				ReadExtentActionPtr ReadLine_ReadExtentAction_StandardInputChannel = nullptr;
				OutputPinPtr ReadLine_ReadExtentAction_StandardInputChannel_result = nullptr;
				CallOperationActionPtr ReadLine_CallOperationAction_readLine = nullptr;
				InputPinPtr ReadLine_CallOperationAction_readLine_target = nullptr;
				OutputPinPtr ReadLine_CallOperationAction_readLine_result = nullptr;
				OutputPinPtr ReadLine_CallOperationAction_readLine_errorStatus = nullptr;
				ObjectFlowPtr ReadLine_From_StandardInputChannel_result_To_readLine_target = nullptr;
				ObjectFlowPtr ReadLine_From_readLine_result_To_result = nullptr;
				ObjectFlowPtr ReadLine_From_readLine_errorStatus_To_errorStatus = nullptr;

		public:
			virtual ~LibraryModel() = default;
			static const std::shared_ptr<LibraryModel>& Instance();

		private:
			LibraryModel() = default;
			void initializeInMemoryModel();
	};
}

#endif /* UTILS_LIBRARY_LIBRARYMODEL_H_ */
