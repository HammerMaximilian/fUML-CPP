/*
 * LibraryModel.h
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_FOUNDATIONALMODELLIBRARYMODEL_H_
#define UTILS_LIBRARY_FOUNDATIONALMODELLIBRARYMODEL_H_

#include <fuml/syntax/fwd.h>
#include <utils/environment/InMemoryModel.h>

namespace fuml::library
{
	class FoundationalModelLibraryModel : public fuml::environment::InMemoryModel
	{
		public:
			/*
			 * Primitive Behaviors
			 */
				/*
				 * Boolean functions
				 */
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_And = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_And_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_And_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_And_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_Implies = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_Implies_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_Implies_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_Implies_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_Not = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_Not_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_Not_x = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_Or = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_Or_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_Or_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_Or_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_ToBoolean = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_ToBoolean_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_ToBoolean_x = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_ToString = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_ToString_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_ToString_x = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_Xor = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_Xor_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_Xor_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_Xor_y = nullptr;

				/*
				 * Integer functions
				 */
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Abs = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Abs_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Abs_x = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Div = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Div_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Div_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Div_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Max = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Max_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Max_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Max_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Min = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Min_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Min_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Min_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Mod = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Mod_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Mod_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Mod_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Neg = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Neg_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_Neg_x = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_ToInteger = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_ToInteger_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_ToInteger_x = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_ToString = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_ToString_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_ToString_x = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_ToUnlimitedNatural = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_ToUnlimitedNatural_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_ToUnlimitedNatural_x = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_divide = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_divide_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_divide_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_divide_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_equals = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_equals_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_equals_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_equals_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_greaterOrEqual = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_greaterOrEqual_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_greaterOrEqual_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_greaterOrEqual_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_greaterThan = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_greaterThan_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_greaterThan_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_greaterThan_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_lessOrEqual = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_lessOrEqual_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_lessOrEqual_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_lessOrEqual_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_lessThan = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_lessThan_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_lessThan_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_lessThan_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_minus = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_minus_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_minus_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_minus_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_plus = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_plus_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_plus_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_plus_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_times = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_times_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_times_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_IntegerFunctions_times_y = nullptr;

				/*
				 * Real Functions
				 */
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Abs = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Abs_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Abs_x = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Floor = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Floor_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Floor_x = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Inv = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Inv_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Inv_x = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Max = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Max_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Max_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Max_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Min = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Min_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Min_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Min_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Neg = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Neg_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Neg_x = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Round = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Round_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_Round_x = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_ToInteger = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_ToInteger_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_ToInteger_x = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_ToReal = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_ToReal_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_ToReal_x = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_ToString = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_ToString_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_ToString_x = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_divide = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_divide_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_divide_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_divide_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_greaterOrEqual = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_greaterOrEqual_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_greaterOrEqual_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_greaterOrEqual_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_greaterThan = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_greaterThan_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_greaterThan_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_greaterThan_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_lessOrEqual = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_lessOrEqual_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_lessOrEqual_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_lessOrEqual_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_lessThan = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_lessThan_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_lessThan_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_lessThan_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_minus = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_minus_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_minus_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_minus_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_plus = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_plus_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_plus_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_plus_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_times = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_times_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_times_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_RealFunctions_times_y = nullptr;

				/*
				 * String Functions
				 */
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_StringFunctions_Concat = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_StringFunctions_Concat_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_StringFunctions_Concat_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_StringFunctions_Concat_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_StringFunctions_Size = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_StringFunctions_Size_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_StringFunctions_Size_x = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_StringFunctions_Substring = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_StringFunctions_Substring_lower = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_StringFunctions_Substring_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_StringFunctions_Substring_upper = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_StringFunctions_Substring_x = nullptr;

				/*
				 * UnlimitedNatural Functions
				 */
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_Max = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_Max_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_Max_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_Max_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_Min = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_Min_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_Min_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_Min_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_ToInteger = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_ToInteger_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_ToInteger_x = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_ToString = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_ToString_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_ToString_x = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_ToUnlimitedNatural = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_ToUnlimitedNatural_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_ToUnlimitedNatural_x = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_greaterOrEqual = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_greaterOrEqual_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_greaterOrEqual_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_greaterOrEqual_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_greaterThan = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_greaterThan_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_greaterThan_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_greaterThan_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_lessOrEqual = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_lessOrEqual_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_lessOrEqual_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_lessOrEqual_y = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_lessThan = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_lessThan_result = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_lessThan_x = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_lessThan_y = nullptr;

				/*
				 * List Functions
				 */
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_ListFunctions_ListSize = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_ListFunctions_ListSize_list = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_ListFunctions_ListSize_result = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_ListFunctions_ListGet = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_ListFunctions_ListGet_list = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_ListFunctions_ListGet_index = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_ListFunctions_ListGet_result = nullptr;
				FunctionBehaviorPtr FoundationalModelLibrary_PrimitiveBehaviors_ListFunctions_ListConcat = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_ListFunctions_ListConcat_list1 = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_ListFunctions_ListConcat_list2 = nullptr;
				ParameterPtr FoundationalModelLibrary_PrimitiveBehaviors_ListFunctions_ListConcat_result = nullptr;

			/*
			 * Common
			 */
				/*
				 * Signal Notification
				 */
				SignalPtr FoundationalModelLibrary_Common_Notification = nullptr;
				PropertyPtr FoundationalModelLibrary_Common_Notification_content = nullptr;

				/*
				 * Class Listener
				 */
				Class_Ptr FoundationalModelLibrary_Common_Listener = nullptr;
				ReceptionPtr FoundationalModelLibrary_Common_Listener_Notification = nullptr;

				/*
				 * DataType Status
				 */
				DataTypePtr FoundationalModelLibrary_Common_Status = nullptr;
				PropertyPtr FoundationalModelLibrary_Common_Status_context = nullptr;
				PropertyPtr FoundationalModelLibrary_Common_Status_code = nullptr;
				PropertyPtr FoundationalModelLibrary_Common_Status_description = nullptr;

			/*
			 * BasicInputOutput
			 */
				/*
				 * Class Channel
				 */
				Class_Ptr FoundationalModelLibrary_BasicInputOutput_Channel = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_Channel_getName = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_Channel_getName_ReturnResult = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_Channel_open = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_Channel_open_errorStatus = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_Channel_close = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_Channel_close_errorStatus = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_Channel_isOpen = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_Channel_isOpen_ReturnResult = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_Channel_getStatus = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_Channel_getStatus_ReturnResult = nullptr;

				/*
				 * Class InputChannel
				 */
				Class_Ptr FoundationalModelLibrary_BasicInputOutput_InputChannel = nullptr;
				GeneralizationPtr FoundationalModelLibrary_BasicInputOutput_InputChannel_Generalization_Channel = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_InputChannel_hasMore = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_InputChannel_hasMore_ReturnResult = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_InputChannel_read = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_InputChannel_read_value = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_InputChannel_read_errorStatus = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_InputChannel_peek = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_InputChannel_peek_value = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_InputChannel_peek_errorStatus = nullptr;

				/*
				 * Class OutputChannel
				 */
				Class_Ptr FoundationalModelLibrary_BasicInputOutput_OutputChannel = nullptr;
				GeneralizationPtr FoundationalModelLibrary_BasicInputOutput_OutputChannel_Generalization_Channel = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_OutputChannel_write = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_OutputChannel_write_value = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_OutputChannel_write_errorStatus = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_OutputChannel_isFull = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_OutputChannel_isFull_ReturnResult = nullptr;

				/*
				 * TextInputChannel
				 */
				Class_Ptr FoundationalModelLibrary_BasicInputOutput_TextInputChannel = nullptr;
				GeneralizationPtr FoundationalModelLibrary_BasicInputOutput_TextInputChannel_Generalization_InputChannel = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_TextInputChannel_readCharacter = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextInputChannel_readCharacter_ReturnResult = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextInputChannel_readCharacter_errorStatus = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_TextInputChannel_peekCharacter = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextInputChannel_peekCharacter_OwnedParameter = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextInputChannel_peekCharacter_errorStatus = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_TextInputChannel_readLine = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextInputChannel_readLine_ReturnResult = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextInputChannel_readLine_errorStatus = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_TextInputChannel_readInteger = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextInputChannel_readInteger_ReturnResult = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextInputChannel_readInteger_errorStatus = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_TextInputChannel_readReal = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextInputChannel_readReal_ReturnResult = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextInputChannel_readReal_errorStatus = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_TextInputChannel_readBoolean = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextInputChannel_readBoolean_ReturnResult = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextInputChannel_readBoolean_errorStatus = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_TextInputChannel_readUnlimitedNatural = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextInputChannel_readUnlimitedNatural_ReturnResult = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextInputChannel_readUnlimitedNatural_errorStatus = nullptr;

				/*
				 * TextOutputChannel
				 */
				Class_Ptr FoundationalModelLibrary_BasicInputOutput_TextOutputChannel = nullptr;
				GeneralizationPtr FoundationalModelLibrary_BasicInputOutput_TextOutputChannel_Generalization_OutputChannel = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_TextOutputChannel_writeString = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextOutputChannel_writeString_value = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextOutputChannel_writeString_errorStatus = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_TextOutputChannel_writeNewLine = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextOutputChannel_writeNewLine_errorStatus = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_TextOutputChannel_writeLine = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextOutputChannel_writeLine_value = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextOutputChannel_writeLine_errorStatus = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_TextOutputChannel_writeInteger = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextOutputChannel_writeInteger_value = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextOutputChannel_writeInteger_errorStatus = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_TextOutputChannel_writeReal = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextOutputChannel_writeReal_value = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextOutputChannel_writeReal_errorStatus = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_TextOutputChannel_writeBoolean = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextOutputChannel_writeBoolean_value = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextOutputChannel_writeBoolean_errorStatus = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_TextOutputChannel_writeUnlimitedNatural = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextOutputChannel_writeUnlimitedNatural_value = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_TextOutputChannel_writeUnlimitedNatural_errorStatus = nullptr;

				/*
				 * StandardInputChannel
				 */
				Class_Ptr FoundationalModelLibrary_BasicInputOutput_StandardInputChannel = nullptr;
				GeneralizationPtr FoundationalModelLibrary_BasicInputOutput_StandardInputChannel_Generalization_TextInputChannel = nullptr;

				/*
				 * StandardOutputChannel
				 */
				Class_Ptr FoundationalModelLibrary_BasicInputOutput_StandardOutputChannel = nullptr;
				GeneralizationPtr FoundationalModelLibrary_BasicInputOutput_StandardOutputChannel_Generalization_TextOutputChannel = nullptr;

				/*
				 * Activity WriteLine
				 */
				ActivityPtr FoundationalModelLibrary_BasicInputOutput_WriteLine = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_WriteLine_value = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_WriteLine_errorStatus = nullptr;
				ActivityParameterNodePtr FoundationalModelLibrary_BasicInputOutput_WriteLine_ActivityParameterNode_value = nullptr;
				ActivityParameterNodePtr FoundationalModelLibrary_BasicInputOutput_WriteLine_ActivityParameterNode_errorStatus = nullptr;
				ReadExtentActionPtr FoundationalModelLibrary_BasicInputOutput_WriteLine_ReadExtentAction_StandardOutputChannel = nullptr;
				OutputPinPtr FoundationalModelLibrary_BasicInputOutput_WriteLine_ReadExtentAction_StandardOutputChannel_result = nullptr;
				CallOperationActionPtr FoundationalModelLibrary_BasicInputOutput_WriteLine_CallOperationAction_writeLine = nullptr;
				InputPinPtr FoundationalModelLibrary_BasicInputOutput_WriteLine_CallOperationAction_writeLine_target = nullptr;
				InputPinPtr FoundationalModelLibrary_BasicInputOutput_WriteLine_CallOperationAction_writeLine_value = nullptr;
				OutputPinPtr FoundationalModelLibrary_BasicInputOutput_WriteLine_CallOperationAction_writeLine_errorStatus = nullptr;
				ObjectFlowPtr FoundationalModelLibrary_BasicInputOutput_WriteLine_From_StandardOutputChannel_result_To_writeLine_target = nullptr;
				ObjectFlowPtr FoundationalModelLibrary_BasicInputOutput_WriteLine_From_value_To_writeLine_value = nullptr;
				ObjectFlowPtr FoundationalModelLibrary_BasicInputOutput_WriteLine_From_writeLine_errorStatus_To_errorStatus = nullptr;

				/*
				 * Class ActiveChannel
				 */
				Class_Ptr FoundationalModelLibrary_BasicInputOutput_ActiveChannel = nullptr;
				GeneralizationPtr FoundationalModelLibrary_BasicInputOutput_ActiveChannel_Generalization_Channel = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_ActiveChannel_register = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_ActiveChannel_register_listener = nullptr;
				OperationPtr FoundationalModelLibrary_BasicInputOutput_ActiveChannel_unregister = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_ActiveChannel_unregister_listener = nullptr;

				/*
				 * Activity ReadLine
				 */
				ActivityPtr FoundationalModelLibrary_BasicInputOutput_ReadLine = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_ReadLine_errorStatus = nullptr;
				ParameterPtr FoundationalModelLibrary_BasicInputOutput_ReadLine_result = nullptr;
				ActivityParameterNodePtr FoundationalModelLibrary_BasicInputOutput_ReadLine_ActivityParameterNode_errorStatus = nullptr;
				ActivityParameterNodePtr FoundationalModelLibrary_BasicInputOutput_ReadLine_ActivityParameterNode_result = nullptr;
				ReadExtentActionPtr FoundationalModelLibrary_BasicInputOutput_ReadLine_ReadExtentAction_StandardInputChannel = nullptr;
				OutputPinPtr FoundationalModelLibrary_BasicInputOutput_ReadLine_ReadExtentAction_StandardInputChannel_result = nullptr;
				CallOperationActionPtr FoundationalModelLibrary_BasicInputOutput_ReadLine_CallOperationAction_readLine = nullptr;
				InputPinPtr FoundationalModelLibrary_BasicInputOutput_ReadLine_CallOperationAction_readLine_target = nullptr;
				OutputPinPtr FoundationalModelLibrary_BasicInputOutput_ReadLine_CallOperationAction_readLine_result = nullptr;
				OutputPinPtr FoundationalModelLibrary_BasicInputOutput_ReadLine_CallOperationAction_readLine_errorStatus = nullptr;
				ObjectFlowPtr FoundationalModelLibrary_BasicInputOutput_ReadLine_From_StandardInputChannel_result_To_readLine_target = nullptr;
				ObjectFlowPtr FoundationalModelLibrary_BasicInputOutput_ReadLine_From_readLine_result_To_result = nullptr;
				ObjectFlowPtr FoundationalModelLibrary_BasicInputOutput_ReadLine_From_readLine_errorStatus_To_errorStatus = nullptr;

		public:
			virtual ~FoundationalModelLibraryModel() = default;
			static const std::shared_ptr<FoundationalModelLibraryModel>& Instance();

		private:
			FoundationalModelLibraryModel() = default;
			void initializeInMemoryModel();
	};
}

#endif /* UTILS_LIBRARY_FOUNDATIONALMODELLIBRARYMODEL_H_ */
