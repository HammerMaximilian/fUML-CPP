/*
 * Operation_ProvidedInterfaceModel.h
 * 
 * Auto-generated file
 */

#ifndef OPERATION_PROVIDEDINTERFACE_MODEL_H
#define OPERATION_PROVIDEDINTERFACE_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace Operation_ProvidedInterface
{
	class Operation_ProvidedInterfaceModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model Operation_ProvidedInterface
		 */
		PackagePtr Operation_ProvidedInterface = nullptr;
			ActivityPtr Operation_ProvidedInterface_main = nullptr;
				ReadStructuralFeatureActionPtr Operation_ProvidedInterface_main_Read_b_p = nullptr;
					OutputPinPtr Operation_ProvidedInterface_main_Read_b_p_result = nullptr;
						LiteralIntegerPtr Operation_ProvidedInterface_main_Read_b_p_result_LiteralInteger0 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedInterface_main_Read_b_p_result_LiteralUnlimitedNatural1 = nullptr;
					InputPinPtr Operation_ProvidedInterface_main_Read_b_p_object = nullptr;
						LiteralIntegerPtr Operation_ProvidedInterface_main_Read_b_p_object_LiteralInteger2 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedInterface_main_Read_b_p_object_LiteralUnlimitedNatural3 = nullptr;
				CreateObjectActionPtr Operation_ProvidedInterface_main_Create_A = nullptr;
					OutputPinPtr Operation_ProvidedInterface_main_Create_A_result = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedInterface_main_Create_A_result_LiteralUnlimitedNatural4 = nullptr;
						LiteralIntegerPtr Operation_ProvidedInterface_main_Create_A_result_LiteralInteger5 = nullptr;
				CallOperationActionPtr Operation_ProvidedInterface_main_A_ = nullptr;
					OutputPinPtr Operation_ProvidedInterface_main_A__result = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedInterface_main_A__result_LiteralUnlimitedNatural6 = nullptr;
						LiteralIntegerPtr Operation_ProvidedInterface_main_A__result_LiteralInteger7 = nullptr;
						LiteralIntegerPtr Operation_ProvidedInterface_main_A__result_LiteralInteger8 = nullptr;
					InputPinPtr Operation_ProvidedInterface_main_A__target = nullptr;
						LiteralIntegerPtr Operation_ProvidedInterface_main_A__target_LiteralInteger9 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedInterface_main_A__target_LiteralUnlimitedNatural10 = nullptr;
				ObjectFlowPtr Operation_ProvidedInterface_main_ObjectFlow11 = nullptr;
					LiteralBooleanPtr Operation_ProvidedInterface_main_ObjectFlow11_LiteralBoolean12 = nullptr;
					LiteralIntegerPtr Operation_ProvidedInterface_main_ObjectFlow11_LiteralInteger13 = nullptr;
				OpaqueBehaviorPtr Operation_ProvidedInterface_main_testP = nullptr;
					ParameterPtr Operation_ProvidedInterface_main_testP_p = nullptr;
				ObjectFlowPtr Operation_ProvidedInterface_main_ObjectFlow14 = nullptr;
					LiteralBooleanPtr Operation_ProvidedInterface_main_ObjectFlow14_LiteralBoolean15 = nullptr;
					LiteralIntegerPtr Operation_ProvidedInterface_main_ObjectFlow14_LiteralInteger16 = nullptr;
				ObjectFlowPtr Operation_ProvidedInterface_main_ObjectFlow17 = nullptr;
					LiteralIntegerPtr Operation_ProvidedInterface_main_ObjectFlow17_LiteralInteger18 = nullptr;
					LiteralBooleanPtr Operation_ProvidedInterface_main_ObjectFlow17_LiteralBoolean19 = nullptr;
				ObjectFlowPtr Operation_ProvidedInterface_main_ObjectFlow20 = nullptr;
					LiteralBooleanPtr Operation_ProvidedInterface_main_ObjectFlow20_LiteralBoolean21 = nullptr;
					LiteralIntegerPtr Operation_ProvidedInterface_main_ObjectFlow20_LiteralInteger22 = nullptr;
				CallOperationActionPtr Operation_ProvidedInterface_main_Call_setP_ = nullptr;
					InputPinPtr Operation_ProvidedInterface_main_Call_setP__target = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedInterface_main_Call_setP__target_LiteralUnlimitedNatural23 = nullptr;
						LiteralIntegerPtr Operation_ProvidedInterface_main_Call_setP__target_LiteralInteger24 = nullptr;
					InputPinPtr Operation_ProvidedInterface_main_Call_setP__v = nullptr;
						LiteralIntegerPtr Operation_ProvidedInterface_main_Call_setP__v_LiteralInteger25 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedInterface_main_Call_setP__v_LiteralUnlimitedNatural26 = nullptr;
						LiteralIntegerPtr Operation_ProvidedInterface_main_Call_setP__v_LiteralInteger27 = nullptr;
				CallBehaviorActionPtr Operation_ProvidedInterface_main_Call_testP = nullptr;
					InputPinPtr Operation_ProvidedInterface_main_Call_testP_p = nullptr;
						LiteralIntegerPtr Operation_ProvidedInterface_main_Call_testP_p_LiteralInteger28 = nullptr;
						LiteralIntegerPtr Operation_ProvidedInterface_main_Call_testP_p_LiteralInteger29 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedInterface_main_Call_testP_p_LiteralUnlimitedNatural30 = nullptr;
				ControlFlowPtr Operation_ProvidedInterface_main_ControlFlow31 = nullptr;
				ObjectFlowPtr Operation_ProvidedInterface_main_ObjectFlow32 = nullptr;
					LiteralBooleanPtr Operation_ProvidedInterface_main_ObjectFlow32_LiteralBoolean33 = nullptr;
					LiteralIntegerPtr Operation_ProvidedInterface_main_ObjectFlow32_LiteralInteger34 = nullptr;
				ObjectFlowPtr Operation_ProvidedInterface_main_ObjectFlow35 = nullptr;
					LiteralIntegerPtr Operation_ProvidedInterface_main_ObjectFlow35_LiteralInteger36 = nullptr;
					LiteralBooleanPtr Operation_ProvidedInterface_main_ObjectFlow35_LiteralBoolean37 = nullptr;
				ForkNodePtr Operation_ProvidedInterface_main_Fork_a = nullptr;
				ValueSpecificationActionPtr Operation_ProvidedInterface_main_Value_4 = nullptr;
					OutputPinPtr Operation_ProvidedInterface_main_Value_4_result = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedInterface_main_Value_4_result_LiteralUnlimitedNatural38 = nullptr;
						LiteralIntegerPtr Operation_ProvidedInterface_main_Value_4_result_LiteralInteger39 = nullptr;
					LiteralIntegerPtr Operation_ProvidedInterface_main_Value_4_LiteralInteger40 = nullptr;
				ObjectFlowPtr Operation_ProvidedInterface_main_ObjectFlow41 = nullptr;
					LiteralBooleanPtr Operation_ProvidedInterface_main_ObjectFlow41_LiteralBoolean42 = nullptr;
					LiteralIntegerPtr Operation_ProvidedInterface_main_ObjectFlow41_LiteralInteger43 = nullptr;
				ReadStructuralFeatureActionPtr Operation_ProvidedInterface_main_Read_a_b = nullptr;
					OutputPinPtr Operation_ProvidedInterface_main_Read_a_b_result = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedInterface_main_Read_a_b_result_LiteralUnlimitedNatural44 = nullptr;
						LiteralIntegerPtr Operation_ProvidedInterface_main_Read_a_b_result_LiteralInteger45 = nullptr;
					InputPinPtr Operation_ProvidedInterface_main_Read_a_b_object = nullptr;
						LiteralIntegerPtr Operation_ProvidedInterface_main_Read_a_b_object_LiteralInteger46 = nullptr;
						LiteralUnlimitedNaturalPtr Operation_ProvidedInterface_main_Read_a_b_object_LiteralUnlimitedNatural47 = nullptr;
			Class_Ptr Operation_ProvidedInterface_B = nullptr;
				InterfaceRealizationPtr Operation_ProvidedInterface_B_IRealization = nullptr;
				OperationPtr Operation_ProvidedInterface_B_setP_Integer = nullptr;
					ParameterPtr Operation_ProvidedInterface_B_setP_Integer_v = nullptr;
				ActivityPtr Operation_ProvidedInterface_B_setPActivity = nullptr;
					ObjectFlowPtr Operation_ProvidedInterface_B_setPActivity_ObjectFlow48 = nullptr;
						LiteralBooleanPtr Operation_ProvidedInterface_B_setPActivity_ObjectFlow48_LiteralBoolean49 = nullptr;
						LiteralIntegerPtr Operation_ProvidedInterface_B_setPActivity_ObjectFlow48_LiteralInteger50 = nullptr;
					ObjectFlowPtr Operation_ProvidedInterface_B_setPActivity_ObjectFlow51 = nullptr;
						LiteralIntegerPtr Operation_ProvidedInterface_B_setPActivity_ObjectFlow51_LiteralInteger52 = nullptr;
						LiteralBooleanPtr Operation_ProvidedInterface_B_setPActivity_ObjectFlow51_LiteralBoolean53 = nullptr;
					ParameterPtr Operation_ProvidedInterface_B_setPActivity_v = nullptr;
					ActivityParameterNodePtr Operation_ProvidedInterface_B_setPActivity_vParameterNode = nullptr;
						LiteralIntegerPtr Operation_ProvidedInterface_B_setPActivity_vParameterNode_LiteralInteger54 = nullptr;
					AddStructuralFeatureValueActionPtr Operation_ProvidedInterface_B_setPActivity_Set_this_p = nullptr;
						InputPinPtr Operation_ProvidedInterface_B_setPActivity_Set_this_p_object = nullptr;
							LiteralUnlimitedNaturalPtr Operation_ProvidedInterface_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural55 = nullptr;
							LiteralIntegerPtr Operation_ProvidedInterface_B_setPActivity_Set_this_p_object_LiteralInteger56 = nullptr;
						OutputPinPtr Operation_ProvidedInterface_B_setPActivity_Set_this_p_result = nullptr;
							LiteralIntegerPtr Operation_ProvidedInterface_B_setPActivity_Set_this_p_result_LiteralInteger57 = nullptr;
							LiteralUnlimitedNaturalPtr Operation_ProvidedInterface_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural58 = nullptr;
						InputPinPtr Operation_ProvidedInterface_B_setPActivity_Set_this_p_value = nullptr;
							LiteralIntegerPtr Operation_ProvidedInterface_B_setPActivity_Set_this_p_value_LiteralInteger59 = nullptr;
							LiteralUnlimitedNaturalPtr Operation_ProvidedInterface_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural60 = nullptr;
					ReadSelfActionPtr Operation_ProvidedInterface_B_setPActivity_this = nullptr;
						OutputPinPtr Operation_ProvidedInterface_B_setPActivity_this_result = nullptr;
							LiteralUnlimitedNaturalPtr Operation_ProvidedInterface_B_setPActivity_this_result_LiteralUnlimitedNatural61 = nullptr;
							LiteralIntegerPtr Operation_ProvidedInterface_B_setPActivity_this_result_LiteralInteger62 = nullptr;
				PropertyPtr Operation_ProvidedInterface_B_p = nullptr;
			AssociationPtr Operation_ProvidedInterface_R = nullptr;
				PropertyPtr Operation_ProvidedInterface_R_y = nullptr;
				PropertyPtr Operation_ProvidedInterface_R_x = nullptr;
			Class_Ptr Operation_ProvidedInterface_IImpl = nullptr;
				OperationPtr Operation_ProvidedInterface_IImpl_setP_Integer = nullptr;
					ParameterPtr Operation_ProvidedInterface_IImpl_setP_Integer_v = nullptr;
				InterfaceRealizationPtr Operation_ProvidedInterface_IImpl_IRealization = nullptr;
			InterfacePtr Operation_ProvidedInterface_I = nullptr;
				OperationPtr Operation_ProvidedInterface_I_setP_Integer = nullptr;
					ParameterPtr Operation_ProvidedInterface_I_setP_Integer_v = nullptr;
			Class_Ptr Operation_ProvidedInterface_A = nullptr;
				PropertyPtr Operation_ProvidedInterface_A_b = nullptr;
				OperationPtr Operation_ProvidedInterface_A_setP_Integer = nullptr;
					ParameterPtr Operation_ProvidedInterface_A_setP_Integer_v = nullptr;
				OperationPtr Operation_ProvidedInterface_A_A_A = nullptr;
					ParameterPtr Operation_ProvidedInterface_A_A_A_result = nullptr;
				ConnectorPtr Operation_ProvidedInterface_A_r = nullptr;
					ConnectorEndPtr Operation_ProvidedInterface_A_r_ConnectorEnd63 = nullptr;
					ConnectorEndPtr Operation_ProvidedInterface_A_r_ConnectorEnd64 = nullptr;
				ActivityPtr Operation_ProvidedInterface_A_setPActivity = nullptr;
					ParameterPtr Operation_ProvidedInterface_A_setPActivity_v = nullptr;
					ReadSelfActionPtr Operation_ProvidedInterface_A_setPActivity_this = nullptr;
						OutputPinPtr Operation_ProvidedInterface_A_setPActivity_this_result = nullptr;
							LiteralUnlimitedNaturalPtr Operation_ProvidedInterface_A_setPActivity_this_result_LiteralUnlimitedNatural65 = nullptr;
							LiteralIntegerPtr Operation_ProvidedInterface_A_setPActivity_this_result_LiteralInteger66 = nullptr;
					CallOperationActionPtr Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q = nullptr;
						InputPinPtr Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_target = nullptr;
							LiteralUnlimitedNaturalPtr Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_target_LiteralUnlimitedNatural67 = nullptr;
							LiteralIntegerPtr Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_target_LiteralInteger68 = nullptr;
						InputPinPtr Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_v = nullptr;
							LiteralIntegerPtr Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger69 = nullptr;
							LiteralIntegerPtr Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger70 = nullptr;
							LiteralUnlimitedNaturalPtr Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralUnlimitedNatural71 = nullptr;
					ActivityParameterNodePtr Operation_ProvidedInterface_A_setPActivity_vParameterNode = nullptr;
						LiteralIntegerPtr Operation_ProvidedInterface_A_setPActivity_vParameterNode_LiteralInteger72 = nullptr;
					ObjectFlowPtr Operation_ProvidedInterface_A_setPActivity_ObjectFlow73 = nullptr;
						LiteralBooleanPtr Operation_ProvidedInterface_A_setPActivity_ObjectFlow73_LiteralBoolean74 = nullptr;
						LiteralIntegerPtr Operation_ProvidedInterface_A_setPActivity_ObjectFlow73_LiteralInteger75 = nullptr;
					ObjectFlowPtr Operation_ProvidedInterface_A_setPActivity_ObjectFlow76 = nullptr;
						LiteralBooleanPtr Operation_ProvidedInterface_A_setPActivity_ObjectFlow76_LiteralBoolean77 = nullptr;
						LiteralIntegerPtr Operation_ProvidedInterface_A_setPActivity_ObjectFlow76_LiteralInteger78 = nullptr;
				PortPtr Operation_ProvidedInterface_A_q = nullptr;
			AssociationPtr Operation_ProvidedInterface_S = nullptr;
				PropertyPtr Operation_ProvidedInterface_S_x = nullptr;
				PropertyPtr Operation_ProvidedInterface_S_y = nullptr;

		public:
			virtual ~Operation_ProvidedInterfaceModel();
			static const std::shared_ptr<Operation_ProvidedInterfaceModel>& Instance();

		private:
			Operation_ProvidedInterfaceModel();
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

#endif /* OPERATION_PROVIDEDINTERFACE_MODEL_H */
