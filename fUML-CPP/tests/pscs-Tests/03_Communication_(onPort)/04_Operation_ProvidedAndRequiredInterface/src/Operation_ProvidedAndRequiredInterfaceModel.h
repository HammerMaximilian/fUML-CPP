/*
 * Operation_ProvidedAndRequiredInterfaceModel.h
 * 
 * Auto-generated file
 */

#ifndef OPERATION_PROVIDEDANDREQUIREDINTERFACE_MODEL_H
#define OPERATION_PROVIDEDANDREQUIREDINTERFACE_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace Operation_ProvidedAndRequiredInterface
{
	class Operation_ProvidedAndRequiredInterfaceModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model Operation_ProvidedAndRequiredInterface
		 */
		PackagePtr Operation_ProvidedAndRequiredInterface = nullptr;
			AssociationPtr Operation_ProvidedAndRequiredInterface_R = nullptr;
				PropertyPtr Operation_ProvidedAndRequiredInterface_R_y = nullptr;
				PropertyPtr Operation_ProvidedAndRequiredInterface_R_x = nullptr;
			AssociationPtr Operation_ProvidedAndRequiredInterface_S = nullptr;
				PropertyPtr Operation_ProvidedAndRequiredInterface_S_x = nullptr;
				PropertyPtr Operation_ProvidedAndRequiredInterface_S_y = nullptr;
			Class_Ptr Operation_ProvidedAndRequiredInterface_C = nullptr;
				OperationPtr Operation_ProvidedAndRequiredInterface_C_setP_Integer = nullptr;
					ParameterPtr Operation_ProvidedAndRequiredInterface_C_setP_Integer_v = nullptr;
				PortPtr Operation_ProvidedAndRequiredInterface_C_q = nullptr;
				InterfaceRealizationPtr Operation_ProvidedAndRequiredInterface_C_IRealization = nullptr;
				ActivityPtr Operation_ProvidedAndRequiredInterface_C_setPActivity = nullptr;
					ObjectFlowPtr Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow0 = nullptr;
						LiteralBooleanPtr Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow0_LiteralBoolean1 = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow0_LiteralInteger2 = nullptr;
					ActivityParameterNodePtr Operation_ProvidedAndRequiredInterface_C_setPActivity_vParameterNode = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_C_setPActivity_vParameterNode_LiteralInteger3 = nullptr;
					ObjectFlowPtr Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow4 = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow4_LiteralInteger5 = nullptr;
						LiteralBooleanPtr Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow4_LiteralBoolean6 = nullptr;
					ReadSelfActionPtr Operation_ProvidedAndRequiredInterface_C_setPActivity_this = nullptr;
						OutputPinPtr Operation_ProvidedAndRequiredInterface_C_setPActivity_this_result = nullptr;
							LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_C_setPActivity_this_result_LiteralInteger7 = nullptr;
							LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_C_setPActivity_this_result_LiteralUnlimitedNatural8 = nullptr;
					ParameterPtr Operation_ProvidedAndRequiredInterface_C_setPActivity_v = nullptr;
					CallOperationActionPtr Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q = nullptr;
						InputPinPtr Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_target = nullptr;
							LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_target_LiteralInteger9 = nullptr;
							LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_target_LiteralUnlimitedNatural10 = nullptr;
						InputPinPtr Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_v = nullptr;
							LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_v_LiteralInteger11 = nullptr;
							LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_v_LiteralInteger12 = nullptr;
							LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_v_LiteralUnlimitedNatural13 = nullptr;
			InterfacePtr Operation_ProvidedAndRequiredInterface_I = nullptr;
				OperationPtr Operation_ProvidedAndRequiredInterface_I_setP_Integer = nullptr;
					ParameterPtr Operation_ProvidedAndRequiredInterface_I_setP_Integer_v = nullptr;
			Class_Ptr Operation_ProvidedAndRequiredInterface_D = nullptr;
				OperationPtr Operation_ProvidedAndRequiredInterface_D_D_D = nullptr;
					ParameterPtr Operation_ProvidedAndRequiredInterface_D_D_D_result = nullptr;
				PropertyPtr Operation_ProvidedAndRequiredInterface_D_a = nullptr;
				PropertyPtr Operation_ProvidedAndRequiredInterface_D_e = nullptr;
				ConnectorPtr Operation_ProvidedAndRequiredInterface_D_s = nullptr;
					ConnectorEndPtr Operation_ProvidedAndRequiredInterface_D_s_ConnectorEnd14 = nullptr;
					ConnectorEndPtr Operation_ProvidedAndRequiredInterface_D_s_ConnectorEnd15 = nullptr;
			ActivityPtr Operation_ProvidedAndRequiredInterface_main = nullptr;
				ObjectFlowPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow16 = nullptr;
					LiteralBooleanPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow16_LiteralBoolean17 = nullptr;
					LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow16_LiteralInteger18 = nullptr;
				ObjectFlowPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow19 = nullptr;
					LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow19_LiteralInteger20 = nullptr;
					LiteralBooleanPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow19_LiteralBoolean21 = nullptr;
				ObjectFlowPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow22 = nullptr;
					LiteralBooleanPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow22_LiteralBoolean23 = nullptr;
					LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow22_LiteralInteger24 = nullptr;
				ForkNodePtr Operation_ProvidedAndRequiredInterface_main_Fork_d = nullptr;
				CallOperationActionPtr Operation_ProvidedAndRequiredInterface_main_Call_setP_ = nullptr;
					InputPinPtr Operation_ProvidedAndRequiredInterface_main_Call_setP__v = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_Call_setP__v_LiteralInteger25 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_main_Call_setP__v_LiteralUnlimitedNatural26 = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_Call_setP__v_LiteralInteger27 = nullptr;
					InputPinPtr Operation_ProvidedAndRequiredInterface_main_Call_setP__target = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_Call_setP__target_LiteralInteger28 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_main_Call_setP__target_LiteralUnlimitedNatural29 = nullptr;
				ObjectFlowPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow30 = nullptr;
					LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow30_LiteralInteger31 = nullptr;
					LiteralBooleanPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow30_LiteralBoolean32 = nullptr;
				CallBehaviorActionPtr Operation_ProvidedAndRequiredInterface_main_Call_testP = nullptr;
					InputPinPtr Operation_ProvidedAndRequiredInterface_main_Call_testP_p = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_Call_testP_p_LiteralInteger33 = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_Call_testP_p_LiteralInteger34 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_main_Call_testP_p_LiteralUnlimitedNatural35 = nullptr;
				ObjectFlowPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow36 = nullptr;
					LiteralBooleanPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow36_LiteralBoolean37 = nullptr;
					LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow36_LiteralInteger38 = nullptr;
				OpaqueBehaviorPtr Operation_ProvidedAndRequiredInterface_main_testP = nullptr;
					ParameterPtr Operation_ProvidedAndRequiredInterface_main_testP_p = nullptr;
				ObjectFlowPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow39 = nullptr;
					LiteralBooleanPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow39_LiteralBoolean40 = nullptr;
					LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow39_LiteralInteger41 = nullptr;
				ReadStructuralFeatureActionPtr Operation_ProvidedAndRequiredInterface_main_Read_a_b = nullptr;
					InputPinPtr Operation_ProvidedAndRequiredInterface_main_Read_a_b_object = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_Read_a_b_object_LiteralInteger42 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_main_Read_a_b_object_LiteralUnlimitedNatural43 = nullptr;
					OutputPinPtr Operation_ProvidedAndRequiredInterface_main_Read_a_b_result = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_main_Read_a_b_result_LiteralUnlimitedNatural44 = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_Read_a_b_result_LiteralInteger45 = nullptr;
				CallOperationActionPtr Operation_ProvidedAndRequiredInterface_main_D_ = nullptr;
					InputPinPtr Operation_ProvidedAndRequiredInterface_main_D__target = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_main_D__target_LiteralUnlimitedNatural46 = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_D__target_LiteralInteger47 = nullptr;
					OutputPinPtr Operation_ProvidedAndRequiredInterface_main_D__result = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_D__result_LiteralInteger48 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_main_D__result_LiteralUnlimitedNatural49 = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_D__result_LiteralInteger50 = nullptr;
				ControlFlowPtr Operation_ProvidedAndRequiredInterface_main_ControlFlow51 = nullptr;
				ObjectFlowPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow52 = nullptr;
					LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow52_LiteralInteger53 = nullptr;
					LiteralBooleanPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow52_LiteralBoolean54 = nullptr;
				ObjectFlowPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow55 = nullptr;
					LiteralBooleanPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow55_LiteralBoolean56 = nullptr;
					LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow55_LiteralInteger57 = nullptr;
				ReadStructuralFeatureActionPtr Operation_ProvidedAndRequiredInterface_main_Read_b_p = nullptr;
					OutputPinPtr Operation_ProvidedAndRequiredInterface_main_Read_b_p_result = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_Read_b_p_result_LiteralInteger58 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_main_Read_b_p_result_LiteralUnlimitedNatural59 = nullptr;
					InputPinPtr Operation_ProvidedAndRequiredInterface_main_Read_b_p_object = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_main_Read_b_p_object_LiteralUnlimitedNatural60 = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_Read_b_p_object_LiteralInteger61 = nullptr;
				ObjectFlowPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow62 = nullptr;
					LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow62_LiteralInteger63 = nullptr;
					LiteralBooleanPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow62_LiteralBoolean64 = nullptr;
				ReadStructuralFeatureActionPtr Operation_ProvidedAndRequiredInterface_main_Read_e_c = nullptr;
					InputPinPtr Operation_ProvidedAndRequiredInterface_main_Read_e_c_object = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_Read_e_c_object_LiteralInteger65 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_main_Read_e_c_object_LiteralUnlimitedNatural66 = nullptr;
					OutputPinPtr Operation_ProvidedAndRequiredInterface_main_Read_e_c_result = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_Read_e_c_result_LiteralInteger67 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_main_Read_e_c_result_LiteralUnlimitedNatural68 = nullptr;
				ValueSpecificationActionPtr Operation_ProvidedAndRequiredInterface_main_Value_4 = nullptr;
					LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_Value_4_LiteralInteger69 = nullptr;
					OutputPinPtr Operation_ProvidedAndRequiredInterface_main_Value_4_result = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_Value_4_result_LiteralInteger70 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_main_Value_4_result_LiteralUnlimitedNatural71 = nullptr;
				ReadStructuralFeatureActionPtr Operation_ProvidedAndRequiredInterface_main_Read_d_e = nullptr;
					OutputPinPtr Operation_ProvidedAndRequiredInterface_main_Read_d_e_result = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_Read_d_e_result_LiteralInteger72 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_main_Read_d_e_result_LiteralUnlimitedNatural73 = nullptr;
					InputPinPtr Operation_ProvidedAndRequiredInterface_main_Read_d_e_object = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_main_Read_d_e_object_LiteralUnlimitedNatural74 = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_Read_d_e_object_LiteralInteger75 = nullptr;
				CreateObjectActionPtr Operation_ProvidedAndRequiredInterface_main_Create_D = nullptr;
					OutputPinPtr Operation_ProvidedAndRequiredInterface_main_Create_D_result = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_main_Create_D_result_LiteralUnlimitedNatural76 = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_Create_D_result_LiteralInteger77 = nullptr;
				ObjectFlowPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow78 = nullptr;
					LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow78_LiteralInteger79 = nullptr;
					LiteralBooleanPtr Operation_ProvidedAndRequiredInterface_main_ObjectFlow78_LiteralBoolean80 = nullptr;
				ReadStructuralFeatureActionPtr Operation_ProvidedAndRequiredInterface_main_Read_d_a = nullptr;
					InputPinPtr Operation_ProvidedAndRequiredInterface_main_Read_d_a_object = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_main_Read_d_a_object_LiteralUnlimitedNatural81 = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_Read_d_a_object_LiteralInteger82 = nullptr;
					OutputPinPtr Operation_ProvidedAndRequiredInterface_main_Read_d_a_result = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_main_Read_d_a_result_LiteralUnlimitedNatural83 = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_main_Read_d_a_result_LiteralInteger84 = nullptr;
			Class_Ptr Operation_ProvidedAndRequiredInterface_A = nullptr;
				PropertyPtr Operation_ProvidedAndRequiredInterface_A_b = nullptr;
				PortPtr Operation_ProvidedAndRequiredInterface_A_q = nullptr;
				OperationPtr Operation_ProvidedAndRequiredInterface_A_setP_Integer = nullptr;
					ParameterPtr Operation_ProvidedAndRequiredInterface_A_setP_Integer_v = nullptr;
				ActivityPtr Operation_ProvidedAndRequiredInterface_A_setPActivity = nullptr;
					ActivityParameterNodePtr Operation_ProvidedAndRequiredInterface_A_setPActivity_vParameterNode = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_A_setPActivity_vParameterNode_LiteralInteger85 = nullptr;
					ReadSelfActionPtr Operation_ProvidedAndRequiredInterface_A_setPActivity_this = nullptr;
						OutputPinPtr Operation_ProvidedAndRequiredInterface_A_setPActivity_this_result = nullptr;
							LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_A_setPActivity_this_result_LiteralUnlimitedNatural86 = nullptr;
							LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_A_setPActivity_this_result_LiteralInteger87 = nullptr;
					ObjectFlowPtr Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow88 = nullptr;
						LiteralBooleanPtr Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow88_LiteralBoolean89 = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow88_LiteralInteger90 = nullptr;
					ObjectFlowPtr Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow91 = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow91_LiteralInteger92 = nullptr;
						LiteralBooleanPtr Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow91_LiteralBoolean93 = nullptr;
					ParameterPtr Operation_ProvidedAndRequiredInterface_A_setPActivity_v = nullptr;
					CallOperationActionPtr Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q = nullptr;
						InputPinPtr Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_v = nullptr;
							LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralUnlimitedNatural94 = nullptr;
							LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger95 = nullptr;
							LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger96 = nullptr;
						InputPinPtr Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_target = nullptr;
							LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_target_LiteralInteger97 = nullptr;
							LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_target_LiteralUnlimitedNatural98 = nullptr;
				ConnectorPtr Operation_ProvidedAndRequiredInterface_A_r = nullptr;
					ConnectorEndPtr Operation_ProvidedAndRequiredInterface_A_r_ConnectorEnd99 = nullptr;
					ConnectorEndPtr Operation_ProvidedAndRequiredInterface_A_r_ConnectorEnd100 = nullptr;
			Class_Ptr Operation_ProvidedAndRequiredInterface_E = nullptr;
				PropertyPtr Operation_ProvidedAndRequiredInterface_E_c = nullptr;
				ConnectorPtr Operation_ProvidedAndRequiredInterface_E_s = nullptr;
					ConnectorEndPtr Operation_ProvidedAndRequiredInterface_E_s_ConnectorEnd101 = nullptr;
					ConnectorEndPtr Operation_ProvidedAndRequiredInterface_E_s_ConnectorEnd102 = nullptr;
				PortPtr Operation_ProvidedAndRequiredInterface_E_q = nullptr;
			Class_Ptr Operation_ProvidedAndRequiredInterface_IImpl = nullptr;
				InterfaceRealizationPtr Operation_ProvidedAndRequiredInterface_IImpl_IRealization = nullptr;
				OperationPtr Operation_ProvidedAndRequiredInterface_IImpl_setP_Integer = nullptr;
					ParameterPtr Operation_ProvidedAndRequiredInterface_IImpl_setP_Integer_v = nullptr;
			UsagePtr Operation_ProvidedAndRequiredInterface_IUsageIProvReq = nullptr;
			Class_Ptr Operation_ProvidedAndRequiredInterface_IProvReq = nullptr;
				OperationPtr Operation_ProvidedAndRequiredInterface_IProvReq_setP_Integer = nullptr;
					ParameterPtr Operation_ProvidedAndRequiredInterface_IProvReq_setP_Integer_v = nullptr;
				GeneralizationPtr Operation_ProvidedAndRequiredInterface_IProvReq_Generalization103 = nullptr;
			Class_Ptr Operation_ProvidedAndRequiredInterface_B = nullptr;
				ActivityPtr Operation_ProvidedAndRequiredInterface_B_setPActivity = nullptr;
					ObjectFlowPtr Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow104 = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow104_LiteralInteger105 = nullptr;
						LiteralBooleanPtr Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow104_LiteralBoolean106 = nullptr;
					ObjectFlowPtr Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow107 = nullptr;
						LiteralBooleanPtr Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow107_LiteralBoolean108 = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow107_LiteralInteger109 = nullptr;
					ParameterPtr Operation_ProvidedAndRequiredInterface_B_setPActivity_v = nullptr;
					ActivityParameterNodePtr Operation_ProvidedAndRequiredInterface_B_setPActivity_vParameterNode = nullptr;
						LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_B_setPActivity_vParameterNode_LiteralInteger110 = nullptr;
					AddStructuralFeatureValueActionPtr Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p = nullptr;
						InputPinPtr Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_value = nullptr;
							LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_value_LiteralInteger111 = nullptr;
							LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural112 = nullptr;
						InputPinPtr Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_object = nullptr;
							LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_object_LiteralInteger113 = nullptr;
							LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural114 = nullptr;
						OutputPinPtr Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_result = nullptr;
							LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_result_LiteralInteger115 = nullptr;
							LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural116 = nullptr;
					ReadSelfActionPtr Operation_ProvidedAndRequiredInterface_B_setPActivity_this = nullptr;
						OutputPinPtr Operation_ProvidedAndRequiredInterface_B_setPActivity_this_result = nullptr;
							LiteralUnlimitedNaturalPtr Operation_ProvidedAndRequiredInterface_B_setPActivity_this_result_LiteralUnlimitedNatural117 = nullptr;
							LiteralIntegerPtr Operation_ProvidedAndRequiredInterface_B_setPActivity_this_result_LiteralInteger118 = nullptr;
				PropertyPtr Operation_ProvidedAndRequiredInterface_B_p = nullptr;
				InterfaceRealizationPtr Operation_ProvidedAndRequiredInterface_B_IRealization = nullptr;
				OperationPtr Operation_ProvidedAndRequiredInterface_B_setP_Integer = nullptr;
					ParameterPtr Operation_ProvidedAndRequiredInterface_B_setP_Integer_v = nullptr;

		public:
			virtual ~Operation_ProvidedAndRequiredInterfaceModel();
			static const std::shared_ptr<Operation_ProvidedAndRequiredInterfaceModel>& Instance();

		private:
			Operation_ProvidedAndRequiredInterfaceModel();
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

#endif /* OPERATION_PROVIDEDANDREQUIREDINTERFACE_MODEL_H */
