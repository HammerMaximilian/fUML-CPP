/*
 * Signal_AssemblyAndDelegationModel.h
 * 
 * Auto-generated file
 */

#ifndef SIGNAL_ASSEMBLYANDDELEGATION_MODEL_H
#define SIGNAL_ASSEMBLYANDDELEGATION_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace Signal_AssemblyAndDelegation
{
	class Signal_AssemblyAndDelegationModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model Signal_AssemblyAndDelegation
		 */
		PackagePtr Signal_AssemblyAndDelegation = nullptr;
			ActivityPtr Signal_AssemblyAndDelegation_main = nullptr;
				SendSignalActionPtr Signal_AssemblyAndDelegation_main_Send_Start = nullptr;
					InputPinPtr Signal_AssemblyAndDelegation_main_Send_Start_testCase = nullptr;
						LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_main_Send_Start_testCase_LiteralUnlimitedNatural0 = nullptr;
						LiteralIntegerPtr Signal_AssemblyAndDelegation_main_Send_Start_testCase_LiteralInteger1 = nullptr;
						LiteralIntegerPtr Signal_AssemblyAndDelegation_main_Send_Start_testCase_LiteralInteger2 = nullptr;
					InputPinPtr Signal_AssemblyAndDelegation_main_Send_Start_target = nullptr;
						LiteralIntegerPtr Signal_AssemblyAndDelegation_main_Send_Start_target_LiteralInteger3 = nullptr;
						LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_main_Send_Start_target_LiteralUnlimitedNatural4 = nullptr;
				CallOperationActionPtr Signal_AssemblyAndDelegation_main_TestCaseAssembly_ = nullptr;
					InputPinPtr Signal_AssemblyAndDelegation_main_TestCaseAssembly__target = nullptr;
						LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_main_TestCaseAssembly__target_LiteralUnlimitedNatural5 = nullptr;
						LiteralIntegerPtr Signal_AssemblyAndDelegation_main_TestCaseAssembly__target_LiteralInteger6 = nullptr;
					OutputPinPtr Signal_AssemblyAndDelegation_main_TestCaseAssembly__result = nullptr;
						LiteralIntegerPtr Signal_AssemblyAndDelegation_main_TestCaseAssembly__result_LiteralInteger7 = nullptr;
						LiteralIntegerPtr Signal_AssemblyAndDelegation_main_TestCaseAssembly__result_LiteralInteger8 = nullptr;
						LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_main_TestCaseAssembly__result_LiteralUnlimitedNatural9 = nullptr;
				CreateObjectActionPtr Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly = nullptr;
					OutputPinPtr Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly_result = nullptr;
						LiteralIntegerPtr Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly_result_LiteralInteger10 = nullptr;
						LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly_result_LiteralUnlimitedNatural11 = nullptr;
				ObjectFlowPtr Signal_AssemblyAndDelegation_main_ObjectFlow12 = nullptr;
					LiteralIntegerPtr Signal_AssemblyAndDelegation_main_ObjectFlow12_LiteralInteger13 = nullptr;
					LiteralBooleanPtr Signal_AssemblyAndDelegation_main_ObjectFlow12_LiteralBoolean14 = nullptr;
				ObjectFlowPtr Signal_AssemblyAndDelegation_main_ObjectFlow15 = nullptr;
					LiteralIntegerPtr Signal_AssemblyAndDelegation_main_ObjectFlow15_LiteralInteger16 = nullptr;
					LiteralBooleanPtr Signal_AssemblyAndDelegation_main_ObjectFlow15_LiteralBoolean17 = nullptr;
				ObjectFlowPtr Signal_AssemblyAndDelegation_main_ObjectFlow18 = nullptr;
					LiteralIntegerPtr Signal_AssemblyAndDelegation_main_ObjectFlow18_LiteralInteger19 = nullptr;
					LiteralBooleanPtr Signal_AssemblyAndDelegation_main_ObjectFlow18_LiteralBoolean20 = nullptr;
				ForkNodePtr Signal_AssemblyAndDelegation_main_Fork_testCase = nullptr;
				ObjectFlowPtr Signal_AssemblyAndDelegation_main_ObjectFlow21 = nullptr;
					LiteralBooleanPtr Signal_AssemblyAndDelegation_main_ObjectFlow21_LiteralBoolean22 = nullptr;
					LiteralIntegerPtr Signal_AssemblyAndDelegation_main_ObjectFlow21_LiteralInteger23 = nullptr;
				ObjectFlowPtr Signal_AssemblyAndDelegation_main_ObjectFlow24 = nullptr;
					LiteralIntegerPtr Signal_AssemblyAndDelegation_main_ObjectFlow24_LiteralInteger25 = nullptr;
					LiteralBooleanPtr Signal_AssemblyAndDelegation_main_ObjectFlow24_LiteralBoolean26 = nullptr;
				ObjectFlowPtr Signal_AssemblyAndDelegation_main_ObjectFlow27 = nullptr;
					LiteralIntegerPtr Signal_AssemblyAndDelegation_main_ObjectFlow27_LiteralInteger28 = nullptr;
					LiteralBooleanPtr Signal_AssemblyAndDelegation_main_ObjectFlow27_LiteralBoolean29 = nullptr;
				ReadStructuralFeatureActionPtr Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c = nullptr;
					InputPinPtr Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_object = nullptr;
						LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_object_LiteralUnlimitedNatural30 = nullptr;
						LiteralIntegerPtr Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_object_LiteralInteger31 = nullptr;
					OutputPinPtr Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_result = nullptr;
						LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_result_LiteralUnlimitedNatural32 = nullptr;
						LiteralIntegerPtr Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_result_LiteralInteger33 = nullptr;
				ReadStructuralFeatureActionPtr Signal_AssemblyAndDelegation_main_Read_c_tester = nullptr;
					InputPinPtr Signal_AssemblyAndDelegation_main_Read_c_tester_object = nullptr;
						LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_main_Read_c_tester_object_LiteralUnlimitedNatural34 = nullptr;
						LiteralIntegerPtr Signal_AssemblyAndDelegation_main_Read_c_tester_object_LiteralInteger35 = nullptr;
					OutputPinPtr Signal_AssemblyAndDelegation_main_Read_c_tester_result = nullptr;
						LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_main_Read_c_tester_result_LiteralUnlimitedNatural36 = nullptr;
						LiteralIntegerPtr Signal_AssemblyAndDelegation_main_Read_c_tester_result_LiteralInteger37 = nullptr;
			SignalEventPtr Signal_AssemblyAndDelegation_StartEvent = nullptr;
			Class_Ptr Signal_AssemblyAndDelegation_B = nullptr;
				ConnectorPtr Signal_AssemblyAndDelegation_B_r = nullptr;
					ConnectorEndPtr Signal_AssemblyAndDelegation_B_r_ConnectorEnd38 = nullptr;
					ConnectorEndPtr Signal_AssemblyAndDelegation_B_r_ConnectorEnd39 = nullptr;
				PropertyPtr Signal_AssemblyAndDelegation_B_a = nullptr;
				PortPtr Signal_AssemblyAndDelegation_B_p = nullptr;
			Class_Ptr Signal_AssemblyAndDelegation_I = nullptr;
			SignalEventPtr Signal_AssemblyAndDelegation_SEvent = nullptr;
			SignalPtr Signal_AssemblyAndDelegation_S = nullptr;
				PropertyPtr Signal_AssemblyAndDelegation_S_value = nullptr;
			Class_Ptr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation = nullptr;
				PropertyPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_b = nullptr;
				PropertyPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_c = nullptr;
				OperationPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation = nullptr;
					ParameterPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_result = nullptr;
				ConnectorPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_r = nullptr;
					ConnectorEndPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_r_ConnectorEnd40 = nullptr;
					ConnectorEndPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_r_ConnectorEnd41 = nullptr;
				ActivityPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity = nullptr;
					ReadStructuralFeatureActionPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a = nullptr;
						OutputPinPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_result = nullptr;
							LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_result_LiteralUnlimitedNatural42 = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_result_LiteralInteger43 = nullptr;
						InputPinPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_object = nullptr;
							LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_object_LiteralUnlimitedNatural44 = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_object_LiteralInteger45 = nullptr;
					OpaqueBehaviorPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV = nullptr;
						ParameterPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV_v = nullptr;
					ObjectFlowPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow46 = nullptr;
						LiteralIntegerPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow46_LiteralInteger47 = nullptr;
						LiteralBooleanPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow46_LiteralBoolean48 = nullptr;
					CallBehaviorActionPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV = nullptr;
						InputPinPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV_v = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV_v_LiteralInteger49 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV_v_LiteralUnlimitedNatural50 = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV_v_LiteralInteger51 = nullptr;
					ObjectFlowPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow52 = nullptr;
						LiteralIntegerPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow52_LiteralInteger53 = nullptr;
						LiteralBooleanPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow52_LiteralBoolean54 = nullptr;
					ReadSelfActionPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this = nullptr;
						OutputPinPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this_result = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this_result_LiteralInteger55 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this_result_LiteralUnlimitedNatural56 = nullptr;
					ReadStructuralFeatureActionPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v = nullptr;
						OutputPinPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_result = nullptr;
							LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_result_LiteralUnlimitedNatural57 = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_result_LiteralInteger58 = nullptr;
						InputPinPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_object = nullptr;
							LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_object_LiteralUnlimitedNatural59 = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_object_LiteralInteger60 = nullptr;
					ObjectFlowPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow61 = nullptr;
						LiteralIntegerPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow61_LiteralInteger62 = nullptr;
						LiteralBooleanPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow61_LiteralBoolean63 = nullptr;
					ObjectFlowPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow64 = nullptr;
						LiteralIntegerPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow64_LiteralInteger65 = nullptr;
						LiteralBooleanPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow64_LiteralBoolean66 = nullptr;
					ReadStructuralFeatureActionPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b = nullptr;
						InputPinPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_object = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_object_LiteralInteger67 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_object_LiteralUnlimitedNatural68 = nullptr;
						OutputPinPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_result = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_result_LiteralInteger69 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_result_LiteralUnlimitedNatural70 = nullptr;
				GeneralizationPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_Generalization71 = nullptr;
				OperationPtr Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_test = nullptr;
			Class_Ptr Signal_AssemblyAndDelegation_A = nullptr;
				PortPtr Signal_AssemblyAndDelegation_A_p = nullptr;
				OperationPtr Signal_AssemblyAndDelegation_A_A_A = nullptr;
					ParameterPtr Signal_AssemblyAndDelegation_A_A_A_result = nullptr;
				PropertyPtr Signal_AssemblyAndDelegation_A_v = nullptr;
				ActivityPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior = nullptr;
					ControlFlowPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_ControlFlow72 = nullptr;
					ReadSelfActionPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_this = nullptr;
						OutputPinPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_this_result = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_this_result_LiteralInteger73 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_this_result_LiteralUnlimitedNatural74 = nullptr;
					ObjectFlowPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow75 = nullptr;
						LiteralIntegerPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow75_LiteralInteger76 = nullptr;
						LiteralBooleanPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow75_LiteralBoolean77 = nullptr;
					SendSignalActionPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue = nullptr;
						InputPinPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue_target = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue_target_LiteralInteger78 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue_target_LiteralUnlimitedNatural79 = nullptr;
					ActivityFinalNodePtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_ActivityFinalNode80 = nullptr;
					ObjectFlowPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow81 = nullptr;
						LiteralIntegerPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow81_LiteralInteger82 = nullptr;
						LiteralBooleanPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow81_LiteralBoolean83 = nullptr;
					ControlFlowPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_ControlFlow84 = nullptr;
					AcceptEventActionPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S = nullptr;
						OutputPinPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_value = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_value_LiteralInteger85 = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_value_LiteralInteger86 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_value_LiteralUnlimitedNatural87 = nullptr;
						TriggerPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_Trigger88 = nullptr;
					ObjectFlowPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow89 = nullptr;
						LiteralBooleanPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow89_LiteralBoolean90 = nullptr;
						LiteralIntegerPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow89_LiteralInteger91 = nullptr;
					AddStructuralFeatureValueActionPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v = nullptr;
						InputPinPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_object = nullptr;
							LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_object_LiteralUnlimitedNatural92 = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_object_LiteralInteger93 = nullptr;
						InputPinPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_value = nullptr;
							LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_value_LiteralUnlimitedNatural94 = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_value_LiteralInteger95 = nullptr;
						OutputPinPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_result = nullptr;
							LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_result_LiteralUnlimitedNatural96 = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_result_LiteralInteger97 = nullptr;
			SignalPtr Signal_AssemblyAndDelegation_Continue = nullptr;
			SignalEventPtr Signal_AssemblyAndDelegation_ContinueEvent = nullptr;
			Class_Ptr Signal_AssemblyAndDelegation_C = nullptr;
				PortPtr Signal_AssemblyAndDelegation_C_q = nullptr;
				PropertyPtr Signal_AssemblyAndDelegation_C_tester = nullptr;
				ConnectorPtr Signal_AssemblyAndDelegation_C_r = nullptr;
					ConnectorEndPtr Signal_AssemblyAndDelegation_C_r_ConnectorEnd98 = nullptr;
					ConnectorEndPtr Signal_AssemblyAndDelegation_C_r_ConnectorEnd99 = nullptr;
			Class_Ptr Signal_AssemblyAndDelegation_TestCase = nullptr;
				OperationPtr Signal_AssemblyAndDelegation_TestCase_test = nullptr;
			AssociationPtr Signal_AssemblyAndDelegation_R = nullptr;
				PropertyPtr Signal_AssemblyAndDelegation_R_x = nullptr;
				PropertyPtr Signal_AssemblyAndDelegation_R_y = nullptr;
			SignalPtr Signal_AssemblyAndDelegation_Start = nullptr;
				PropertyPtr Signal_AssemblyAndDelegation_Start_testCase = nullptr;
			Class_Ptr Signal_AssemblyAndDelegation_Tester = nullptr;
				ReceptionPtr Signal_AssemblyAndDelegation_Tester_Start = nullptr;
				PortPtr Signal_AssemblyAndDelegation_Tester_q = nullptr;
				ActivityPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior = nullptr;
					ControlFlowPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow100 = nullptr;
					ControlFlowPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow101 = nullptr;
					ValueSpecificationActionPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4 = nullptr;
						OutputPinPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_result = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_result_LiteralInteger102 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_result_LiteralUnlimitedNatural103 = nullptr;
						LiteralIntegerPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_LiteralInteger104 = nullptr;
					AcceptEventActionPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue = nullptr;
						TriggerPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_Trigger105 = nullptr;
						OutputPinPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_result = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger106 = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger107 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralUnlimitedNatural108 = nullptr;
					ObjectFlowPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow109 = nullptr;
						LiteralBooleanPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow109_LiteralBoolean110 = nullptr;
						LiteralIntegerPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow109_LiteralInteger111 = nullptr;
					ControlFlowPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow112 = nullptr;
					CallOperationActionPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test_ = nullptr;
						InputPinPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test__target = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test__target_LiteralInteger113 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test__target_LiteralUnlimitedNatural114 = nullptr;
					ControlFlowPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow115 = nullptr;
					ObjectFlowPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow116 = nullptr;
						LiteralIntegerPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow116_LiteralInteger117 = nullptr;
						LiteralBooleanPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow116_LiteralBoolean118 = nullptr;
					ActivityFinalNodePtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ActivityFinalNode119 = nullptr;
					AcceptEventActionPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start = nullptr;
						TriggerPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_Trigger120 = nullptr;
						OutputPinPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_testCase = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralInteger121 = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralInteger122 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralUnlimitedNatural123 = nullptr;
					SendSignalActionPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S = nullptr;
						InputPinPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_target = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_target_LiteralInteger124 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_target_LiteralUnlimitedNatural125 = nullptr;
						InputPinPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_value = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_value_LiteralInteger126 = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_value_LiteralInteger127 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_value_LiteralUnlimitedNatural128 = nullptr;
					ObjectFlowPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow129 = nullptr;
						LiteralBooleanPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow129_LiteralBoolean130 = nullptr;
						LiteralIntegerPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow129_LiteralInteger131 = nullptr;
					ReadSelfActionPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this = nullptr;
						OutputPinPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this_result = nullptr;
							LiteralIntegerPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this_result_LiteralInteger132 = nullptr;
							LiteralUnlimitedNaturalPtr Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this_result_LiteralUnlimitedNatural133 = nullptr;
				OperationPtr Signal_AssemblyAndDelegation_Tester_Tester_Tester = nullptr;
					ParameterPtr Signal_AssemblyAndDelegation_Tester_Tester_Tester_result = nullptr;

		public:
			virtual ~Signal_AssemblyAndDelegationModel();
			static const std::shared_ptr<Signal_AssemblyAndDelegationModel>& Instance();

		private:
			Signal_AssemblyAndDelegationModel();
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

#endif /* SIGNAL_ASSEMBLYANDDELEGATION_MODEL_H */
