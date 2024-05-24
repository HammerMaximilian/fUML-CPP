/*
 * SingleDelegation_P_PWP_OperationModel.h
 * 
 * Auto-generated file
 */

#ifndef SINGLEDELEGATION_P_PWP_OPERATION_MODEL_H
#define SINGLEDELEGATION_P_PWP_OPERATION_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace SingleDelegation_P_PWP_Operation
{
	class SingleDelegation_P_PWP_OperationModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model SingleDelegation_P_PWP_Operation
		 */
		PackagePtr SingleDelegation_P_PWP_Operation = nullptr;
			AssociationPtr SingleDelegation_P_PWP_Operation_R = nullptr;
				PropertyPtr SingleDelegation_P_PWP_Operation_R_y = nullptr;
				PropertyPtr SingleDelegation_P_PWP_Operation_R_x = nullptr;
			ActivityPtr SingleDelegation_P_PWP_Operation_main = nullptr;
				ReadStructuralFeatureActionPtr SingleDelegation_P_PWP_Operation_main_Read_c_a = nullptr;
					OutputPinPtr SingleDelegation_P_PWP_Operation_main_Read_c_a_result = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_main_Read_c_a_result_LiteralUnlimitedNatural0 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_Read_c_a_result_LiteralInteger1 = nullptr;
					InputPinPtr SingleDelegation_P_PWP_Operation_main_Read_c_a_object = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_main_Read_c_a_object_LiteralUnlimitedNatural2 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_Read_c_a_object_LiteralInteger3 = nullptr;
				ObjectFlowPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow4 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow4_LiteralBoolean5 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow4_LiteralInteger6 = nullptr;
				ReadStructuralFeatureActionPtr SingleDelegation_P_PWP_Operation_main_Read_b_p = nullptr;
					InputPinPtr SingleDelegation_P_PWP_Operation_main_Read_b_p_object = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_Read_b_p_object_LiteralInteger7 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_main_Read_b_p_object_LiteralUnlimitedNatural8 = nullptr;
					OutputPinPtr SingleDelegation_P_PWP_Operation_main_Read_b_p_result = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_main_Read_b_p_result_LiteralUnlimitedNatural9 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_Read_b_p_result_LiteralInteger10 = nullptr;
				CallBehaviorActionPtr SingleDelegation_P_PWP_Operation_main_Call_testP = nullptr;
					InputPinPtr SingleDelegation_P_PWP_Operation_main_Call_testP_p = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_Call_testP_p_LiteralInteger11 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_main_Call_testP_p_LiteralUnlimitedNatural12 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_Call_testP_p_LiteralInteger13 = nullptr;
				ObjectFlowPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow14 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow14_LiteralBoolean15 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow14_LiteralInteger16 = nullptr;
				ControlFlowPtr SingleDelegation_P_PWP_Operation_main_ControlFlow17 = nullptr;
				CreateObjectActionPtr SingleDelegation_P_PWP_Operation_main_Create_C = nullptr;
					OutputPinPtr SingleDelegation_P_PWP_Operation_main_Create_C_result = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_Create_C_result_LiteralInteger18 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_main_Create_C_result_LiteralUnlimitedNatural19 = nullptr;
				ReadStructuralFeatureActionPtr SingleDelegation_P_PWP_Operation_main_Read_c_p = nullptr;
					OutputPinPtr SingleDelegation_P_PWP_Operation_main_Read_c_p_result = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_Read_c_p_result_LiteralInteger20 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_main_Read_c_p_result_LiteralUnlimitedNatural21 = nullptr;
					InputPinPtr SingleDelegation_P_PWP_Operation_main_Read_c_p_object = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_Read_c_p_object_LiteralInteger22 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_main_Read_c_p_object_LiteralUnlimitedNatural23 = nullptr;
				OpaqueBehaviorPtr SingleDelegation_P_PWP_Operation_main_testP = nullptr;
					ParameterPtr SingleDelegation_P_PWP_Operation_main_testP_p = nullptr;
				ObjectFlowPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow24 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow24_LiteralBoolean25 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow24_LiteralInteger26 = nullptr;
				ObjectFlowPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow27 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow27_LiteralBoolean28 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow27_LiteralInteger29 = nullptr;
				CallOperationActionPtr SingleDelegation_P_PWP_Operation_main_C_ = nullptr;
					OutputPinPtr SingleDelegation_P_PWP_Operation_main_C__result = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_C__result_LiteralInteger30 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_C__result_LiteralInteger31 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_main_C__result_LiteralUnlimitedNatural32 = nullptr;
					InputPinPtr SingleDelegation_P_PWP_Operation_main_C__target = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_C__target_LiteralInteger33 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_main_C__target_LiteralUnlimitedNatural34 = nullptr;
				ReadStructuralFeatureActionPtr SingleDelegation_P_PWP_Operation_main_Read_a_b = nullptr;
					InputPinPtr SingleDelegation_P_PWP_Operation_main_Read_a_b_object = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_main_Read_a_b_object_LiteralUnlimitedNatural35 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_Read_a_b_object_LiteralInteger36 = nullptr;
					OutputPinPtr SingleDelegation_P_PWP_Operation_main_Read_a_b_result = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_main_Read_a_b_result_LiteralUnlimitedNatural37 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_Read_a_b_result_LiteralInteger38 = nullptr;
				ObjectFlowPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow39 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow39_LiteralInteger40 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow39_LiteralBoolean41 = nullptr;
				ObjectFlowPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow42 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow42_LiteralInteger43 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow42_LiteralBoolean44 = nullptr;
				ObjectFlowPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow45 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow45_LiteralInteger46 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow45_LiteralBoolean47 = nullptr;
				ObjectFlowPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow48 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow48_LiteralInteger49 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow48_LiteralBoolean50 = nullptr;
				ControlFlowPtr SingleDelegation_P_PWP_Operation_main_ControlFlow51 = nullptr;
				ValueSpecificationActionPtr SingleDelegation_P_PWP_Operation_main_Value_4 = nullptr;
					OutputPinPtr SingleDelegation_P_PWP_Operation_main_Value_4_result = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_main_Value_4_result_LiteralUnlimitedNatural52 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_Value_4_result_LiteralInteger53 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_Value_4_LiteralInteger54 = nullptr;
				ControlFlowPtr SingleDelegation_P_PWP_Operation_main_ControlFlow55 = nullptr;
				ValueSpecificationActionPtr SingleDelegation_P_PWP_Operation_main_InitialMessage = nullptr;
					OutputPinPtr SingleDelegation_P_PWP_Operation_main_InitialMessage_result = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_main_InitialMessage_result_LiteralUnlimitedNatural56 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_InitialMessage_result_LiteralInteger57 = nullptr;
					LiteralStringPtr SingleDelegation_P_PWP_Operation_main_InitialMessage_LiteralString58 = nullptr;
				CallBehaviorActionPtr SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage = nullptr;
					InputPinPtr SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_value = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_value_LiteralInteger59 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_value_LiteralInteger60 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_value_LiteralUnlimitedNatural61 = nullptr;
					OutputPinPtr SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_errorStatus = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_errorStatus_LiteralInteger62 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_errorStatus_LiteralInteger63 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_errorStatus_LiteralUnlimitedNatural64 = nullptr;
				ObjectFlowPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow65 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow65_LiteralInteger66 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow65_LiteralBoolean67 = nullptr;
				ObjectFlowPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow68 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow68_LiteralInteger69 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow68_LiteralBoolean70 = nullptr;
				ForkNodePtr SingleDelegation_P_PWP_Operation_main_Fork_C = nullptr;
				CallBehaviorActionPtr SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage = nullptr;
					InputPinPtr SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_value = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_value_LiteralInteger71 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_value_LiteralUnlimitedNatural72 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_value_LiteralInteger73 = nullptr;
					OutputPinPtr SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_errorStatus = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_errorStatus_LiteralInteger74 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_errorStatus_LiteralInteger75 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_errorStatus_LiteralUnlimitedNatural76 = nullptr;
				ObjectFlowPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow77 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow77_LiteralInteger78 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_PWP_Operation_main_ObjectFlow77_LiteralBoolean79 = nullptr;
				CallOperationActionPtr SingleDelegation_P_PWP_Operation_main_Call_c_p_setP = nullptr;
					InputPinPtr SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_target = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_target_LiteralInteger80 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_target_LiteralUnlimitedNatural81 = nullptr;
					InputPinPtr SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_v = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_v_LiteralInteger82 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_v_LiteralInteger83 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_v_LiteralUnlimitedNatural84 = nullptr;
				ValueSpecificationActionPtr SingleDelegation_P_PWP_Operation_main_EndMessage = nullptr;
					LiteralStringPtr SingleDelegation_P_PWP_Operation_main_EndMessage_LiteralString85 = nullptr;
					OutputPinPtr SingleDelegation_P_PWP_Operation_main_EndMessage_result = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_main_EndMessage_result_LiteralUnlimitedNatural86 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_main_EndMessage_result_LiteralInteger87 = nullptr;
			AssociationPtr SingleDelegation_P_PWP_Operation_U = nullptr;
				PropertyPtr SingleDelegation_P_PWP_Operation_U_y = nullptr;
				PropertyPtr SingleDelegation_P_PWP_Operation_U_x = nullptr;
			Class_Ptr SingleDelegation_P_PWP_Operation_IImpl = nullptr;
				OperationPtr SingleDelegation_P_PWP_Operation_IImpl_setP_Integer = nullptr;
					ParameterPtr SingleDelegation_P_PWP_Operation_IImpl_setP_Integer_v = nullptr;
				InterfaceRealizationPtr SingleDelegation_P_PWP_Operation_IImpl_IRealization = nullptr;
			Class_Ptr SingleDelegation_P_PWP_Operation_A = nullptr;
				PropertyPtr SingleDelegation_P_PWP_Operation_A_b = nullptr;
				OperationPtr SingleDelegation_P_PWP_Operation_A_A_A = nullptr;
					ParameterPtr SingleDelegation_P_PWP_Operation_A_A_A_result = nullptr;
				PortPtr SingleDelegation_P_PWP_Operation_A_q = nullptr;
				ConnectorPtr SingleDelegation_P_PWP_Operation_A_r = nullptr;
					ConnectorEndPtr SingleDelegation_P_PWP_Operation_A_r_ConnectorEnd88 = nullptr;
					ConnectorEndPtr SingleDelegation_P_PWP_Operation_A_r_ConnectorEnd89 = nullptr;
			InterfacePtr SingleDelegation_P_PWP_Operation_I = nullptr;
				OperationPtr SingleDelegation_P_PWP_Operation_I_setP_Integer = nullptr;
					ParameterPtr SingleDelegation_P_PWP_Operation_I_setP_Integer_v = nullptr;
			Class_Ptr SingleDelegation_P_PWP_Operation_C = nullptr;
				PropertyPtr SingleDelegation_P_PWP_Operation_C_a = nullptr;
				ConnectorPtr SingleDelegation_P_PWP_Operation_C_u = nullptr;
					ConnectorEndPtr SingleDelegation_P_PWP_Operation_C_u_ConnectorEnd90 = nullptr;
					ConnectorEndPtr SingleDelegation_P_PWP_Operation_C_u_ConnectorEnd91 = nullptr;
				OperationPtr SingleDelegation_P_PWP_Operation_C_C_C = nullptr;
					ParameterPtr SingleDelegation_P_PWP_Operation_C_C_C_result = nullptr;
				PortPtr SingleDelegation_P_PWP_Operation_C_p = nullptr;
			Class_Ptr SingleDelegation_P_PWP_Operation_B = nullptr;
				InterfaceRealizationPtr SingleDelegation_P_PWP_Operation_B_IRealization = nullptr;
				ActivityPtr SingleDelegation_P_PWP_Operation_B_setPActivity = nullptr;
					AddStructuralFeatureValueActionPtr SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p = nullptr;
						InputPinPtr SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_value = nullptr;
							LiteralIntegerPtr SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_value_LiteralInteger92 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural93 = nullptr;
						InputPinPtr SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_object = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural94 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_object_LiteralInteger95 = nullptr;
						OutputPinPtr SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_result = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural96 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_result_LiteralInteger97 = nullptr;
					ObjectFlowPtr SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow98 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow98_LiteralInteger99 = nullptr;
						LiteralBooleanPtr SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow98_LiteralBoolean100 = nullptr;
					ObjectFlowPtr SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow101 = nullptr;
						LiteralBooleanPtr SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow101_LiteralBoolean102 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow101_LiteralInteger103 = nullptr;
					ActivityParameterNodePtr SingleDelegation_P_PWP_Operation_B_setPActivity_vParameterNode = nullptr;
						LiteralIntegerPtr SingleDelegation_P_PWP_Operation_B_setPActivity_vParameterNode_LiteralInteger104 = nullptr;
					ParameterPtr SingleDelegation_P_PWP_Operation_B_setPActivity_v = nullptr;
					ReadSelfActionPtr SingleDelegation_P_PWP_Operation_B_setPActivity_this = nullptr;
						OutputPinPtr SingleDelegation_P_PWP_Operation_B_setPActivity_this_result = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_PWP_Operation_B_setPActivity_this_result_LiteralUnlimitedNatural105 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_PWP_Operation_B_setPActivity_this_result_LiteralInteger106 = nullptr;
				OperationPtr SingleDelegation_P_PWP_Operation_B_B_B = nullptr;
					ParameterPtr SingleDelegation_P_PWP_Operation_B_B_B_result = nullptr;
				PropertyPtr SingleDelegation_P_PWP_Operation_B_p = nullptr;
				OperationPtr SingleDelegation_P_PWP_Operation_B_setP_Integer = nullptr;
					ParameterPtr SingleDelegation_P_PWP_Operation_B_setP_Integer_v = nullptr;

		public:
			virtual ~SingleDelegation_P_PWP_OperationModel();
			static const std::shared_ptr<SingleDelegation_P_PWP_OperationModel>& Instance();

		private:
			SingleDelegation_P_PWP_OperationModel();
			void initializeInMemoryModel();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* SINGLEDELEGATION_P_PWP_OPERATION_MODEL_H */
