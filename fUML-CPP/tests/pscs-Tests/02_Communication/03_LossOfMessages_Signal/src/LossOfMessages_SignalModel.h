/*
 * LossOfMessages_SignalModel.h
 * 
 * Auto-generated file
 */

#ifndef LOSSOFMESSAGES_SIGNAL_MODEL_H
#define LOSSOFMESSAGES_SIGNAL_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace LossOfMessages_Signal
{
	class LossOfMessages_SignalModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model LossOfMessages_Signal
		 */
		PackagePtr LossOfMessages_Signal = nullptr;
			InterfacePtr LossOfMessages_Signal_I = nullptr;
				ReceptionPtr LossOfMessages_Signal_I_S = nullptr;
			Class_Ptr LossOfMessages_Signal_A = nullptr;
				PortPtr LossOfMessages_Signal_A_q = nullptr;
				InterfaceRealizationPtr LossOfMessages_Signal_A_IRealization = nullptr;
				ActivityPtr LossOfMessages_Signal_A_AClassifierBehavior = nullptr;
					InitialNodePtr LossOfMessages_Signal_A_AClassifierBehavior_Initial = nullptr;
					ObjectFlowPtr LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow0 = nullptr;
						LiteralIntegerPtr LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow0_LiteralInteger1 = nullptr;
						LiteralBooleanPtr LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow0_LiteralBoolean2 = nullptr;
					ObjectFlowPtr LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow3 = nullptr;
						LiteralBooleanPtr LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow3_LiteralBoolean4 = nullptr;
						LiteralIntegerPtr LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow3_LiteralInteger5 = nullptr;
					ObjectFlowPtr LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow6 = nullptr;
						LiteralIntegerPtr LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow6_LiteralInteger7 = nullptr;
						LiteralBooleanPtr LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow6_LiteralBoolean8 = nullptr;
					AddStructuralFeatureValueActionPtr LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p = nullptr;
						InputPinPtr LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_value = nullptr;
							LiteralUnlimitedNaturalPtr LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_value_LiteralUnlimitedNatural9 = nullptr;
							LiteralIntegerPtr LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_value_LiteralInteger10 = nullptr;
						InputPinPtr LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_object = nullptr;
							LiteralIntegerPtr LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_object_LiteralInteger11 = nullptr;
							LiteralUnlimitedNaturalPtr LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_object_LiteralUnlimitedNatural12 = nullptr;
						OutputPinPtr LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_result = nullptr;
							LiteralUnlimitedNaturalPtr LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_result_LiteralUnlimitedNatural13 = nullptr;
							LiteralIntegerPtr LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_result_LiteralInteger14 = nullptr;
					ReadSelfActionPtr LossOfMessages_Signal_A_AClassifierBehavior_this = nullptr;
						OutputPinPtr LossOfMessages_Signal_A_AClassifierBehavior_this_result = nullptr;
							LiteralIntegerPtr LossOfMessages_Signal_A_AClassifierBehavior_this_result_LiteralInteger15 = nullptr;
							LiteralUnlimitedNaturalPtr LossOfMessages_Signal_A_AClassifierBehavior_this_result_LiteralUnlimitedNatural16 = nullptr;
					ReadStructuralFeatureActionPtr LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v = nullptr;
						OutputPinPtr LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_result = nullptr;
							LiteralIntegerPtr LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_result_LiteralInteger17 = nullptr;
							LiteralUnlimitedNaturalPtr LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_result_LiteralUnlimitedNatural18 = nullptr;
						InputPinPtr LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_object = nullptr;
							LiteralIntegerPtr LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_object_LiteralInteger19 = nullptr;
							LiteralUnlimitedNaturalPtr LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_object_LiteralUnlimitedNatural20 = nullptr;
					ControlFlowPtr LossOfMessages_Signal_A_AClassifierBehavior_ControlFlow21 = nullptr;
					AcceptEventActionPtr LossOfMessages_Signal_A_AClassifierBehavior_Accept_S = nullptr;
						TriggerPtr LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_Trigger22 = nullptr;
						OutputPinPtr LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_result = nullptr;
							LiteralUnlimitedNaturalPtr LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_result_LiteralUnlimitedNatural23 = nullptr;
							LiteralIntegerPtr LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_result_LiteralInteger24 = nullptr;
							LiteralIntegerPtr LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_result_LiteralInteger25 = nullptr;
				PropertyPtr LossOfMessages_Signal_A_p = nullptr;
					LiteralIntegerPtr LossOfMessages_Signal_A_p_LiteralInteger26 = nullptr;
				OperationPtr LossOfMessages_Signal_A_A_A = nullptr;
					ParameterPtr LossOfMessages_Signal_A_A_A_result = nullptr;
				ReceptionPtr LossOfMessages_Signal_A_S = nullptr;
			SignalPtr LossOfMessages_Signal_S = nullptr;
				PropertyPtr LossOfMessages_Signal_S_v = nullptr;
			SignalEventPtr LossOfMessages_Signal_SignalEventS = nullptr;
			ActivityPtr LossOfMessages_Signal_main = nullptr;
				ObjectFlowPtr LossOfMessages_Signal_main_ObjectFlow27 = nullptr;
					LiteralIntegerPtr LossOfMessages_Signal_main_ObjectFlow27_LiteralInteger28 = nullptr;
					LiteralBooleanPtr LossOfMessages_Signal_main_ObjectFlow27_LiteralBoolean29 = nullptr;
				ForkNodePtr LossOfMessages_Signal_main_Fork_A = nullptr;
				ObjectFlowPtr LossOfMessages_Signal_main_ObjectFlow30 = nullptr;
					LiteralIntegerPtr LossOfMessages_Signal_main_ObjectFlow30_LiteralInteger31 = nullptr;
					LiteralBooleanPtr LossOfMessages_Signal_main_ObjectFlow30_LiteralBoolean32 = nullptr;
				ObjectFlowPtr LossOfMessages_Signal_main_ObjectFlow33 = nullptr;
					LiteralIntegerPtr LossOfMessages_Signal_main_ObjectFlow33_LiteralInteger34 = nullptr;
					LiteralBooleanPtr LossOfMessages_Signal_main_ObjectFlow33_LiteralBoolean35 = nullptr;
				ObjectFlowPtr LossOfMessages_Signal_main_ObjectFlow36 = nullptr;
					LiteralIntegerPtr LossOfMessages_Signal_main_ObjectFlow36_LiteralInteger37 = nullptr;
					LiteralBooleanPtr LossOfMessages_Signal_main_ObjectFlow36_LiteralBoolean38 = nullptr;
				OpaqueBehaviorPtr LossOfMessages_Signal_main_testP = nullptr;
					ParameterPtr LossOfMessages_Signal_main_testP_p = nullptr;
				CreateObjectActionPtr LossOfMessages_Signal_main_Create_A = nullptr;
					OutputPinPtr LossOfMessages_Signal_main_Create_A_result = nullptr;
						LiteralIntegerPtr LossOfMessages_Signal_main_Create_A_result_LiteralInteger39 = nullptr;
						LiteralUnlimitedNaturalPtr LossOfMessages_Signal_main_Create_A_result_LiteralUnlimitedNatural40 = nullptr;
				CallBehaviorActionPtr LossOfMessages_Signal_main_Call_testP = nullptr;
					InputPinPtr LossOfMessages_Signal_main_Call_testP_p = nullptr;
						LiteralUnlimitedNaturalPtr LossOfMessages_Signal_main_Call_testP_p_LiteralUnlimitedNatural41 = nullptr;
						LiteralIntegerPtr LossOfMessages_Signal_main_Call_testP_p_LiteralInteger42 = nullptr;
						LiteralIntegerPtr LossOfMessages_Signal_main_Call_testP_p_LiteralInteger43 = nullptr;
				ReadStructuralFeatureActionPtr LossOfMessages_Signal_main_Read_a_p = nullptr;
					OutputPinPtr LossOfMessages_Signal_main_Read_a_p_result = nullptr;
						LiteralUnlimitedNaturalPtr LossOfMessages_Signal_main_Read_a_p_result_LiteralUnlimitedNatural44 = nullptr;
						LiteralIntegerPtr LossOfMessages_Signal_main_Read_a_p_result_LiteralInteger45 = nullptr;
					InputPinPtr LossOfMessages_Signal_main_Read_a_p_object = nullptr;
						LiteralUnlimitedNaturalPtr LossOfMessages_Signal_main_Read_a_p_object_LiteralUnlimitedNatural46 = nullptr;
						LiteralIntegerPtr LossOfMessages_Signal_main_Read_a_p_object_LiteralInteger47 = nullptr;
				ControlFlowPtr LossOfMessages_Signal_main_ControlFlow48 = nullptr;
				ValueSpecificationActionPtr LossOfMessages_Signal_main_Value_4 = nullptr;
					OutputPinPtr LossOfMessages_Signal_main_Value_4_result = nullptr;
						LiteralIntegerPtr LossOfMessages_Signal_main_Value_4_result_LiteralInteger49 = nullptr;
						LiteralUnlimitedNaturalPtr LossOfMessages_Signal_main_Value_4_result_LiteralUnlimitedNatural50 = nullptr;
					LiteralIntegerPtr LossOfMessages_Signal_main_Value_4_LiteralInteger51 = nullptr;
				ObjectFlowPtr LossOfMessages_Signal_main_ObjectFlow52 = nullptr;
					LiteralBooleanPtr LossOfMessages_Signal_main_ObjectFlow52_LiteralBoolean53 = nullptr;
					LiteralIntegerPtr LossOfMessages_Signal_main_ObjectFlow52_LiteralInteger54 = nullptr;
				CallOperationActionPtr LossOfMessages_Signal_main_A_ = nullptr;
					InputPinPtr LossOfMessages_Signal_main_A__target = nullptr;
						LiteralUnlimitedNaturalPtr LossOfMessages_Signal_main_A__target_LiteralUnlimitedNatural55 = nullptr;
						LiteralIntegerPtr LossOfMessages_Signal_main_A__target_LiteralInteger56 = nullptr;
					OutputPinPtr LossOfMessages_Signal_main_A__result = nullptr;
						LiteralIntegerPtr LossOfMessages_Signal_main_A__result_LiteralInteger57 = nullptr;
						LiteralUnlimitedNaturalPtr LossOfMessages_Signal_main_A__result_LiteralUnlimitedNatural58 = nullptr;
						LiteralIntegerPtr LossOfMessages_Signal_main_A__result_LiteralInteger59 = nullptr;
				ReadStructuralFeatureActionPtr LossOfMessages_Signal_main_Read_a_q = nullptr;
					OutputPinPtr LossOfMessages_Signal_main_Read_a_q_result = nullptr;
						LiteralUnlimitedNaturalPtr LossOfMessages_Signal_main_Read_a_q_result_LiteralUnlimitedNatural60 = nullptr;
						LiteralIntegerPtr LossOfMessages_Signal_main_Read_a_q_result_LiteralInteger61 = nullptr;
					InputPinPtr LossOfMessages_Signal_main_Read_a_q_object = nullptr;
						LiteralIntegerPtr LossOfMessages_Signal_main_Read_a_q_object_LiteralInteger62 = nullptr;
						LiteralUnlimitedNaturalPtr LossOfMessages_Signal_main_Read_a_q_object_LiteralUnlimitedNatural63 = nullptr;
				ObjectFlowPtr LossOfMessages_Signal_main_ObjectFlow64 = nullptr;
					LiteralBooleanPtr LossOfMessages_Signal_main_ObjectFlow64_LiteralBoolean65 = nullptr;
					LiteralIntegerPtr LossOfMessages_Signal_main_ObjectFlow64_LiteralInteger66 = nullptr;
				ObjectFlowPtr LossOfMessages_Signal_main_ObjectFlow67 = nullptr;
					LiteralIntegerPtr LossOfMessages_Signal_main_ObjectFlow67_LiteralInteger68 = nullptr;
					LiteralBooleanPtr LossOfMessages_Signal_main_ObjectFlow67_LiteralBoolean69 = nullptr;
				SendSignalActionPtr LossOfMessages_Signal_main_Send_S = nullptr;
					InputPinPtr LossOfMessages_Signal_main_Send_S_v = nullptr;
						LiteralIntegerPtr LossOfMessages_Signal_main_Send_S_v_LiteralInteger70 = nullptr;
						LiteralIntegerPtr LossOfMessages_Signal_main_Send_S_v_LiteralInteger71 = nullptr;
						LiteralUnlimitedNaturalPtr LossOfMessages_Signal_main_Send_S_v_LiteralUnlimitedNatural72 = nullptr;
					InputPinPtr LossOfMessages_Signal_main_Send_S_target = nullptr;
						LiteralUnlimitedNaturalPtr LossOfMessages_Signal_main_Send_S_target_LiteralUnlimitedNatural73 = nullptr;
						LiteralIntegerPtr LossOfMessages_Signal_main_Send_S_target_LiteralInteger74 = nullptr;
			Class_Ptr LossOfMessages_Signal_IImpl = nullptr;
				ReceptionPtr LossOfMessages_Signal_IImpl_S = nullptr;
				InterfaceRealizationPtr LossOfMessages_Signal_IImpl_IRealization = nullptr;

		public:
			virtual ~LossOfMessages_SignalModel();
			static const std::shared_ptr<LossOfMessages_SignalModel>& Instance();

		private:
			LossOfMessages_SignalModel();
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

#endif /* LOSSOFMESSAGES_SIGNAL_MODEL_H */
