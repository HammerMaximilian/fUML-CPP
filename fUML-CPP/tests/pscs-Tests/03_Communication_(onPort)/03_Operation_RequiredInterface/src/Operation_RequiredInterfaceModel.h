/*
 * Operation_RequiredInterfaceModel.h
 * 
 * Auto-generated file
 */

#ifndef OPERATION_REQUIREDINTERFACE_MODEL_H
#define OPERATION_REQUIREDINTERFACE_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace Operation_RequiredInterface
{
	class Operation_RequiredInterfaceModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model Operation_RequiredInterface
		 */
		PackagePtr Operation_RequiredInterface = nullptr;
			InterfacePtr Operation_RequiredInterface_I = nullptr;
				OperationPtr Operation_RequiredInterface_I_setP_Integer = nullptr;
					ParameterPtr Operation_RequiredInterface_I_setP_Integer_v = nullptr;
			Class_Ptr Operation_RequiredInterface_IImpl = nullptr;
				OperationPtr Operation_RequiredInterface_IImpl_setP_Integer = nullptr;
					ParameterPtr Operation_RequiredInterface_IImpl_setP_Integer_v = nullptr;
				InterfaceRealizationPtr Operation_RequiredInterface_IImpl_IRealization = nullptr;
			Class_Ptr Operation_RequiredInterface_B = nullptr;
				PropertyPtr Operation_RequiredInterface_B_p = nullptr;
				ActivityPtr Operation_RequiredInterface_B_setPActivity = nullptr;
					ParameterPtr Operation_RequiredInterface_B_setPActivity_v = nullptr;
					ActivityParameterNodePtr Operation_RequiredInterface_B_setPActivity_vParameterNode = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_B_setPActivity_vParameterNode_LiteralInteger0 = nullptr;
					AddStructuralFeatureValueActionPtr Operation_RequiredInterface_B_setPActivity_Set_this_p = nullptr;
						OutputPinPtr Operation_RequiredInterface_B_setPActivity_Set_this_p_result = nullptr;
							LiteralUnlimitedNaturalPtr Operation_RequiredInterface_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural1 = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_B_setPActivity_Set_this_p_result_LiteralInteger2 = nullptr;
						InputPinPtr Operation_RequiredInterface_B_setPActivity_Set_this_p_value = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_B_setPActivity_Set_this_p_value_LiteralInteger3 = nullptr;
							LiteralUnlimitedNaturalPtr Operation_RequiredInterface_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural4 = nullptr;
						InputPinPtr Operation_RequiredInterface_B_setPActivity_Set_this_p_object = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_B_setPActivity_Set_this_p_object_LiteralInteger5 = nullptr;
							LiteralUnlimitedNaturalPtr Operation_RequiredInterface_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural6 = nullptr;
					ObjectFlowPtr Operation_RequiredInterface_B_setPActivity_ObjectFlow7 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_B_setPActivity_ObjectFlow7_LiteralInteger8 = nullptr;
						LiteralBooleanPtr Operation_RequiredInterface_B_setPActivity_ObjectFlow7_LiteralBoolean9 = nullptr;
					ObjectFlowPtr Operation_RequiredInterface_B_setPActivity_ObjectFlow10 = nullptr;
						LiteralBooleanPtr Operation_RequiredInterface_B_setPActivity_ObjectFlow10_LiteralBoolean11 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_B_setPActivity_ObjectFlow10_LiteralInteger12 = nullptr;
					ReadSelfActionPtr Operation_RequiredInterface_B_setPActivity_this = nullptr;
						OutputPinPtr Operation_RequiredInterface_B_setPActivity_this_result = nullptr;
							LiteralUnlimitedNaturalPtr Operation_RequiredInterface_B_setPActivity_this_result_LiteralUnlimitedNatural13 = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_B_setPActivity_this_result_LiteralInteger14 = nullptr;
				InterfaceRealizationPtr Operation_RequiredInterface_B_IRealization = nullptr;
				OperationPtr Operation_RequiredInterface_B_setP_Integer = nullptr;
					ParameterPtr Operation_RequiredInterface_B_setP_Integer_v = nullptr;
			AssociationPtr Operation_RequiredInterface_R = nullptr;
				PropertyPtr Operation_RequiredInterface_R_y = nullptr;
				PropertyPtr Operation_RequiredInterface_R_x = nullptr;
			AssociationPtr Operation_RequiredInterface_S = nullptr;
				PropertyPtr Operation_RequiredInterface_S_x = nullptr;
				PropertyPtr Operation_RequiredInterface_S_y = nullptr;
			ActivityPtr Operation_RequiredInterface_main = nullptr;
				ValueSpecificationActionPtr Operation_RequiredInterface_main_Value_4 = nullptr;
					LiteralIntegerPtr Operation_RequiredInterface_main_Value_4_LiteralInteger15 = nullptr;
					OutputPinPtr Operation_RequiredInterface_main_Value_4_result = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_main_Value_4_result_LiteralInteger16 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_main_Value_4_result_LiteralUnlimitedNatural17 = nullptr;
				ObjectFlowPtr Operation_RequiredInterface_main_ObjectFlow18 = nullptr;
					LiteralBooleanPtr Operation_RequiredInterface_main_ObjectFlow18_LiteralBoolean19 = nullptr;
					LiteralIntegerPtr Operation_RequiredInterface_main_ObjectFlow18_LiteralInteger20 = nullptr;
				ObjectFlowPtr Operation_RequiredInterface_main_ObjectFlow21 = nullptr;
					LiteralIntegerPtr Operation_RequiredInterface_main_ObjectFlow21_LiteralInteger22 = nullptr;
					LiteralBooleanPtr Operation_RequiredInterface_main_ObjectFlow21_LiteralBoolean23 = nullptr;
				ReadStructuralFeatureActionPtr Operation_RequiredInterface_main_Read_d_c = nullptr;
					InputPinPtr Operation_RequiredInterface_main_Read_d_c_object = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_main_Read_d_c_object_LiteralInteger24 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_main_Read_d_c_object_LiteralUnlimitedNatural25 = nullptr;
					OutputPinPtr Operation_RequiredInterface_main_Read_d_c_result = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_main_Read_d_c_result_LiteralInteger26 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_main_Read_d_c_result_LiteralUnlimitedNatural27 = nullptr;
				ObjectFlowPtr Operation_RequiredInterface_main_ObjectFlow28 = nullptr;
					LiteralBooleanPtr Operation_RequiredInterface_main_ObjectFlow28_LiteralBoolean29 = nullptr;
					LiteralIntegerPtr Operation_RequiredInterface_main_ObjectFlow28_LiteralInteger30 = nullptr;
				ReadStructuralFeatureActionPtr Operation_RequiredInterface_main_Read_d_a = nullptr;
					InputPinPtr Operation_RequiredInterface_main_Read_d_a_object = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_main_Read_d_a_object_LiteralInteger31 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_main_Read_d_a_object_LiteralUnlimitedNatural32 = nullptr;
					OutputPinPtr Operation_RequiredInterface_main_Read_d_a_result = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_main_Read_d_a_result_LiteralInteger33 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_main_Read_d_a_result_LiteralUnlimitedNatural34 = nullptr;
				ObjectFlowPtr Operation_RequiredInterface_main_ObjectFlow35 = nullptr;
					LiteralIntegerPtr Operation_RequiredInterface_main_ObjectFlow35_LiteralInteger36 = nullptr;
					LiteralBooleanPtr Operation_RequiredInterface_main_ObjectFlow35_LiteralBoolean37 = nullptr;
				ReadStructuralFeatureActionPtr Operation_RequiredInterface_main_Read_b_p = nullptr;
					OutputPinPtr Operation_RequiredInterface_main_Read_b_p_result = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_main_Read_b_p_result_LiteralInteger38 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_main_Read_b_p_result_LiteralUnlimitedNatural39 = nullptr;
					InputPinPtr Operation_RequiredInterface_main_Read_b_p_object = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_main_Read_b_p_object_LiteralInteger40 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_main_Read_b_p_object_LiteralUnlimitedNatural41 = nullptr;
				ObjectFlowPtr Operation_RequiredInterface_main_ObjectFlow42 = nullptr;
					LiteralBooleanPtr Operation_RequiredInterface_main_ObjectFlow42_LiteralBoolean43 = nullptr;
					LiteralIntegerPtr Operation_RequiredInterface_main_ObjectFlow42_LiteralInteger44 = nullptr;
				ReadStructuralFeatureActionPtr Operation_RequiredInterface_main_Read_a_b = nullptr;
					InputPinPtr Operation_RequiredInterface_main_Read_a_b_object = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_main_Read_a_b_object_LiteralInteger45 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_main_Read_a_b_object_LiteralUnlimitedNatural46 = nullptr;
					OutputPinPtr Operation_RequiredInterface_main_Read_a_b_result = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_main_Read_a_b_result_LiteralInteger47 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_main_Read_a_b_result_LiteralUnlimitedNatural48 = nullptr;
				CallOperationActionPtr Operation_RequiredInterface_main_D_ = nullptr;
					OutputPinPtr Operation_RequiredInterface_main_D__result = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_main_D__result_LiteralInteger49 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_main_D__result_LiteralUnlimitedNatural50 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_main_D__result_LiteralInteger51 = nullptr;
					InputPinPtr Operation_RequiredInterface_main_D__target = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_main_D__target_LiteralUnlimitedNatural52 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_main_D__target_LiteralInteger53 = nullptr;
				CallOperationActionPtr Operation_RequiredInterface_main_Call_setP_ = nullptr;
					InputPinPtr Operation_RequiredInterface_main_Call_setP__target = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_main_Call_setP__target_LiteralUnlimitedNatural54 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_main_Call_setP__target_LiteralInteger55 = nullptr;
					InputPinPtr Operation_RequiredInterface_main_Call_setP__v = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_main_Call_setP__v_LiteralUnlimitedNatural56 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_main_Call_setP__v_LiteralInteger57 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_main_Call_setP__v_LiteralInteger58 = nullptr;
				ForkNodePtr Operation_RequiredInterface_main_Fork_d = nullptr;
				ObjectFlowPtr Operation_RequiredInterface_main_ObjectFlow59 = nullptr;
					LiteralIntegerPtr Operation_RequiredInterface_main_ObjectFlow59_LiteralInteger60 = nullptr;
					LiteralBooleanPtr Operation_RequiredInterface_main_ObjectFlow59_LiteralBoolean61 = nullptr;
				ObjectFlowPtr Operation_RequiredInterface_main_ObjectFlow62 = nullptr;
					LiteralIntegerPtr Operation_RequiredInterface_main_ObjectFlow62_LiteralInteger63 = nullptr;
					LiteralBooleanPtr Operation_RequiredInterface_main_ObjectFlow62_LiteralBoolean64 = nullptr;
				ObjectFlowPtr Operation_RequiredInterface_main_ObjectFlow65 = nullptr;
					LiteralBooleanPtr Operation_RequiredInterface_main_ObjectFlow65_LiteralBoolean66 = nullptr;
					LiteralIntegerPtr Operation_RequiredInterface_main_ObjectFlow65_LiteralInteger67 = nullptr;
				CallBehaviorActionPtr Operation_RequiredInterface_main_Call_testP = nullptr;
					InputPinPtr Operation_RequiredInterface_main_Call_testP_p = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_main_Call_testP_p_LiteralInteger68 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_main_Call_testP_p_LiteralInteger69 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_main_Call_testP_p_LiteralUnlimitedNatural70 = nullptr;
				OpaqueBehaviorPtr Operation_RequiredInterface_main_testP = nullptr;
					ParameterPtr Operation_RequiredInterface_main_testP_p = nullptr;
				ControlFlowPtr Operation_RequiredInterface_main_ControlFlow71 = nullptr;
				CreateObjectActionPtr Operation_RequiredInterface_main_Create_D = nullptr;
					OutputPinPtr Operation_RequiredInterface_main_Create_D_result = nullptr;
						LiteralUnlimitedNaturalPtr Operation_RequiredInterface_main_Create_D_result_LiteralUnlimitedNatural72 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_main_Create_D_result_LiteralInteger73 = nullptr;
				ObjectFlowPtr Operation_RequiredInterface_main_ObjectFlow74 = nullptr;
					LiteralBooleanPtr Operation_RequiredInterface_main_ObjectFlow74_LiteralBoolean75 = nullptr;
					LiteralIntegerPtr Operation_RequiredInterface_main_ObjectFlow74_LiteralInteger76 = nullptr;
			Class_Ptr Operation_RequiredInterface_D = nullptr;
				PropertyPtr Operation_RequiredInterface_D_c = nullptr;
				ConnectorPtr Operation_RequiredInterface_D_s = nullptr;
					ConnectorEndPtr Operation_RequiredInterface_D_s_ConnectorEnd77 = nullptr;
					ConnectorEndPtr Operation_RequiredInterface_D_s_ConnectorEnd78 = nullptr;
				PropertyPtr Operation_RequiredInterface_D_a = nullptr;
				OperationPtr Operation_RequiredInterface_D_D_D = nullptr;
					ParameterPtr Operation_RequiredInterface_D_D_D_result = nullptr;
			Class_Ptr Operation_RequiredInterface_C = nullptr;
				ActivityPtr Operation_RequiredInterface_C_setPActivity = nullptr;
					ObjectFlowPtr Operation_RequiredInterface_C_setPActivity_ObjectFlow79 = nullptr;
						LiteralBooleanPtr Operation_RequiredInterface_C_setPActivity_ObjectFlow79_LiteralBoolean80 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_C_setPActivity_ObjectFlow79_LiteralInteger81 = nullptr;
					ObjectFlowPtr Operation_RequiredInterface_C_setPActivity_ObjectFlow82 = nullptr;
						LiteralBooleanPtr Operation_RequiredInterface_C_setPActivity_ObjectFlow82_LiteralBoolean83 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_C_setPActivity_ObjectFlow82_LiteralInteger84 = nullptr;
					ReadSelfActionPtr Operation_RequiredInterface_C_setPActivity_this = nullptr;
						OutputPinPtr Operation_RequiredInterface_C_setPActivity_this_result = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_C_setPActivity_this_result_LiteralInteger85 = nullptr;
							LiteralUnlimitedNaturalPtr Operation_RequiredInterface_C_setPActivity_this_result_LiteralUnlimitedNatural86 = nullptr;
					CallOperationActionPtr Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q = nullptr;
						InputPinPtr Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_v = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_v_LiteralInteger87 = nullptr;
							LiteralUnlimitedNaturalPtr Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_v_LiteralUnlimitedNatural88 = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_v_LiteralInteger89 = nullptr;
						InputPinPtr Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_target = nullptr;
							LiteralUnlimitedNaturalPtr Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_target_LiteralUnlimitedNatural90 = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_target_LiteralInteger91 = nullptr;
					ActivityParameterNodePtr Operation_RequiredInterface_C_setPActivity_vParameterNode = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_C_setPActivity_vParameterNode_LiteralInteger92 = nullptr;
					ParameterPtr Operation_RequiredInterface_C_setPActivity_v = nullptr;
				PortPtr Operation_RequiredInterface_C_q = nullptr;
				InterfaceRealizationPtr Operation_RequiredInterface_C_IRealization = nullptr;
				OperationPtr Operation_RequiredInterface_C_setP_Integer = nullptr;
					ParameterPtr Operation_RequiredInterface_C_setP_Integer_v = nullptr;
			Class_Ptr Operation_RequiredInterface_A = nullptr;
				PortPtr Operation_RequiredInterface_A_q = nullptr;
				PropertyPtr Operation_RequiredInterface_A_b = nullptr;
				ConnectorPtr Operation_RequiredInterface_A_r = nullptr;
					ConnectorEndPtr Operation_RequiredInterface_A_r_ConnectorEnd93 = nullptr;
					ConnectorEndPtr Operation_RequiredInterface_A_r_ConnectorEnd94 = nullptr;
				ActivityPtr Operation_RequiredInterface_A_setPActivity = nullptr;
					ObjectFlowPtr Operation_RequiredInterface_A_setPActivity_ObjectFlow95 = nullptr;
						LiteralBooleanPtr Operation_RequiredInterface_A_setPActivity_ObjectFlow95_LiteralBoolean96 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_A_setPActivity_ObjectFlow95_LiteralInteger97 = nullptr;
					CallOperationActionPtr Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q = nullptr;
						InputPinPtr Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_target = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_target_LiteralInteger98 = nullptr;
							LiteralUnlimitedNaturalPtr Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_target_LiteralUnlimitedNatural99 = nullptr;
						InputPinPtr Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_v = nullptr;
							LiteralUnlimitedNaturalPtr Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralUnlimitedNatural100 = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger101 = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger102 = nullptr;
					ObjectFlowPtr Operation_RequiredInterface_A_setPActivity_ObjectFlow103 = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_A_setPActivity_ObjectFlow103_LiteralInteger104 = nullptr;
						LiteralBooleanPtr Operation_RequiredInterface_A_setPActivity_ObjectFlow103_LiteralBoolean105 = nullptr;
					ParameterPtr Operation_RequiredInterface_A_setPActivity_v = nullptr;
					ActivityParameterNodePtr Operation_RequiredInterface_A_setPActivity_vParameterNode = nullptr;
						LiteralIntegerPtr Operation_RequiredInterface_A_setPActivity_vParameterNode_LiteralInteger106 = nullptr;
					ReadSelfActionPtr Operation_RequiredInterface_A_setPActivity_this = nullptr;
						OutputPinPtr Operation_RequiredInterface_A_setPActivity_this_result = nullptr;
							LiteralUnlimitedNaturalPtr Operation_RequiredInterface_A_setPActivity_this_result_LiteralUnlimitedNatural107 = nullptr;
							LiteralIntegerPtr Operation_RequiredInterface_A_setPActivity_this_result_LiteralInteger108 = nullptr;
				OperationPtr Operation_RequiredInterface_A_setP_Integer = nullptr;
					ParameterPtr Operation_RequiredInterface_A_setP_Integer_v = nullptr;

		public:
			virtual ~Operation_RequiredInterfaceModel();
			static const std::shared_ptr<Operation_RequiredInterfaceModel>& Instance();

		private:
			Operation_RequiredInterfaceModel();
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

#endif /* OPERATION_REQUIREDINTERFACE_MODEL_H */
