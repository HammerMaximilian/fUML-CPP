/*
 * SingleDelegation_P_P_OperationModel.h
 * 
 * Auto-generated file
 */

#ifndef SINGLEDELEGATION_P_P_OPERATION_MODEL_H
#define SINGLEDELEGATION_P_P_OPERATION_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace SingleDelegation_P_P_Operation
{
	class SingleDelegation_P_P_OperationModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model SingleDelegation_P_P_Operation
		 */
		PackagePtr SingleDelegation_P_P_Operation = nullptr;
			Class_Ptr SingleDelegation_P_P_Operation_IImpl = nullptr;
				InterfaceRealizationPtr SingleDelegation_P_P_Operation_IImpl_IRealization = nullptr;
				OperationPtr SingleDelegation_P_P_Operation_IImpl_setP_Integer = nullptr;
					ParameterPtr SingleDelegation_P_P_Operation_IImpl_setP_Integer_v = nullptr;
			AssociationPtr SingleDelegation_P_P_Operation_R = nullptr;
				PropertyPtr SingleDelegation_P_P_Operation_R_y = nullptr;
				PropertyPtr SingleDelegation_P_P_Operation_R_x = nullptr;
			Class_Ptr SingleDelegation_P_P_Operation_B = nullptr;
				OperationPtr SingleDelegation_P_P_Operation_B_setP_Integer = nullptr;
					ParameterPtr SingleDelegation_P_P_Operation_B_setP_Integer_v = nullptr;
				ActivityPtr SingleDelegation_P_P_Operation_B_setPActivity = nullptr;
					ObjectFlowPtr SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow0 = nullptr;
						LiteralBooleanPtr SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow0_LiteralBoolean1 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow0_LiteralInteger2 = nullptr;
					ActivityParameterNodePtr SingleDelegation_P_P_Operation_B_setPActivity_vParameterNode = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_B_setPActivity_vParameterNode_LiteralInteger3 = nullptr;
					ObjectFlowPtr SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow4 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow4_LiteralInteger5 = nullptr;
						LiteralBooleanPtr SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean6 = nullptr;
					ReadSelfActionPtr SingleDelegation_P_P_Operation_B_setPActivity_this = nullptr;
						OutputPinPtr SingleDelegation_P_P_Operation_B_setPActivity_this_result = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Operation_B_setPActivity_this_result_LiteralInteger7 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Operation_B_setPActivity_this_result_LiteralUnlimitedNatural8 = nullptr;
					AddStructuralFeatureValueActionPtr SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p = nullptr;
						InputPinPtr SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_value = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural9 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_value_LiteralInteger10 = nullptr;
						InputPinPtr SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_object = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural11 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_object_LiteralInteger12 = nullptr;
						OutputPinPtr SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_result = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_result_LiteralInteger13 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural14 = nullptr;
					ParameterPtr SingleDelegation_P_P_Operation_B_setPActivity_v = nullptr;
				PropertyPtr SingleDelegation_P_P_Operation_B_p = nullptr;
				OperationPtr SingleDelegation_P_P_Operation_B_B_B = nullptr;
					ParameterPtr SingleDelegation_P_P_Operation_B_B_B_result = nullptr;
				InterfaceRealizationPtr SingleDelegation_P_P_Operation_B_IRealization = nullptr;
			Class_Ptr SingleDelegation_P_P_Operation_A = nullptr;
				PropertyPtr SingleDelegation_P_P_Operation_A_b = nullptr;
				ConnectorPtr SingleDelegation_P_P_Operation_A_r = nullptr;
					ConnectorEndPtr SingleDelegation_P_P_Operation_A_r_ConnectorEnd15 = nullptr;
					ConnectorEndPtr SingleDelegation_P_P_Operation_A_r_ConnectorEnd16 = nullptr;
				OperationPtr SingleDelegation_P_P_Operation_A_A_A = nullptr;
					ParameterPtr SingleDelegation_P_P_Operation_A_A_A_result = nullptr;
				PortPtr SingleDelegation_P_P_Operation_A_q = nullptr;
			InterfacePtr SingleDelegation_P_P_Operation_I = nullptr;
				OperationPtr SingleDelegation_P_P_Operation_I_setP_Integer = nullptr;
					ParameterPtr SingleDelegation_P_P_Operation_I_setP_Integer_v = nullptr;
			ActivityPtr SingleDelegation_P_P_Operation_main = nullptr;
				ReadStructuralFeatureActionPtr SingleDelegation_P_P_Operation_main_Read_a_b_p = nullptr;
					InputPinPtr SingleDelegation_P_P_Operation_main_Read_a_b_p_object = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_Read_a_b_p_object_LiteralInteger17 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Operation_main_Read_a_b_p_object_LiteralUnlimitedNatural18 = nullptr;
					OutputPinPtr SingleDelegation_P_P_Operation_main_Read_a_b_p_result = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Operation_main_Read_a_b_p_result_LiteralUnlimitedNatural19 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_Read_a_b_p_result_LiteralInteger20 = nullptr;
				ControlFlowPtr SingleDelegation_P_P_Operation_main_ControlFlow21 = nullptr;
				ObjectFlowPtr SingleDelegation_P_P_Operation_main_ObjectFlow22 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_P_Operation_main_ObjectFlow22_LiteralBoolean23 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_P_Operation_main_ObjectFlow22_LiteralInteger24 = nullptr;
				CallBehaviorActionPtr SingleDelegation_P_P_Operation_main_Call_testP = nullptr;
					InputPinPtr SingleDelegation_P_P_Operation_main_Call_testP_p = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_Call_testP_p_LiteralInteger25 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_Call_testP_p_LiteralInteger26 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Operation_main_Call_testP_p_LiteralUnlimitedNatural27 = nullptr;
				CallBehaviorActionPtr SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage = nullptr;
					OutputPinPtr SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_errorStatus = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_errorStatus_LiteralInteger28 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_errorStatus_LiteralUnlimitedNatural29 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_errorStatus_LiteralInteger30 = nullptr;
					InputPinPtr SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_value = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_value_LiteralUnlimitedNatural31 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_value_LiteralInteger32 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_value_LiteralInteger33 = nullptr;
				ObjectFlowPtr SingleDelegation_P_P_Operation_main_ObjectFlow34 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_P_Operation_main_ObjectFlow34_LiteralBoolean35 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_P_Operation_main_ObjectFlow34_LiteralInteger36 = nullptr;
				ControlFlowPtr SingleDelegation_P_P_Operation_main_ControlFlow37 = nullptr;
				ReadStructuralFeatureActionPtr SingleDelegation_P_P_Operation_main_Read_a_q = nullptr;
					OutputPinPtr SingleDelegation_P_P_Operation_main_Read_a_q_result = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_Read_a_q_result_LiteralInteger38 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Operation_main_Read_a_q_result_LiteralUnlimitedNatural39 = nullptr;
					InputPinPtr SingleDelegation_P_P_Operation_main_Read_a_q_object = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Operation_main_Read_a_q_object_LiteralUnlimitedNatural40 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_Read_a_q_object_LiteralInteger41 = nullptr;
				ValueSpecificationActionPtr SingleDelegation_P_P_Operation_main_InitialMessage = nullptr;
					OutputPinPtr SingleDelegation_P_P_Operation_main_InitialMessage_result = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_InitialMessage_result_LiteralInteger42 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Operation_main_InitialMessage_result_LiteralUnlimitedNatural43 = nullptr;
					LiteralStringPtr SingleDelegation_P_P_Operation_main_InitialMessage_LiteralString44 = nullptr;
				ForkNodePtr SingleDelegation_P_P_Operation_main_Fork_A = nullptr;
				ObjectFlowPtr SingleDelegation_P_P_Operation_main_ObjectFlow45 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_P_Operation_main_ObjectFlow45_LiteralInteger46 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_P_Operation_main_ObjectFlow45_LiteralBoolean47 = nullptr;
				CallBehaviorActionPtr SingleDelegation_P_P_Operation_main_WriteLine_EndMessage = nullptr;
					InputPinPtr SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_value = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_value_LiteralInteger48 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_value_LiteralInteger49 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_value_LiteralUnlimitedNatural50 = nullptr;
					OutputPinPtr SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_errorStatus = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_errorStatus_LiteralInteger51 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_errorStatus_LiteralInteger52 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_errorStatus_LiteralUnlimitedNatural53 = nullptr;
				CallOperationActionPtr SingleDelegation_P_P_Operation_main_A_ = nullptr;
					OutputPinPtr SingleDelegation_P_P_Operation_main_A__result = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Operation_main_A__result_LiteralUnlimitedNatural54 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_A__result_LiteralInteger55 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_A__result_LiteralInteger56 = nullptr;
					InputPinPtr SingleDelegation_P_P_Operation_main_A__target = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_A__target_LiteralInteger57 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Operation_main_A__target_LiteralUnlimitedNatural58 = nullptr;
				ReadStructuralFeatureActionPtr SingleDelegation_P_P_Operation_main_Read_a_b = nullptr;
					OutputPinPtr SingleDelegation_P_P_Operation_main_Read_a_b_result = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Operation_main_Read_a_b_result_LiteralUnlimitedNatural59 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_Read_a_b_result_LiteralInteger60 = nullptr;
					InputPinPtr SingleDelegation_P_P_Operation_main_Read_a_b_object = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Operation_main_Read_a_b_object_LiteralUnlimitedNatural61 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_Read_a_b_object_LiteralInteger62 = nullptr;
				ObjectFlowPtr SingleDelegation_P_P_Operation_main_ObjectFlow63 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_P_Operation_main_ObjectFlow63_LiteralBoolean64 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_P_Operation_main_ObjectFlow63_LiteralInteger65 = nullptr;
				ObjectFlowPtr SingleDelegation_P_P_Operation_main_ObjectFlow66 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_P_Operation_main_ObjectFlow66_LiteralBoolean67 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_P_Operation_main_ObjectFlow66_LiteralInteger68 = nullptr;
				ValueSpecificationActionPtr SingleDelegation_P_P_Operation_main_Value_4 = nullptr;
					OutputPinPtr SingleDelegation_P_P_Operation_main_Value_4_result = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_Value_4_result_LiteralInteger69 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Operation_main_Value_4_result_LiteralUnlimitedNatural70 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_P_Operation_main_Value_4_LiteralInteger71 = nullptr;
				ObjectFlowPtr SingleDelegation_P_P_Operation_main_ObjectFlow72 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_P_Operation_main_ObjectFlow72_LiteralInteger73 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_P_Operation_main_ObjectFlow72_LiteralBoolean74 = nullptr;
				ObjectFlowPtr SingleDelegation_P_P_Operation_main_ObjectFlow75 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_P_Operation_main_ObjectFlow75_LiteralInteger76 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_P_Operation_main_ObjectFlow75_LiteralBoolean77 = nullptr;
				ObjectFlowPtr SingleDelegation_P_P_Operation_main_ObjectFlow78 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_P_Operation_main_ObjectFlow78_LiteralInteger79 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_P_Operation_main_ObjectFlow78_LiteralBoolean80 = nullptr;
				ControlFlowPtr SingleDelegation_P_P_Operation_main_ControlFlow81 = nullptr;
				ObjectFlowPtr SingleDelegation_P_P_Operation_main_ObjectFlow82 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_P_Operation_main_ObjectFlow82_LiteralInteger83 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_P_Operation_main_ObjectFlow82_LiteralBoolean84 = nullptr;
				CallOperationActionPtr SingleDelegation_P_P_Operation_main_Call_a_q_setP = nullptr;
					InputPinPtr SingleDelegation_P_P_Operation_main_Call_a_q_setP_v = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_Call_a_q_setP_v_LiteralInteger85 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Operation_main_Call_a_q_setP_v_LiteralUnlimitedNatural86 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_Call_a_q_setP_v_LiteralInteger87 = nullptr;
					InputPinPtr SingleDelegation_P_P_Operation_main_Call_a_q_setP_target = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_Call_a_q_setP_target_LiteralInteger88 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Operation_main_Call_a_q_setP_target_LiteralUnlimitedNatural89 = nullptr;
				OpaqueBehaviorPtr SingleDelegation_P_P_Operation_main_testP = nullptr;
					ParameterPtr SingleDelegation_P_P_Operation_main_testP_p = nullptr;
				ValueSpecificationActionPtr SingleDelegation_P_P_Operation_main_EndMessage = nullptr;
					OutputPinPtr SingleDelegation_P_P_Operation_main_EndMessage_result = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Operation_main_EndMessage_result_LiteralUnlimitedNatural90 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_EndMessage_result_LiteralInteger91 = nullptr;
					LiteralStringPtr SingleDelegation_P_P_Operation_main_EndMessage_LiteralString92 = nullptr;
				CreateObjectActionPtr SingleDelegation_P_P_Operation_main_Create_A = nullptr;
					OutputPinPtr SingleDelegation_P_P_Operation_main_Create_A_result = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Operation_main_Create_A_result_LiteralUnlimitedNatural93 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Operation_main_Create_A_result_LiteralInteger94 = nullptr;
				ObjectFlowPtr SingleDelegation_P_P_Operation_main_ObjectFlow95 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_P_Operation_main_ObjectFlow95_LiteralBoolean96 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_P_Operation_main_ObjectFlow95_LiteralInteger97 = nullptr;

		public:
			virtual ~SingleDelegation_P_P_OperationModel();
			static const std::shared_ptr<SingleDelegation_P_P_OperationModel>& Instance();

		private:
			SingleDelegation_P_P_OperationModel();
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

#endif /* SINGLEDELEGATION_P_P_OPERATION_MODEL_H */
