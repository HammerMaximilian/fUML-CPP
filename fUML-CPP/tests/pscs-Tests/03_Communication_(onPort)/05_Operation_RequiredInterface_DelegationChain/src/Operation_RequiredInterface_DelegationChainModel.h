/*
 * Operation_RequiredInterface_DelegationChainModel.h
 * 
 * Auto-generated file
 */

#ifndef OPERATION_REQUIREDINTERFACE_DELEGATIONCHAIN_MODEL_H
#define OPERATION_REQUIREDINTERFACE_DELEGATIONCHAIN_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace Operation_RequiredInterface_DelegationChain
{
	class Operation_RequiredInterface_DelegationChainModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model Operation_RequiredInterface_DelegationChain
		 */
		PackagePtr Operation_RequiredInterface_DelegationChain = nullptr;
			Class_Ptr Operation_RequiredInterface_DelegationChain_C = nullptr;
				OperationPtr Operation_RequiredInterface_DelegationChain_C_setP_Integer = nullptr;
					ParameterPtr Operation_RequiredInterface_DelegationChain_C_setP_Integer_v = nullptr;
				PortPtr Operation_RequiredInterface_DelegationChain_C_q = nullptr;
				InterfaceRealizationPtr Operation_RequiredInterface_DelegationChain_C_IRealization = nullptr;
				ActivityPtr Operation_RequiredInterface_DelegationChain_C_setPActivity = nullptr;
					ObjectFlowPtr Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow0 = nullptr;
						LiteralBooleanPtr Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow0_LiteralBoolean1 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow0_LiteralInteger2 = nullptr;
					ActivityParameterNodePtr Operation_RequiredInterface_DelegationChain_C_setPActivity_vParameterNode = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_C_setPActivity_vParameterNode_LiteralInteger3 = nullptr;
					ObjectFlowPtr Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow4 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow4_LiteralInteger5 = nullptr;
						LiteralBooleanPtr Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow4_LiteralBoolean6 = nullptr;
					ReadSelfActionPtr Operation_RequiredInterface_DelegationChain_C_setPActivity_this = nullptr;
						OutputPinPtr Operation_RequiredInterface_DelegationChain_C_setPActivity_this_result = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_C_setPActivity_this_result_LiteralInteger7 = nullptr;
							LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_C_setPActivity_this_result_LiteralUnlimitedNatural8 = nullptr;
					ParameterPtr Operation_RequiredInterface_DelegationChain_C_setPActivity_v = nullptr;
					CallOperationActionPtr Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q = nullptr;
						InputPinPtr Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_target = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_target_LiteralInteger9 = nullptr;
							LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_target_LiteralUnlimitedNatural10 = nullptr;
						InputPinPtr Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_v = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_v_LiteralInteger11 = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_v_LiteralInteger12 = nullptr;
							LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_v_LiteralUnlimitedNatural13 = nullptr;
			AssociationPtr Operation_RequiredInterface_DelegationChain_S = nullptr;
				PropertyPtr Operation_RequiredInterface_DelegationChain_S_y = nullptr;
				PropertyPtr Operation_RequiredInterface_DelegationChain_S_x = nullptr;
			ActivityPtr Operation_RequiredInterface_DelegationChain_main = nullptr;
				ControlFlowPtr Operation_RequiredInterface_DelegationChain_main_ControlFlow14 = nullptr;
				ValueSpecificationActionPtr Operation_RequiredInterface_DelegationChain_main_Value_4 = nullptr;
					OutputPinPtr Operation_RequiredInterface_DelegationChain_main_Value_4_result = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_main_Value_4_result_LiteralUnlimitedNatural15 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_Value_4_result_LiteralInteger16 = nullptr;
					LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_Value_4_LiteralInteger17 = nullptr;
				ReadStructuralFeatureActionPtr Operation_RequiredInterface_DelegationChain_main_Read_a_b = nullptr;
					InputPinPtr Operation_RequiredInterface_DelegationChain_main_Read_a_b_object = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_Read_a_b_object_LiteralInteger18 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_main_Read_a_b_object_LiteralUnlimitedNatural19 = nullptr;
					OutputPinPtr Operation_RequiredInterface_DelegationChain_main_Read_a_b_result = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_Read_a_b_result_LiteralInteger20 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_main_Read_a_b_result_LiteralUnlimitedNatural21 = nullptr;
				ObjectFlowPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow22 = nullptr;
					LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow22_LiteralInteger23 = nullptr;
					LiteralBooleanPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow22_LiteralBoolean24 = nullptr;
				CreateObjectActionPtr Operation_RequiredInterface_DelegationChain_main_Create_D = nullptr;
					OutputPinPtr Operation_RequiredInterface_DelegationChain_main_Create_D_result = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_Create_D_result_LiteralInteger25 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_main_Create_D_result_LiteralUnlimitedNatural26 = nullptr;
				ForkNodePtr Operation_RequiredInterface_DelegationChain_main_Fork_d = nullptr;
				ObjectFlowPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow27 = nullptr;
					LiteralBooleanPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow27_LiteralBoolean28 = nullptr;
					LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow27_LiteralInteger29 = nullptr;
				ObjectFlowPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow30 = nullptr;
					LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow30_LiteralInteger31 = nullptr;
					LiteralBooleanPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow30_LiteralBoolean32 = nullptr;
				ReadStructuralFeatureActionPtr Operation_RequiredInterface_DelegationChain_main_Read_b_p = nullptr;
					OutputPinPtr Operation_RequiredInterface_DelegationChain_main_Read_b_p_result = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_Read_b_p_result_LiteralInteger33 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_main_Read_b_p_result_LiteralUnlimitedNatural34 = nullptr;
					InputPinPtr Operation_RequiredInterface_DelegationChain_main_Read_b_p_object = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_main_Read_b_p_object_LiteralUnlimitedNatural35 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_Read_b_p_object_LiteralInteger36 = nullptr;
				ReadStructuralFeatureActionPtr Operation_RequiredInterface_DelegationChain_main_Read_d_a = nullptr;
					OutputPinPtr Operation_RequiredInterface_DelegationChain_main_Read_d_a_result = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_Read_d_a_result_LiteralInteger37 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_main_Read_d_a_result_LiteralUnlimitedNatural38 = nullptr;
					InputPinPtr Operation_RequiredInterface_DelegationChain_main_Read_d_a_object = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_Read_d_a_object_LiteralInteger39 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_main_Read_d_a_object_LiteralUnlimitedNatural40 = nullptr;
				ObjectFlowPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow41 = nullptr;
					LiteralBooleanPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow41_LiteralBoolean42 = nullptr;
					LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow41_LiteralInteger43 = nullptr;
				ReadStructuralFeatureActionPtr Operation_RequiredInterface_DelegationChain_main_Read_e_c = nullptr;
					OutputPinPtr Operation_RequiredInterface_DelegationChain_main_Read_e_c_result = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_main_Read_e_c_result_LiteralUnlimitedNatural44 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_Read_e_c_result_LiteralInteger45 = nullptr;
					InputPinPtr Operation_RequiredInterface_DelegationChain_main_Read_e_c_object = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_main_Read_e_c_object_LiteralUnlimitedNatural46 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_Read_e_c_object_LiteralInteger47 = nullptr;
				ObjectFlowPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow48 = nullptr;
					LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow48_LiteralInteger49 = nullptr;
					LiteralBooleanPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow48_LiteralBoolean50 = nullptr;
				ObjectFlowPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow51 = nullptr;
					LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow51_LiteralInteger52 = nullptr;
					LiteralBooleanPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow51_LiteralBoolean53 = nullptr;
				ObjectFlowPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow54 = nullptr;
					LiteralBooleanPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow54_LiteralBoolean55 = nullptr;
					LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow54_LiteralInteger56 = nullptr;
				OpaqueBehaviorPtr Operation_RequiredInterface_DelegationChain_main_testP = nullptr;
					ParameterPtr Operation_RequiredInterface_DelegationChain_main_testP_p = nullptr;
				CallOperationActionPtr Operation_RequiredInterface_DelegationChain_main_Call_setP_ = nullptr;
					InputPinPtr Operation_RequiredInterface_DelegationChain_main_Call_setP__v = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_main_Call_setP__v_LiteralUnlimitedNatural57 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_Call_setP__v_LiteralInteger58 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_Call_setP__v_LiteralInteger59 = nullptr;
					InputPinPtr Operation_RequiredInterface_DelegationChain_main_Call_setP__target = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_Call_setP__target_LiteralInteger60 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_main_Call_setP__target_LiteralUnlimitedNatural61 = nullptr;
				CallBehaviorActionPtr Operation_RequiredInterface_DelegationChain_main_Call_testP = nullptr;
					InputPinPtr Operation_RequiredInterface_DelegationChain_main_Call_testP_p = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_main_Call_testP_p_LiteralUnlimitedNatural62 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_Call_testP_p_LiteralInteger63 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_Call_testP_p_LiteralInteger64 = nullptr;
				ReadStructuralFeatureActionPtr Operation_RequiredInterface_DelegationChain_main_Read_d_e = nullptr;
					OutputPinPtr Operation_RequiredInterface_DelegationChain_main_Read_d_e_result = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_main_Read_d_e_result_LiteralUnlimitedNatural65 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_Read_d_e_result_LiteralInteger66 = nullptr;
					InputPinPtr Operation_RequiredInterface_DelegationChain_main_Read_d_e_object = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_main_Read_d_e_object_LiteralUnlimitedNatural67 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_Read_d_e_object_LiteralInteger68 = nullptr;
				CallOperationActionPtr Operation_RequiredInterface_DelegationChain_main_D_ = nullptr;
					OutputPinPtr Operation_RequiredInterface_DelegationChain_main_D__result = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_D__result_LiteralInteger69 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_main_D__result_LiteralUnlimitedNatural70 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_D__result_LiteralInteger71 = nullptr;
					InputPinPtr Operation_RequiredInterface_DelegationChain_main_D__target = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_D__target_LiteralInteger72 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_main_D__target_LiteralUnlimitedNatural73 = nullptr;
				ObjectFlowPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow74 = nullptr;
					LiteralBooleanPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow74_LiteralBoolean75 = nullptr;
					LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow74_LiteralInteger76 = nullptr;
				ObjectFlowPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow77 = nullptr;
					LiteralBooleanPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow77_LiteralBoolean78 = nullptr;
					LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow77_LiteralInteger79 = nullptr;
				ObjectFlowPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow80 = nullptr;
					LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow80_LiteralInteger81 = nullptr;
					LiteralBooleanPtr Operation_RequiredInterface_DelegationChain_main_ObjectFlow80_LiteralBoolean82 = nullptr;
			InterfacePtr Operation_RequiredInterface_DelegationChain_I = nullptr;
				OperationPtr Operation_RequiredInterface_DelegationChain_I_setP_Integer = nullptr;
					ParameterPtr Operation_RequiredInterface_DelegationChain_I_setP_Integer_v = nullptr;
			Class_Ptr Operation_RequiredInterface_DelegationChain_D = nullptr;
				OperationPtr Operation_RequiredInterface_DelegationChain_D_D_D = nullptr;
					ParameterPtr Operation_RequiredInterface_DelegationChain_D_D_D_result = nullptr;
				PropertyPtr Operation_RequiredInterface_DelegationChain_D_a = nullptr;
				PropertyPtr Operation_RequiredInterface_DelegationChain_D_e = nullptr;
				ConnectorPtr Operation_RequiredInterface_DelegationChain_D_s = nullptr;
					ConnectorEndPtr Operation_RequiredInterface_DelegationChain_D_s_ConnectorEnd83 = nullptr;
					ConnectorEndPtr Operation_RequiredInterface_DelegationChain_D_s_ConnectorEnd84 = nullptr;
			AssociationPtr Operation_RequiredInterface_DelegationChain_R = nullptr;
				PropertyPtr Operation_RequiredInterface_DelegationChain_R_x = nullptr;
				PropertyPtr Operation_RequiredInterface_DelegationChain_R_y = nullptr;
			Class_Ptr Operation_RequiredInterface_DelegationChain_A = nullptr;
				PropertyPtr Operation_RequiredInterface_DelegationChain_A_b = nullptr;
				PortPtr Operation_RequiredInterface_DelegationChain_A_q = nullptr;
				OperationPtr Operation_RequiredInterface_DelegationChain_A_setP_Integer = nullptr;
					ParameterPtr Operation_RequiredInterface_DelegationChain_A_setP_Integer_v = nullptr;
				ActivityPtr Operation_RequiredInterface_DelegationChain_A_setPActivity = nullptr;
					ActivityParameterNodePtr Operation_RequiredInterface_DelegationChain_A_setPActivity_vParameterNode = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_A_setPActivity_vParameterNode_LiteralInteger85 = nullptr;
					ReadSelfActionPtr Operation_RequiredInterface_DelegationChain_A_setPActivity_this = nullptr;
						OutputPinPtr Operation_RequiredInterface_DelegationChain_A_setPActivity_this_result = nullptr;
							LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_A_setPActivity_this_result_LiteralUnlimitedNatural86 = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_A_setPActivity_this_result_LiteralInteger87 = nullptr;
					ObjectFlowPtr Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow88 = nullptr;
						LiteralBooleanPtr Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow88_LiteralBoolean89 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow88_LiteralInteger90 = nullptr;
					ObjectFlowPtr Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow91 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow91_LiteralInteger92 = nullptr;
						LiteralBooleanPtr Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow91_LiteralBoolean93 = nullptr;
					ParameterPtr Operation_RequiredInterface_DelegationChain_A_setPActivity_v = nullptr;
					CallOperationActionPtr Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q = nullptr;
						InputPinPtr Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_v = nullptr;
							LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_v_LiteralUnlimitedNatural94 = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger95 = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger96 = nullptr;
						InputPinPtr Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_target = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_target_LiteralInteger97 = nullptr;
							LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_target_LiteralUnlimitedNatural98 = nullptr;
				ConnectorPtr Operation_RequiredInterface_DelegationChain_A_r = nullptr;
					ConnectorEndPtr Operation_RequiredInterface_DelegationChain_A_r_ConnectorEnd99 = nullptr;
					ConnectorEndPtr Operation_RequiredInterface_DelegationChain_A_r_ConnectorEnd100 = nullptr;
			Class_Ptr Operation_RequiredInterface_DelegationChain_E = nullptr;
				PropertyPtr Operation_RequiredInterface_DelegationChain_E_c = nullptr;
				ConnectorPtr Operation_RequiredInterface_DelegationChain_E_s = nullptr;
					ConnectorEndPtr Operation_RequiredInterface_DelegationChain_E_s_ConnectorEnd101 = nullptr;
					ConnectorEndPtr Operation_RequiredInterface_DelegationChain_E_s_ConnectorEnd102 = nullptr;
				PortPtr Operation_RequiredInterface_DelegationChain_E_q = nullptr;
			Class_Ptr Operation_RequiredInterface_DelegationChain_IImpl = nullptr;
				InterfaceRealizationPtr Operation_RequiredInterface_DelegationChain_IImpl_IRealization = nullptr;
				OperationPtr Operation_RequiredInterface_DelegationChain_IImpl_setP_Integer = nullptr;
					ParameterPtr Operation_RequiredInterface_DelegationChain_IImpl_setP_Integer_v = nullptr;
			Class_Ptr Operation_RequiredInterface_DelegationChain_B = nullptr;
				ActivityPtr Operation_RequiredInterface_DelegationChain_B_setPActivity = nullptr;
					ObjectFlowPtr Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow103 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow103_LiteralInteger104 = nullptr;
						LiteralBooleanPtr Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow103_LiteralBoolean105 = nullptr;
					ObjectFlowPtr Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow106 = nullptr;
						LiteralBooleanPtr Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow106_LiteralBoolean107 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow106_LiteralInteger108 = nullptr;
					ParameterPtr Operation_RequiredInterface_DelegationChain_B_setPActivity_v = nullptr;
					ActivityParameterNodePtr Operation_RequiredInterface_DelegationChain_B_setPActivity_vParameterNode = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_B_setPActivity_vParameterNode_LiteralInteger109 = nullptr;
					AddStructuralFeatureValueActionPtr Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p = nullptr;
						InputPinPtr Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_value = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_value_LiteralInteger110 = nullptr;
							LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural111 = nullptr;
						InputPinPtr Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_object = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_object_LiteralInteger112 = nullptr;
							LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural113 = nullptr;
						OutputPinPtr Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_result = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_result_LiteralInteger114 = nullptr;
							LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural115 = nullptr;
					ReadSelfActionPtr Operation_RequiredInterface_DelegationChain_B_setPActivity_this = nullptr;
						OutputPinPtr Operation_RequiredInterface_DelegationChain_B_setPActivity_this_result = nullptr;
							LiteralUnlimitedNaturalPtr Operation_RequiredInterface_DelegationChain_B_setPActivity_this_result_LiteralUnlimitedNatural116 = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_DelegationChain_B_setPActivity_this_result_LiteralInteger117 = nullptr;
				PropertyPtr Operation_RequiredInterface_DelegationChain_B_p = nullptr;
				InterfaceRealizationPtr Operation_RequiredInterface_DelegationChain_B_IRealization = nullptr;
				OperationPtr Operation_RequiredInterface_DelegationChain_B_setP_Integer = nullptr;
					ParameterPtr Operation_RequiredInterface_DelegationChain_B_setP_Integer_v = nullptr;

		public:
			virtual ~Operation_RequiredInterface_DelegationChainModel();
			static const std::shared_ptr<Operation_RequiredInterface_DelegationChainModel>& Instance();

		private:
			Operation_RequiredInterface_DelegationChainModel();
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

#endif /* OPERATION_REQUIREDINTERFACE_DELEGATIONCHAIN_MODEL_H */
