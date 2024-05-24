/*
 * SignalCommonModel.h
 * 
 * Auto-generated file
 */

#ifndef SIGNALCOMMON_MODEL_H
#define SIGNALCOMMON_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace SignalCommon
{
	class SignalCommonModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model SignalCommon
		 */
		PackagePtr SignalCommon = nullptr;
			Class_Ptr SignalCommon_A = nullptr;
				OperationPtr SignalCommon_A_A_A = nullptr;
					ParameterPtr SignalCommon_A_A_A_result = nullptr;
				PropertyPtr SignalCommon_A_v = nullptr;
				PortPtr SignalCommon_A_p = nullptr;
				ActivityPtr SignalCommon_A_AClassifierBehavior = nullptr;
					ObjectFlowPtr SignalCommon_A_AClassifierBehavior_ObjectFlow0 = nullptr;
						LiteralBooleanPtr SignalCommon_A_AClassifierBehavior_ObjectFlow0_LiteralBoolean1 = nullptr;
						LiteralIntegerPtr SignalCommon_A_AClassifierBehavior_ObjectFlow0_LiteralInteger2 = nullptr;
					AcceptEventActionPtr SignalCommon_A_AClassifierBehavior_Accept_S = nullptr;
						OutputPinPtr SignalCommon_A_AClassifierBehavior_Accept_S_value = nullptr;
							LiteralUnlimitedNaturalPtr SignalCommon_A_AClassifierBehavior_Accept_S_value_LiteralUnlimitedNatural3 = nullptr;
							LiteralIntegerPtr SignalCommon_A_AClassifierBehavior_Accept_S_value_LiteralInteger4 = nullptr;
							LiteralIntegerPtr SignalCommon_A_AClassifierBehavior_Accept_S_value_LiteralInteger5 = nullptr;
						TriggerPtr SignalCommon_A_AClassifierBehavior_Accept_S_Trigger6 = nullptr;
					ActivityFinalNodePtr SignalCommon_A_AClassifierBehavior_ActivityFinalNode7 = nullptr;
					ControlFlowPtr SignalCommon_A_AClassifierBehavior_ControlFlow8 = nullptr;
					AddStructuralFeatureValueActionPtr SignalCommon_A_AClassifierBehavior_Set_v = nullptr;
						InputPinPtr SignalCommon_A_AClassifierBehavior_Set_v_value = nullptr;
							LiteralUnlimitedNaturalPtr SignalCommon_A_AClassifierBehavior_Set_v_value_LiteralUnlimitedNatural9 = nullptr;
							LiteralIntegerPtr SignalCommon_A_AClassifierBehavior_Set_v_value_LiteralInteger10 = nullptr;
						InputPinPtr SignalCommon_A_AClassifierBehavior_Set_v_object = nullptr;
							LiteralIntegerPtr SignalCommon_A_AClassifierBehavior_Set_v_object_LiteralInteger11 = nullptr;
							LiteralUnlimitedNaturalPtr SignalCommon_A_AClassifierBehavior_Set_v_object_LiteralUnlimitedNatural12 = nullptr;
						OutputPinPtr SignalCommon_A_AClassifierBehavior_Set_v_result = nullptr;
							LiteralUnlimitedNaturalPtr SignalCommon_A_AClassifierBehavior_Set_v_result_LiteralUnlimitedNatural13 = nullptr;
							LiteralIntegerPtr SignalCommon_A_AClassifierBehavior_Set_v_result_LiteralInteger14 = nullptr;
					SendSignalActionPtr SignalCommon_A_AClassifierBehavior_Send_Continue = nullptr;
						InputPinPtr SignalCommon_A_AClassifierBehavior_Send_Continue_target = nullptr;
							LiteralIntegerPtr SignalCommon_A_AClassifierBehavior_Send_Continue_target_LiteralInteger15 = nullptr;
							LiteralUnlimitedNaturalPtr SignalCommon_A_AClassifierBehavior_Send_Continue_target_LiteralUnlimitedNatural16 = nullptr;
					ObjectFlowPtr SignalCommon_A_AClassifierBehavior_ObjectFlow17 = nullptr;
						LiteralBooleanPtr SignalCommon_A_AClassifierBehavior_ObjectFlow17_LiteralBoolean18 = nullptr;
						LiteralIntegerPtr SignalCommon_A_AClassifierBehavior_ObjectFlow17_LiteralInteger19 = nullptr;
					ObjectFlowPtr SignalCommon_A_AClassifierBehavior_ObjectFlow20 = nullptr;
						LiteralIntegerPtr SignalCommon_A_AClassifierBehavior_ObjectFlow20_LiteralInteger21 = nullptr;
						LiteralBooleanPtr SignalCommon_A_AClassifierBehavior_ObjectFlow20_LiteralBoolean22 = nullptr;
					ControlFlowPtr SignalCommon_A_AClassifierBehavior_ControlFlow23 = nullptr;
					ReadSelfActionPtr SignalCommon_A_AClassifierBehavior_this = nullptr;
						OutputPinPtr SignalCommon_A_AClassifierBehavior_this_result = nullptr;
							LiteralIntegerPtr SignalCommon_A_AClassifierBehavior_this_result_LiteralInteger24 = nullptr;
							LiteralUnlimitedNaturalPtr SignalCommon_A_AClassifierBehavior_this_result_LiteralUnlimitedNatural25 = nullptr;
			SignalEventPtr SignalCommon_StartEvent = nullptr;
			Class_Ptr SignalCommon_Tester = nullptr;
				ReceptionPtr SignalCommon_Tester_Start = nullptr;
				ActivityPtr SignalCommon_Tester_TesterClassifierBehavior = nullptr;
					ControlFlowPtr SignalCommon_Tester_TesterClassifierBehavior_ControlFlow26 = nullptr;
					CallOperationActionPtr SignalCommon_Tester_TesterClassifierBehavior_Call_test_ = nullptr;
						InputPinPtr SignalCommon_Tester_TesterClassifierBehavior_Call_test__target = nullptr;
							LiteralIntegerPtr SignalCommon_Tester_TesterClassifierBehavior_Call_test__target_LiteralInteger27 = nullptr;
							LiteralUnlimitedNaturalPtr SignalCommon_Tester_TesterClassifierBehavior_Call_test__target_LiteralUnlimitedNatural28 = nullptr;
					ControlFlowPtr SignalCommon_Tester_TesterClassifierBehavior_ControlFlow29 = nullptr;
					ReadSelfActionPtr SignalCommon_Tester_TesterClassifierBehavior_this = nullptr;
						OutputPinPtr SignalCommon_Tester_TesterClassifierBehavior_this_result = nullptr;
							LiteralIntegerPtr SignalCommon_Tester_TesterClassifierBehavior_this_result_LiteralInteger30 = nullptr;
							LiteralUnlimitedNaturalPtr SignalCommon_Tester_TesterClassifierBehavior_this_result_LiteralUnlimitedNatural31 = nullptr;
					ControlFlowPtr SignalCommon_Tester_TesterClassifierBehavior_ControlFlow32 = nullptr;
					ObjectFlowPtr SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow33 = nullptr;
						LiteralBooleanPtr SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralBoolean34 = nullptr;
						LiteralIntegerPtr SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralInteger35 = nullptr;
					SendSignalActionPtr SignalCommon_Tester_TesterClassifierBehavior_Send_S = nullptr;
						InputPinPtr SignalCommon_Tester_TesterClassifierBehavior_Send_S_target = nullptr;
							LiteralIntegerPtr SignalCommon_Tester_TesterClassifierBehavior_Send_S_target_LiteralInteger36 = nullptr;
							LiteralUnlimitedNaturalPtr SignalCommon_Tester_TesterClassifierBehavior_Send_S_target_LiteralUnlimitedNatural37 = nullptr;
						InputPinPtr SignalCommon_Tester_TesterClassifierBehavior_Send_S_value = nullptr;
							LiteralUnlimitedNaturalPtr SignalCommon_Tester_TesterClassifierBehavior_Send_S_value_LiteralUnlimitedNatural38 = nullptr;
							LiteralIntegerPtr SignalCommon_Tester_TesterClassifierBehavior_Send_S_value_LiteralInteger39 = nullptr;
							LiteralIntegerPtr SignalCommon_Tester_TesterClassifierBehavior_Send_S_value_LiteralInteger40 = nullptr;
					ControlFlowPtr SignalCommon_Tester_TesterClassifierBehavior_ControlFlow41 = nullptr;
					ActivityFinalNodePtr SignalCommon_Tester_TesterClassifierBehavior_ActivityFinalNode42 = nullptr;
					ObjectFlowPtr SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow43 = nullptr;
						LiteralBooleanPtr SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow43_LiteralBoolean44 = nullptr;
						LiteralIntegerPtr SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow43_LiteralInteger45 = nullptr;
					ObjectFlowPtr SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow46 = nullptr;
						LiteralBooleanPtr SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralBoolean47 = nullptr;
						LiteralIntegerPtr SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralInteger48 = nullptr;
					AcceptEventActionPtr SignalCommon_Tester_TesterClassifierBehavior_Accept_Continue = nullptr;
					AcceptEventActionPtr SignalCommon_Tester_TesterClassifierBehavior_Accept_Start = nullptr;
						TriggerPtr SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_Trigger49 = nullptr;
						OutputPinPtr SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_testCase = nullptr;
							LiteralIntegerPtr SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralInteger50 = nullptr;
							LiteralUnlimitedNaturalPtr SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralUnlimitedNatural51 = nullptr;
							LiteralIntegerPtr SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralInteger52 = nullptr;
					ValueSpecificationActionPtr SignalCommon_Tester_TesterClassifierBehavior_Value_4 = nullptr;
						OutputPinPtr SignalCommon_Tester_TesterClassifierBehavior_Value_4_result = nullptr;
							LiteralUnlimitedNaturalPtr SignalCommon_Tester_TesterClassifierBehavior_Value_4_result_LiteralUnlimitedNatural53 = nullptr;
							LiteralIntegerPtr SignalCommon_Tester_TesterClassifierBehavior_Value_4_result_LiteralInteger54 = nullptr;
						LiteralIntegerPtr SignalCommon_Tester_TesterClassifierBehavior_Value_4_LiteralInteger55 = nullptr;
				OperationPtr SignalCommon_Tester_Tester_Tester = nullptr;
					ParameterPtr SignalCommon_Tester_Tester_Tester_result = nullptr;
				PortPtr SignalCommon_Tester_q = nullptr;
			AssociationPtr SignalCommon_R = nullptr;
				PropertyPtr SignalCommon_R_y = nullptr;
				PropertyPtr SignalCommon_R_x = nullptr;
			SignalPtr SignalCommon_S = nullptr;
				PropertyPtr SignalCommon_S_value = nullptr;
			SignalPtr SignalCommon_Start = nullptr;
				PropertyPtr SignalCommon_Start_testCase = nullptr;
			SignalEventPtr SignalCommon_ContinueEvent = nullptr;
			Class_Ptr SignalCommon_I = nullptr;
			SignalPtr SignalCommon_Continue = nullptr;
			SignalEventPtr SignalCommon_SEvent = nullptr;
			Class_Ptr SignalCommon_TestCase = nullptr;
				OperationPtr SignalCommon_TestCase_test = nullptr;

		public:
			virtual ~SignalCommonModel();
			static const std::shared_ptr<SignalCommonModel>& Instance();

		private:
			SignalCommonModel();
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

#endif /* SIGNALCOMMON_MODEL_H */
