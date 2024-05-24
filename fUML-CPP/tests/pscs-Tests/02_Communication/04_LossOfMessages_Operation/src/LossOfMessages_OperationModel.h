/*
 * LossOfMessages_OperationModel.h
 * 
 * Auto-generated file
 */

#ifndef LOSSOFMESSAGES_OPERATION_MODEL_H
#define LOSSOFMESSAGES_OPERATION_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace LossOfMessages_Operation
{
	class LossOfMessages_OperationModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model LossOfMessages_Operation
		 */
		PackagePtr LossOfMessages_Operation = nullptr;
			ActivityPtr LossOfMessages_Operation_main = nullptr;
				OpaqueBehaviorPtr LossOfMessages_Operation_main_testP = nullptr;
					ParameterPtr LossOfMessages_Operation_main_testP_p = nullptr;
				ObjectFlowPtr LossOfMessages_Operation_main_ObjectFlow0 = nullptr;
					LiteralBooleanPtr LossOfMessages_Operation_main_ObjectFlow0_LiteralBoolean1 = nullptr;
					LiteralIntegerPtr LossOfMessages_Operation_main_ObjectFlow0_LiteralInteger2 = nullptr;
				ObjectFlowPtr LossOfMessages_Operation_main_ObjectFlow3 = nullptr;
					LiteralBooleanPtr LossOfMessages_Operation_main_ObjectFlow3_LiteralBoolean4 = nullptr;
					LiteralIntegerPtr LossOfMessages_Operation_main_ObjectFlow3_LiteralInteger5 = nullptr;
				ObjectFlowPtr LossOfMessages_Operation_main_ObjectFlow6 = nullptr;
					LiteralIntegerPtr LossOfMessages_Operation_main_ObjectFlow6_LiteralInteger7 = nullptr;
					LiteralBooleanPtr LossOfMessages_Operation_main_ObjectFlow6_LiteralBoolean8 = nullptr;
				CreateObjectActionPtr LossOfMessages_Operation_main_Create_A = nullptr;
					OutputPinPtr LossOfMessages_Operation_main_Create_A_result = nullptr;
						LiteralIntegerPtr LossOfMessages_Operation_main_Create_A_result_LiteralInteger9 = nullptr;
						LiteralUnlimitedNaturalPtr LossOfMessages_Operation_main_Create_A_result_LiteralUnlimitedNatural10 = nullptr;
				CallOperationActionPtr LossOfMessages_Operation_main_Call_setP = nullptr;
					InputPinPtr LossOfMessages_Operation_main_Call_setP_v = nullptr;
						LiteralIntegerPtr LossOfMessages_Operation_main_Call_setP_v_LiteralInteger11 = nullptr;
						LiteralIntegerPtr LossOfMessages_Operation_main_Call_setP_v_LiteralInteger12 = nullptr;
						LiteralUnlimitedNaturalPtr LossOfMessages_Operation_main_Call_setP_v_LiteralUnlimitedNatural13 = nullptr;
					InputPinPtr LossOfMessages_Operation_main_Call_setP_target = nullptr;
						LiteralUnlimitedNaturalPtr LossOfMessages_Operation_main_Call_setP_target_LiteralUnlimitedNatural14 = nullptr;
						LiteralIntegerPtr LossOfMessages_Operation_main_Call_setP_target_LiteralInteger15 = nullptr;
				ControlFlowPtr LossOfMessages_Operation_main_ControlFlow16 = nullptr;
				CallOperationActionPtr LossOfMessages_Operation_main_A_ = nullptr;
					InputPinPtr LossOfMessages_Operation_main_A__target = nullptr;
						LiteralUnlimitedNaturalPtr LossOfMessages_Operation_main_A__target_LiteralUnlimitedNatural17 = nullptr;
						LiteralIntegerPtr LossOfMessages_Operation_main_A__target_LiteralInteger18 = nullptr;
					OutputPinPtr LossOfMessages_Operation_main_A__result = nullptr;
						LiteralIntegerPtr LossOfMessages_Operation_main_A__result_LiteralInteger19 = nullptr;
						LiteralUnlimitedNaturalPtr LossOfMessages_Operation_main_A__result_LiteralUnlimitedNatural20 = nullptr;
						LiteralIntegerPtr LossOfMessages_Operation_main_A__result_LiteralInteger21 = nullptr;
				ValueSpecificationActionPtr LossOfMessages_Operation_main_Value_4 = nullptr;
					OutputPinPtr LossOfMessages_Operation_main_Value_4_result = nullptr;
						LiteralUnlimitedNaturalPtr LossOfMessages_Operation_main_Value_4_result_LiteralUnlimitedNatural22 = nullptr;
						LiteralIntegerPtr LossOfMessages_Operation_main_Value_4_result_LiteralInteger23 = nullptr;
					LiteralIntegerPtr LossOfMessages_Operation_main_Value_4_LiteralInteger24 = nullptr;
				ReadStructuralFeatureActionPtr LossOfMessages_Operation_main_Read_a_q = nullptr;
					InputPinPtr LossOfMessages_Operation_main_Read_a_q_object = nullptr;
						LiteralUnlimitedNaturalPtr LossOfMessages_Operation_main_Read_a_q_object_LiteralUnlimitedNatural25 = nullptr;
						LiteralIntegerPtr LossOfMessages_Operation_main_Read_a_q_object_LiteralInteger26 = nullptr;
					OutputPinPtr LossOfMessages_Operation_main_Read_a_q_result = nullptr;
						LiteralIntegerPtr LossOfMessages_Operation_main_Read_a_q_result_LiteralInteger27 = nullptr;
						LiteralUnlimitedNaturalPtr LossOfMessages_Operation_main_Read_a_q_result_LiteralUnlimitedNatural28 = nullptr;
				ObjectFlowPtr LossOfMessages_Operation_main_ObjectFlow29 = nullptr;
					LiteralBooleanPtr LossOfMessages_Operation_main_ObjectFlow29_LiteralBoolean30 = nullptr;
					LiteralIntegerPtr LossOfMessages_Operation_main_ObjectFlow29_LiteralInteger31 = nullptr;
				ObjectFlowPtr LossOfMessages_Operation_main_ObjectFlow32 = nullptr;
					LiteralIntegerPtr LossOfMessages_Operation_main_ObjectFlow32_LiteralInteger33 = nullptr;
					LiteralBooleanPtr LossOfMessages_Operation_main_ObjectFlow32_LiteralBoolean34 = nullptr;
				ObjectFlowPtr LossOfMessages_Operation_main_ObjectFlow35 = nullptr;
					LiteralBooleanPtr LossOfMessages_Operation_main_ObjectFlow35_LiteralBoolean36 = nullptr;
					LiteralIntegerPtr LossOfMessages_Operation_main_ObjectFlow35_LiteralInteger37 = nullptr;
				CallBehaviorActionPtr LossOfMessages_Operation_main_Call_testP = nullptr;
					InputPinPtr LossOfMessages_Operation_main_Call_testP_p = nullptr;
						LiteralIntegerPtr LossOfMessages_Operation_main_Call_testP_p_LiteralInteger38 = nullptr;
						LiteralIntegerPtr LossOfMessages_Operation_main_Call_testP_p_LiteralInteger39 = nullptr;
						LiteralUnlimitedNaturalPtr LossOfMessages_Operation_main_Call_testP_p_LiteralUnlimitedNatural40 = nullptr;
				ReadStructuralFeatureActionPtr LossOfMessages_Operation_main_Read_a_p = nullptr;
					InputPinPtr LossOfMessages_Operation_main_Read_a_p_object = nullptr;
						LiteralIntegerPtr LossOfMessages_Operation_main_Read_a_p_object_LiteralInteger41 = nullptr;
						LiteralUnlimitedNaturalPtr LossOfMessages_Operation_main_Read_a_p_object_LiteralUnlimitedNatural42 = nullptr;
					OutputPinPtr LossOfMessages_Operation_main_Read_a_p_result = nullptr;
						LiteralUnlimitedNaturalPtr LossOfMessages_Operation_main_Read_a_p_result_LiteralUnlimitedNatural43 = nullptr;
						LiteralIntegerPtr LossOfMessages_Operation_main_Read_a_p_result_LiteralInteger44 = nullptr;
				ForkNodePtr LossOfMessages_Operation_main_Fork_A = nullptr;
				ObjectFlowPtr LossOfMessages_Operation_main_ObjectFlow45 = nullptr;
					LiteralIntegerPtr LossOfMessages_Operation_main_ObjectFlow45_LiteralInteger46 = nullptr;
					LiteralBooleanPtr LossOfMessages_Operation_main_ObjectFlow45_LiteralBoolean47 = nullptr;
			InterfacePtr LossOfMessages_Operation_I = nullptr;
				OperationPtr LossOfMessages_Operation_I_setP_Integer = nullptr;
					ParameterPtr LossOfMessages_Operation_I_setP_Integer_v = nullptr;
			Class_Ptr LossOfMessages_Operation_A = nullptr;
				PropertyPtr LossOfMessages_Operation_A_p = nullptr;
					LiteralIntegerPtr LossOfMessages_Operation_A_p_LiteralInteger48 = nullptr;
				ActivityPtr LossOfMessages_Operation_A_setPActivity = nullptr;
					ObjectFlowPtr LossOfMessages_Operation_A_setPActivity_ObjectFlow49 = nullptr;
						LiteralBooleanPtr LossOfMessages_Operation_A_setPActivity_ObjectFlow49_LiteralBoolean50 = nullptr;
						LiteralIntegerPtr LossOfMessages_Operation_A_setPActivity_ObjectFlow49_LiteralInteger51 = nullptr;
					ParameterPtr LossOfMessages_Operation_A_setPActivity_v = nullptr;
					ObjectFlowPtr LossOfMessages_Operation_A_setPActivity_ObjectFlow52 = nullptr;
						LiteralBooleanPtr LossOfMessages_Operation_A_setPActivity_ObjectFlow52_LiteralBoolean53 = nullptr;
						LiteralIntegerPtr LossOfMessages_Operation_A_setPActivity_ObjectFlow52_LiteralInteger54 = nullptr;
					ActivityParameterNodePtr LossOfMessages_Operation_A_setPActivity_vParameterNode = nullptr;
						LiteralIntegerPtr LossOfMessages_Operation_A_setPActivity_vParameterNode_LiteralInteger55 = nullptr;
					ReadSelfActionPtr LossOfMessages_Operation_A_setPActivity_this = nullptr;
						OutputPinPtr LossOfMessages_Operation_A_setPActivity_this_result = nullptr;
							LiteralIntegerPtr LossOfMessages_Operation_A_setPActivity_this_result_LiteralInteger56 = nullptr;
							LiteralUnlimitedNaturalPtr LossOfMessages_Operation_A_setPActivity_this_result_LiteralUnlimitedNatural57 = nullptr;
					AddStructuralFeatureValueActionPtr LossOfMessages_Operation_A_setPActivity_Set_this_p = nullptr;
						InputPinPtr LossOfMessages_Operation_A_setPActivity_Set_this_p_object = nullptr;
							LiteralUnlimitedNaturalPtr LossOfMessages_Operation_A_setPActivity_Set_this_p_object_LiteralUnlimitedNatural58 = nullptr;
							LiteralIntegerPtr LossOfMessages_Operation_A_setPActivity_Set_this_p_object_LiteralInteger59 = nullptr;
						OutputPinPtr LossOfMessages_Operation_A_setPActivity_Set_this_p_result = nullptr;
							LiteralIntegerPtr LossOfMessages_Operation_A_setPActivity_Set_this_p_result_LiteralInteger60 = nullptr;
							LiteralUnlimitedNaturalPtr LossOfMessages_Operation_A_setPActivity_Set_this_p_result_LiteralUnlimitedNatural61 = nullptr;
						InputPinPtr LossOfMessages_Operation_A_setPActivity_Set_this_p_value = nullptr;
							LiteralUnlimitedNaturalPtr LossOfMessages_Operation_A_setPActivity_Set_this_p_value_LiteralUnlimitedNatural62 = nullptr;
							LiteralIntegerPtr LossOfMessages_Operation_A_setPActivity_Set_this_p_value_LiteralInteger63 = nullptr;
				PortPtr LossOfMessages_Operation_A_q = nullptr;
				OperationPtr LossOfMessages_Operation_A_setP_Integer = nullptr;
					ParameterPtr LossOfMessages_Operation_A_setP_Integer_v = nullptr;
				InterfaceRealizationPtr LossOfMessages_Operation_A_IRealization = nullptr;
				OperationPtr LossOfMessages_Operation_A_A_A = nullptr;
					ParameterPtr LossOfMessages_Operation_A_A_A_result = nullptr;
			Class_Ptr LossOfMessages_Operation_IImpl = nullptr;
				OperationPtr LossOfMessages_Operation_IImpl_setP_Integer = nullptr;
					ParameterPtr LossOfMessages_Operation_IImpl_setP_Integer_v = nullptr;
				InterfaceRealizationPtr LossOfMessages_Operation_IImpl_IRealization = nullptr;

		public:
			virtual ~LossOfMessages_OperationModel();
			static const std::shared_ptr<LossOfMessages_OperationModel>& Instance();

		private:
			LossOfMessages_OperationModel();
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

#endif /* LOSSOFMESSAGES_OPERATION_MODEL_H */
