/*
 * Signal_AssemblyModel.h
 * 
 * Auto-generated file
 */

#ifndef SIGNAL_ASSEMBLY_MODEL_H
#define SIGNAL_ASSEMBLY_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace Signal_Assembly
{
	class Signal_AssemblyModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model Signal_Assembly
		 */
		PackagePtr Signal_Assembly = nullptr;
			Class_Ptr Signal_Assembly_TestCase = nullptr;
				OperationPtr Signal_Assembly_TestCase_test = nullptr;
			SignalPtr Signal_Assembly_S = nullptr;
				PropertyPtr Signal_Assembly_S_value = nullptr;
			SignalEventPtr Signal_Assembly_ContinueEvent = nullptr;
			AssociationPtr Signal_Assembly_R = nullptr;
				PropertyPtr Signal_Assembly_R_y = nullptr;
				PropertyPtr Signal_Assembly_R_x = nullptr;
			ActivityPtr Signal_Assembly_main = nullptr;
				ObjectFlowPtr Signal_Assembly_main_ObjectFlow0 = nullptr;
					LiteralBooleanPtr Signal_Assembly_main_ObjectFlow0_LiteralBoolean1 = nullptr;
					LiteralIntegerPtr Signal_Assembly_main_ObjectFlow0_LiteralInteger2 = nullptr;
				CallOperationActionPtr Signal_Assembly_main_TestCaseAssembly_ = nullptr;
					InputPinPtr Signal_Assembly_main_TestCaseAssembly__target = nullptr;
						LiteralIntegerPtr Signal_Assembly_main_TestCaseAssembly__target_LiteralInteger3 = nullptr;
						LiteralUnlimitedNaturalPtr Signal_Assembly_main_TestCaseAssembly__target_LiteralUnlimitedNatural4 = nullptr;
					OutputPinPtr Signal_Assembly_main_TestCaseAssembly__result = nullptr;
						LiteralIntegerPtr Signal_Assembly_main_TestCaseAssembly__result_LiteralInteger5 = nullptr;
						LiteralIntegerPtr Signal_Assembly_main_TestCaseAssembly__result_LiteralInteger6 = nullptr;
						LiteralUnlimitedNaturalPtr Signal_Assembly_main_TestCaseAssembly__result_LiteralUnlimitedNatural7 = nullptr;
				ForkNodePtr Signal_Assembly_main_Fork_testCase = nullptr;
				ObjectFlowPtr Signal_Assembly_main_ObjectFlow8 = nullptr;
					LiteralBooleanPtr Signal_Assembly_main_ObjectFlow8_LiteralBoolean9 = nullptr;
					LiteralIntegerPtr Signal_Assembly_main_ObjectFlow8_LiteralInteger10 = nullptr;
				CreateObjectActionPtr Signal_Assembly_main_Create_TestCaseAssembly = nullptr;
					OutputPinPtr Signal_Assembly_main_Create_TestCaseAssembly_result = nullptr;
						LiteralUnlimitedNaturalPtr Signal_Assembly_main_Create_TestCaseAssembly_result_LiteralUnlimitedNatural11 = nullptr;
						LiteralIntegerPtr Signal_Assembly_main_Create_TestCaseAssembly_result_LiteralInteger12 = nullptr;
				ObjectFlowPtr Signal_Assembly_main_ObjectFlow13 = nullptr;
					LiteralIntegerPtr Signal_Assembly_main_ObjectFlow13_LiteralInteger14 = nullptr;
					LiteralBooleanPtr Signal_Assembly_main_ObjectFlow13_LiteralBoolean15 = nullptr;
				SendSignalActionPtr Signal_Assembly_main_Send_Start = nullptr;
					InputPinPtr Signal_Assembly_main_Send_Start_testCase = nullptr;
						LiteralIntegerPtr Signal_Assembly_main_Send_Start_testCase_LiteralInteger16 = nullptr;
						LiteralIntegerPtr Signal_Assembly_main_Send_Start_testCase_LiteralInteger17 = nullptr;
						LiteralUnlimitedNaturalPtr Signal_Assembly_main_Send_Start_testCase_LiteralUnlimitedNatural18 = nullptr;
					InputPinPtr Signal_Assembly_main_Send_Start_target = nullptr;
						LiteralIntegerPtr Signal_Assembly_main_Send_Start_target_LiteralInteger19 = nullptr;
						LiteralUnlimitedNaturalPtr Signal_Assembly_main_Send_Start_target_LiteralUnlimitedNatural20 = nullptr;
				ReadStructuralFeatureActionPtr Signal_Assembly_main_Read_TestCaseAssembly_tester = nullptr;
					OutputPinPtr Signal_Assembly_main_Read_TestCaseAssembly_tester_result = nullptr;
						LiteralIntegerPtr Signal_Assembly_main_Read_TestCaseAssembly_tester_result_LiteralInteger21 = nullptr;
						LiteralUnlimitedNaturalPtr Signal_Assembly_main_Read_TestCaseAssembly_tester_result_LiteralUnlimitedNatural22 = nullptr;
					InputPinPtr Signal_Assembly_main_Read_TestCaseAssembly_tester_object = nullptr;
						LiteralIntegerPtr Signal_Assembly_main_Read_TestCaseAssembly_tester_object_LiteralInteger23 = nullptr;
						LiteralUnlimitedNaturalPtr Signal_Assembly_main_Read_TestCaseAssembly_tester_object_LiteralUnlimitedNatural24 = nullptr;
				ObjectFlowPtr Signal_Assembly_main_ObjectFlow25 = nullptr;
					LiteralBooleanPtr Signal_Assembly_main_ObjectFlow25_LiteralBoolean26 = nullptr;
					LiteralIntegerPtr Signal_Assembly_main_ObjectFlow25_LiteralInteger27 = nullptr;
				ObjectFlowPtr Signal_Assembly_main_ObjectFlow28 = nullptr;
					LiteralIntegerPtr Signal_Assembly_main_ObjectFlow28_LiteralInteger29 = nullptr;
					LiteralBooleanPtr Signal_Assembly_main_ObjectFlow28_LiteralBoolean30 = nullptr;
			SignalPtr Signal_Assembly_Continue = nullptr;
			SignalEventPtr Signal_Assembly_SEvent = nullptr;
			Class_Ptr Signal_Assembly_I = nullptr;
			Class_Ptr Signal_Assembly_Tester = nullptr;
				ActivityPtr Signal_Assembly_Tester_TesterClassifierBehavior = nullptr;
					AcceptEventActionPtr Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue = nullptr;
						TriggerPtr Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_Trigger31 = nullptr;
						OutputPinPtr Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_result = nullptr;
							LiteralUnlimitedNaturalPtr Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralUnlimitedNatural32 = nullptr;
							LiteralIntegerPtr Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger33 = nullptr;
							LiteralIntegerPtr Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger34 = nullptr;
					ObjectFlowPtr Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow35 = nullptr;
						LiteralBooleanPtr Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow35_LiteralBoolean36 = nullptr;
						LiteralIntegerPtr Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow35_LiteralInteger37 = nullptr;
					AcceptEventActionPtr Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start = nullptr;
						OutputPinPtr Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_testCase = nullptr;
							LiteralIntegerPtr Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralInteger38 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralUnlimitedNatural39 = nullptr;
							LiteralIntegerPtr Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralInteger40 = nullptr;
						TriggerPtr Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_Trigger41 = nullptr;
					ControlFlowPtr Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow42 = nullptr;
					CallOperationActionPtr Signal_Assembly_Tester_TesterClassifierBehavior_Call_test_ = nullptr;
						InputPinPtr Signal_Assembly_Tester_TesterClassifierBehavior_Call_test__target = nullptr;
							LiteralUnlimitedNaturalPtr Signal_Assembly_Tester_TesterClassifierBehavior_Call_test__target_LiteralUnlimitedNatural43 = nullptr;
							LiteralIntegerPtr Signal_Assembly_Tester_TesterClassifierBehavior_Call_test__target_LiteralInteger44 = nullptr;
					ControlFlowPtr Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow45 = nullptr;
					SendSignalActionPtr Signal_Assembly_Tester_TesterClassifierBehavior_Send_S = nullptr;
						InputPinPtr Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_target = nullptr;
							LiteralUnlimitedNaturalPtr Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_target_LiteralUnlimitedNatural46 = nullptr;
							LiteralIntegerPtr Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_target_LiteralInteger47 = nullptr;
						InputPinPtr Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_value = nullptr;
							LiteralIntegerPtr Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_value_LiteralInteger48 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_value_LiteralUnlimitedNatural49 = nullptr;
							LiteralIntegerPtr Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_value_LiteralInteger50 = nullptr;
					ValueSpecificationActionPtr Signal_Assembly_Tester_TesterClassifierBehavior_Value_4 = nullptr;
						OutputPinPtr Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_result = nullptr;
							LiteralIntegerPtr Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_result_LiteralInteger51 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_result_LiteralUnlimitedNatural52 = nullptr;
						LiteralIntegerPtr Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_LiteralInteger53 = nullptr;
					ActivityFinalNodePtr Signal_Assembly_Tester_TesterClassifierBehavior_ActivityFinalNode54 = nullptr;
					ObjectFlowPtr Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow55 = nullptr;
						LiteralBooleanPtr Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow55_LiteralBoolean56 = nullptr;
						LiteralIntegerPtr Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow55_LiteralInteger57 = nullptr;
					ControlFlowPtr Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow58 = nullptr;
					ReadSelfActionPtr Signal_Assembly_Tester_TesterClassifierBehavior_this = nullptr;
						OutputPinPtr Signal_Assembly_Tester_TesterClassifierBehavior_this_result = nullptr;
							LiteralIntegerPtr Signal_Assembly_Tester_TesterClassifierBehavior_this_result_LiteralInteger59 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_Assembly_Tester_TesterClassifierBehavior_this_result_LiteralUnlimitedNatural60 = nullptr;
					ObjectFlowPtr Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow61 = nullptr;
						LiteralIntegerPtr Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow61_LiteralInteger62 = nullptr;
						LiteralBooleanPtr Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow61_LiteralBoolean63 = nullptr;
					ControlFlowPtr Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow64 = nullptr;
				PortPtr Signal_Assembly_Tester_q = nullptr;
				OperationPtr Signal_Assembly_Tester_Tester_Tester = nullptr;
					ParameterPtr Signal_Assembly_Tester_Tester_Tester_result = nullptr;
				ReceptionPtr Signal_Assembly_Tester_Start = nullptr;
			SignalPtr Signal_Assembly_Start = nullptr;
				PropertyPtr Signal_Assembly_Start_testCase = nullptr;
			Class_Ptr Signal_Assembly_TestCaseAssembly = nullptr;
				PropertyPtr Signal_Assembly_TestCaseAssembly_tester = nullptr;
				OperationPtr Signal_Assembly_TestCaseAssembly_TestCaseAssembly_TestCaseAssembly = nullptr;
					ParameterPtr Signal_Assembly_TestCaseAssembly_TestCaseAssembly_TestCaseAssembly_result = nullptr;
				OperationPtr Signal_Assembly_TestCaseAssembly_test = nullptr;
				ConnectorPtr Signal_Assembly_TestCaseAssembly_r = nullptr;
					ConnectorEndPtr Signal_Assembly_TestCaseAssembly_r_ConnectorEnd65 = nullptr;
					ConnectorEndPtr Signal_Assembly_TestCaseAssembly_r_ConnectorEnd66 = nullptr;
				GeneralizationPtr Signal_Assembly_TestCaseAssembly_Generalization67 = nullptr;
				ActivityPtr Signal_Assembly_TestCaseAssembly_testActivity = nullptr;
					ObjectFlowPtr Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow68 = nullptr;
						LiteralBooleanPtr Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow68_LiteralBoolean69 = nullptr;
						LiteralIntegerPtr Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow68_LiteralInteger70 = nullptr;
					ObjectFlowPtr Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow71 = nullptr;
						LiteralBooleanPtr Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow71_LiteralBoolean72 = nullptr;
						LiteralIntegerPtr Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow71_LiteralInteger73 = nullptr;
					CallBehaviorActionPtr Signal_Assembly_TestCaseAssembly_testActivity_Call_testV = nullptr;
						InputPinPtr Signal_Assembly_TestCaseAssembly_testActivity_Call_testV_v = nullptr;
							LiteralIntegerPtr Signal_Assembly_TestCaseAssembly_testActivity_Call_testV_v_LiteralInteger74 = nullptr;
							LiteralIntegerPtr Signal_Assembly_TestCaseAssembly_testActivity_Call_testV_v_LiteralInteger75 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_Assembly_TestCaseAssembly_testActivity_Call_testV_v_LiteralUnlimitedNatural76 = nullptr;
					OpaqueBehaviorPtr Signal_Assembly_TestCaseAssembly_testActivity_testV = nullptr;
						ParameterPtr Signal_Assembly_TestCaseAssembly_testActivity_testV_v = nullptr;
					ObjectFlowPtr Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow77 = nullptr;
						LiteralBooleanPtr Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow77_LiteralBoolean78 = nullptr;
						LiteralIntegerPtr Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow77_LiteralInteger79 = nullptr;
					ReadStructuralFeatureActionPtr Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v = nullptr;
						InputPinPtr Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_object = nullptr;
							LiteralIntegerPtr Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_object_LiteralInteger80 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_object_LiteralUnlimitedNatural81 = nullptr;
						OutputPinPtr Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_result = nullptr;
							LiteralIntegerPtr Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_result_LiteralInteger82 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_result_LiteralUnlimitedNatural83 = nullptr;
					ReadStructuralFeatureActionPtr Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a = nullptr;
						OutputPinPtr Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_result = nullptr;
							LiteralUnlimitedNaturalPtr Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_result_LiteralUnlimitedNatural84 = nullptr;
							LiteralIntegerPtr Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_result_LiteralInteger85 = nullptr;
						InputPinPtr Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_object = nullptr;
							LiteralUnlimitedNaturalPtr Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_object_LiteralUnlimitedNatural86 = nullptr;
							LiteralIntegerPtr Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_object_LiteralInteger87 = nullptr;
					ReadSelfActionPtr Signal_Assembly_TestCaseAssembly_testActivity_this = nullptr;
						OutputPinPtr Signal_Assembly_TestCaseAssembly_testActivity_this_result = nullptr;
							LiteralUnlimitedNaturalPtr Signal_Assembly_TestCaseAssembly_testActivity_this_result_LiteralUnlimitedNatural88 = nullptr;
							LiteralIntegerPtr Signal_Assembly_TestCaseAssembly_testActivity_this_result_LiteralInteger89 = nullptr;
				PropertyPtr Signal_Assembly_TestCaseAssembly_a = nullptr;
			Class_Ptr Signal_Assembly_A = nullptr;
				ActivityPtr Signal_Assembly_A_AClassifierBehavior = nullptr;
					AddStructuralFeatureValueActionPtr Signal_Assembly_A_AClassifierBehavior_Set_v = nullptr;
						InputPinPtr Signal_Assembly_A_AClassifierBehavior_Set_v_value = nullptr;
							LiteralUnlimitedNaturalPtr Signal_Assembly_A_AClassifierBehavior_Set_v_value_LiteralUnlimitedNatural90 = nullptr;
							LiteralIntegerPtr Signal_Assembly_A_AClassifierBehavior_Set_v_value_LiteralInteger91 = nullptr;
						InputPinPtr Signal_Assembly_A_AClassifierBehavior_Set_v_object = nullptr;
							LiteralUnlimitedNaturalPtr Signal_Assembly_A_AClassifierBehavior_Set_v_object_LiteralUnlimitedNatural92 = nullptr;
							LiteralIntegerPtr Signal_Assembly_A_AClassifierBehavior_Set_v_object_LiteralInteger93 = nullptr;
						OutputPinPtr Signal_Assembly_A_AClassifierBehavior_Set_v_result = nullptr;
							LiteralUnlimitedNaturalPtr Signal_Assembly_A_AClassifierBehavior_Set_v_result_LiteralUnlimitedNatural94 = nullptr;
							LiteralIntegerPtr Signal_Assembly_A_AClassifierBehavior_Set_v_result_LiteralInteger95 = nullptr;
					SendSignalActionPtr Signal_Assembly_A_AClassifierBehavior_Send_Continue = nullptr;
						InputPinPtr Signal_Assembly_A_AClassifierBehavior_Send_Continue_target = nullptr;
							LiteralIntegerPtr Signal_Assembly_A_AClassifierBehavior_Send_Continue_target_LiteralInteger96 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_Assembly_A_AClassifierBehavior_Send_Continue_target_LiteralUnlimitedNatural97 = nullptr;
					ObjectFlowPtr Signal_Assembly_A_AClassifierBehavior_ObjectFlow98 = nullptr;
						LiteralBooleanPtr Signal_Assembly_A_AClassifierBehavior_ObjectFlow98_LiteralBoolean99 = nullptr;
						LiteralIntegerPtr Signal_Assembly_A_AClassifierBehavior_ObjectFlow98_LiteralInteger100 = nullptr;
					ReadSelfActionPtr Signal_Assembly_A_AClassifierBehavior_this = nullptr;
						OutputPinPtr Signal_Assembly_A_AClassifierBehavior_this_result = nullptr;
							LiteralIntegerPtr Signal_Assembly_A_AClassifierBehavior_this_result_LiteralInteger101 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_Assembly_A_AClassifierBehavior_this_result_LiteralUnlimitedNatural102 = nullptr;
					ObjectFlowPtr Signal_Assembly_A_AClassifierBehavior_ObjectFlow103 = nullptr;
						LiteralBooleanPtr Signal_Assembly_A_AClassifierBehavior_ObjectFlow103_LiteralBoolean104 = nullptr;
						LiteralIntegerPtr Signal_Assembly_A_AClassifierBehavior_ObjectFlow103_LiteralInteger105 = nullptr;
					ControlFlowPtr Signal_Assembly_A_AClassifierBehavior_ControlFlow106 = nullptr;
					ActivityFinalNodePtr Signal_Assembly_A_AClassifierBehavior_ActivityFinalNode107 = nullptr;
					ObjectFlowPtr Signal_Assembly_A_AClassifierBehavior_ObjectFlow108 = nullptr;
						LiteralBooleanPtr Signal_Assembly_A_AClassifierBehavior_ObjectFlow108_LiteralBoolean109 = nullptr;
						LiteralIntegerPtr Signal_Assembly_A_AClassifierBehavior_ObjectFlow108_LiteralInteger110 = nullptr;
					ControlFlowPtr Signal_Assembly_A_AClassifierBehavior_ControlFlow111 = nullptr;
					AcceptEventActionPtr Signal_Assembly_A_AClassifierBehavior_Accept_S = nullptr;
						TriggerPtr Signal_Assembly_A_AClassifierBehavior_Accept_S_Trigger112 = nullptr;
						OutputPinPtr Signal_Assembly_A_AClassifierBehavior_Accept_S_value = nullptr;
							LiteralIntegerPtr Signal_Assembly_A_AClassifierBehavior_Accept_S_value_LiteralInteger113 = nullptr;
							LiteralIntegerPtr Signal_Assembly_A_AClassifierBehavior_Accept_S_value_LiteralInteger114 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_Assembly_A_AClassifierBehavior_Accept_S_value_LiteralUnlimitedNatural115 = nullptr;
				OperationPtr Signal_Assembly_A_A_A = nullptr;
					ParameterPtr Signal_Assembly_A_A_A_result = nullptr;
				PropertyPtr Signal_Assembly_A_v = nullptr;
				PortPtr Signal_Assembly_A_p = nullptr;
			SignalEventPtr Signal_Assembly_StartEvent = nullptr;

		public:
			virtual ~Signal_AssemblyModel();
			static const std::shared_ptr<Signal_AssemblyModel>& Instance();

		private:
			Signal_AssemblyModel();
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

#endif /* SIGNAL_ASSEMBLY_MODEL_H */
