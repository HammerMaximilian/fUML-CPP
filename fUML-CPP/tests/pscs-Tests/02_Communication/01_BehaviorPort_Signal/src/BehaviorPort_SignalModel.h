/*
 * BehaviorPort_SignalModel.h
 * 
 * Auto-generated file
 */

#ifndef BEHAVIORPORT_SIGNAL_MODEL_H
#define BEHAVIORPORT_SIGNAL_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace BehaviorPort_Signal
{
	class BehaviorPort_SignalModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model BehaviorPort_Signal
		 */
		PackagePtr BehaviorPort_Signal = nullptr;
			SignalEventPtr BehaviorPort_Signal_SignalEventStart = nullptr;
			Class_Ptr BehaviorPort_Signal_Tester = nullptr;
				ActivityPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior = nullptr;
					ObjectFlowPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow0 = nullptr;
						LiteralIntegerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow0_LiteralInteger1 = nullptr;
						LiteralBooleanPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow0_LiteralBoolean2 = nullptr;
					SendSignalActionPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S = nullptr;
						InputPinPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_v = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_v_LiteralUnlimitedNatural3 = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_v_LiteralInteger4 = nullptr;
						InputPinPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_t = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_t_LiteralInteger5 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_t_LiteralUnlimitedNatural6 = nullptr;
						InputPinPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_target = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_target_LiteralUnlimitedNatural7 = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_target_LiteralInteger8 = nullptr;
					CallOperationActionPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test_ = nullptr;
						InputPinPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test__target = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralInteger9 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralUnlimitedNatural10 = nullptr;
					ForkNodePtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Fork_this = nullptr;
					ObjectFlowPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow11 = nullptr;
						LiteralIntegerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow11_LiteralInteger12 = nullptr;
						LiteralBooleanPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow11_LiteralBoolean13 = nullptr;
					ObjectFlowPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow14 = nullptr;
						LiteralBooleanPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow14_LiteralBoolean15 = nullptr;
						LiteralIntegerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow14_LiteralInteger16 = nullptr;
					ControlFlowPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow17 = nullptr;
					ReadStructuralFeatureActionPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q = nullptr;
						OutputPinPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_result = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_result_LiteralUnlimitedNatural18 = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_result_LiteralInteger19 = nullptr;
						InputPinPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_object = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_object_LiteralUnlimitedNatural20 = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_object_LiteralInteger21 = nullptr;
					ControlFlowPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow22 = nullptr;
					ReadStructuralFeatureActionPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a = nullptr;
						OutputPinPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_result = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_result_LiteralUnlimitedNatural23 = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_result_LiteralInteger24 = nullptr;
						InputPinPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_object = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_object_LiteralInteger25 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_object_LiteralUnlimitedNatural26 = nullptr;
					ObjectFlowPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow27 = nullptr;
						LiteralIntegerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow27_LiteralInteger28 = nullptr;
						LiteralBooleanPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow27_LiteralBoolean29 = nullptr;
					ObjectFlowPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow30 = nullptr;
						LiteralBooleanPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow30_LiteralBoolean31 = nullptr;
						LiteralIntegerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow30_LiteralInteger32 = nullptr;
					ObjectFlowPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow33 = nullptr;
						LiteralBooleanPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralBoolean34 = nullptr;
						LiteralIntegerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralInteger35 = nullptr;
					ObjectFlowPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow36 = nullptr;
						LiteralIntegerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow36_LiteralInteger37 = nullptr;
						LiteralBooleanPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow36_LiteralBoolean38 = nullptr;
					AcceptEventActionPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start = nullptr;
						OutputPinPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_result = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger39 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralUnlimitedNatural40 = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger41 = nullptr;
						TriggerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger42 = nullptr;
					InitialNodePtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Initial = nullptr;
					ReadSelfActionPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_this = nullptr;
						OutputPinPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_this_result = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_this_result_LiteralUnlimitedNatural43 = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_this_result_LiteralInteger44 = nullptr;
					ControlFlowPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow45 = nullptr;
					ValueSpecificationActionPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4 = nullptr;
						LiteralIntegerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger46 = nullptr;
						OutputPinPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_result = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_result_LiteralInteger47 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_result_LiteralUnlimitedNatural48 = nullptr;
					AcceptEventActionPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue = nullptr;
						OutputPinPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger49 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralUnlimitedNatural50 = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger51 = nullptr;
						TriggerPtr BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_Trigger52 = nullptr;
				OperationPtr BehaviorPort_Signal_Tester_Tester_Tester = nullptr;
					ParameterPtr BehaviorPort_Signal_Tester_Tester_Tester_result = nullptr;
				PropertyPtr BehaviorPort_Signal_Tester_a = nullptr;
				OperationPtr BehaviorPort_Signal_Tester_test = nullptr;
				GeneralizationPtr BehaviorPort_Signal_Tester_Generalization53 = nullptr;
				ActivityPtr BehaviorPort_Signal_Tester_testActivity = nullptr;
					CallBehaviorActionPtr BehaviorPort_Signal_Tester_testActivity_Call_testP = nullptr;
						InputPinPtr BehaviorPort_Signal_Tester_testActivity_Call_testP_p = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_Tester_testActivity_Call_testP_p_LiteralUnlimitedNatural54 = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_Tester_testActivity_Call_testP_p_LiteralInteger55 = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_Tester_testActivity_Call_testP_p_LiteralInteger56 = nullptr;
					ReadStructuralFeatureActionPtr BehaviorPort_Signal_Tester_testActivity_this_a = nullptr;
						InputPinPtr BehaviorPort_Signal_Tester_testActivity_this_a_object = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_Tester_testActivity_this_a_object_LiteralUnlimitedNatural57 = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_Tester_testActivity_this_a_object_LiteralInteger58 = nullptr;
						OutputPinPtr BehaviorPort_Signal_Tester_testActivity_this_a_result = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_Tester_testActivity_this_a_result_LiteralInteger59 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_Tester_testActivity_this_a_result_LiteralUnlimitedNatural60 = nullptr;
					ObjectFlowPtr BehaviorPort_Signal_Tester_testActivity_ObjectFlow61 = nullptr;
						LiteralBooleanPtr BehaviorPort_Signal_Tester_testActivity_ObjectFlow61_LiteralBoolean62 = nullptr;
						LiteralIntegerPtr BehaviorPort_Signal_Tester_testActivity_ObjectFlow61_LiteralInteger63 = nullptr;
					ObjectFlowPtr BehaviorPort_Signal_Tester_testActivity_ObjectFlow64 = nullptr;
						LiteralBooleanPtr BehaviorPort_Signal_Tester_testActivity_ObjectFlow64_LiteralBoolean65 = nullptr;
						LiteralIntegerPtr BehaviorPort_Signal_Tester_testActivity_ObjectFlow64_LiteralInteger66 = nullptr;
					ObjectFlowPtr BehaviorPort_Signal_Tester_testActivity_ObjectFlow67 = nullptr;
						LiteralBooleanPtr BehaviorPort_Signal_Tester_testActivity_ObjectFlow67_LiteralBoolean68 = nullptr;
						LiteralIntegerPtr BehaviorPort_Signal_Tester_testActivity_ObjectFlow67_LiteralInteger69 = nullptr;
					ReadSelfActionPtr BehaviorPort_Signal_Tester_testActivity_this = nullptr;
						OutputPinPtr BehaviorPort_Signal_Tester_testActivity_this_result = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_Tester_testActivity_this_result_LiteralInteger70 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_Tester_testActivity_this_result_LiteralUnlimitedNatural71 = nullptr;
					ReadStructuralFeatureActionPtr BehaviorPort_Signal_Tester_testActivity_this_a_p = nullptr;
						InputPinPtr BehaviorPort_Signal_Tester_testActivity_this_a_p_object = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_Tester_testActivity_this_a_p_object_LiteralUnlimitedNatural72 = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_Tester_testActivity_this_a_p_object_LiteralInteger73 = nullptr;
						OutputPinPtr BehaviorPort_Signal_Tester_testActivity_this_a_p_result = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_Tester_testActivity_this_a_p_result_LiteralInteger74 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_Tester_testActivity_this_a_p_result_LiteralUnlimitedNatural75 = nullptr;
					OpaqueBehaviorPtr BehaviorPort_Signal_Tester_testActivity_testP = nullptr;
						ParameterPtr BehaviorPort_Signal_Tester_testActivity_testP_p = nullptr;
			SignalPtr BehaviorPort_Signal_S = nullptr;
				PropertyPtr BehaviorPort_Signal_S_v = nullptr;
				PropertyPtr BehaviorPort_Signal_S_t = nullptr;
			Class_Ptr BehaviorPort_Signal_AbstractTester = nullptr;
				ReceptionPtr BehaviorPort_Signal_AbstractTester_Continue = nullptr;
				ReceptionPtr BehaviorPort_Signal_AbstractTester_Start = nullptr;
				OperationPtr BehaviorPort_Signal_AbstractTester_test = nullptr;
			InterfacePtr BehaviorPort_Signal_I = nullptr;
				ReceptionPtr BehaviorPort_Signal_I_S = nullptr;
			Class_Ptr BehaviorPort_Signal_A = nullptr;
				ActivityPtr BehaviorPort_Signal_A_AClassifierBehavior = nullptr;
					ReadSelfActionPtr BehaviorPort_Signal_A_AClassifierBehavior_this = nullptr;
						OutputPinPtr BehaviorPort_Signal_A_AClassifierBehavior_this_result = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_A_AClassifierBehavior_this_result_LiteralUnlimitedNatural76 = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_A_AClassifierBehavior_this_result_LiteralInteger77 = nullptr;
					ObjectFlowPtr BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow78 = nullptr;
						LiteralBooleanPtr BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow78_LiteralBoolean79 = nullptr;
						LiteralIntegerPtr BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow78_LiteralInteger80 = nullptr;
					ReadStructuralFeatureActionPtr BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v = nullptr;
						OutputPinPtr BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_result = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_result_LiteralUnlimitedNatural81 = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_result_LiteralInteger82 = nullptr;
						InputPinPtr BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_object = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_object_LiteralUnlimitedNatural83 = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_object_LiteralInteger84 = nullptr;
					ObjectFlowPtr BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow85 = nullptr;
						LiteralIntegerPtr BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow85_LiteralInteger86 = nullptr;
						LiteralBooleanPtr BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow85_LiteralBoolean87 = nullptr;
					InitialNodePtr BehaviorPort_Signal_A_AClassifierBehavior_Initial = nullptr;
					AcceptEventActionPtr BehaviorPort_Signal_A_AClassifierBehavior_Accept_S = nullptr;
						OutputPinPtr BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_result = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_result_LiteralUnlimitedNatural88 = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_result_LiteralInteger89 = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_result_LiteralInteger90 = nullptr;
						TriggerPtr BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_Trigger91 = nullptr;
					SendSignalActionPtr BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue = nullptr;
						InputPinPtr BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue_target = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue_target_LiteralUnlimitedNatural92 = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue_target_LiteralInteger93 = nullptr;
					ReadStructuralFeatureActionPtr BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t = nullptr;
						InputPinPtr BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_object = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_object_LiteralInteger94 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_object_LiteralUnlimitedNatural95 = nullptr;
						OutputPinPtr BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_result = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_result_LiteralUnlimitedNatural96 = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_result_LiteralInteger97 = nullptr;
					ObjectFlowPtr BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow98 = nullptr;
						LiteralBooleanPtr BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow98_LiteralBoolean99 = nullptr;
						LiteralIntegerPtr BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow98_LiteralInteger100 = nullptr;
					ObjectFlowPtr BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow101 = nullptr;
						LiteralIntegerPtr BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow101_LiteralInteger102 = nullptr;
						LiteralBooleanPtr BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow101_LiteralBoolean103 = nullptr;
					ControlFlowPtr BehaviorPort_Signal_A_AClassifierBehavior_ControlFlow104 = nullptr;
					ObjectFlowPtr BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow105 = nullptr;
						LiteralIntegerPtr BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow105_LiteralInteger106 = nullptr;
						LiteralBooleanPtr BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow105_LiteralBoolean107 = nullptr;
					AddStructuralFeatureValueActionPtr BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p = nullptr;
						OutputPinPtr BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_result = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_result_LiteralInteger108 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_result_LiteralUnlimitedNatural109 = nullptr;
						InputPinPtr BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_object = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_object_LiteralUnlimitedNatural110 = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_object_LiteralInteger111 = nullptr;
						InputPinPtr BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_value = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_value_LiteralUnlimitedNatural112 = nullptr;
							LiteralIntegerPtr BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_value_LiteralInteger113 = nullptr;
					ObjectFlowPtr BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow114 = nullptr;
						LiteralIntegerPtr BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow114_LiteralInteger115 = nullptr;
						LiteralBooleanPtr BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow114_LiteralBoolean116 = nullptr;
					ControlFlowPtr BehaviorPort_Signal_A_AClassifierBehavior_ControlFlow117 = nullptr;
					ForkNodePtr BehaviorPort_Signal_A_AClassifierBehavior_Fork_S = nullptr;
				InterfaceRealizationPtr BehaviorPort_Signal_A_IRealization = nullptr;
				ReceptionPtr BehaviorPort_Signal_A_S = nullptr;
				PropertyPtr BehaviorPort_Signal_A_p = nullptr;
				PortPtr BehaviorPort_Signal_A_q = nullptr;
				OperationPtr BehaviorPort_Signal_A_A_A = nullptr;
					ParameterPtr BehaviorPort_Signal_A_A_A_result = nullptr;
			SignalEventPtr BehaviorPort_Signal_SignalEventContinue = nullptr;
			SignalPtr BehaviorPort_Signal_Start = nullptr;
			SignalPtr BehaviorPort_Signal_Continue = nullptr;
			SignalEventPtr BehaviorPort_Signal_SignalEventS = nullptr;
			Class_Ptr BehaviorPort_Signal_IImpl = nullptr;
				InterfaceRealizationPtr BehaviorPort_Signal_IImpl_IRealization = nullptr;
				ReceptionPtr BehaviorPort_Signal_IImpl_S = nullptr;
			ActivityPtr BehaviorPort_Signal_main = nullptr;
				ObjectFlowPtr BehaviorPort_Signal_main_ObjectFlow118 = nullptr;
					LiteralBooleanPtr BehaviorPort_Signal_main_ObjectFlow118_LiteralBoolean119 = nullptr;
					LiteralIntegerPtr BehaviorPort_Signal_main_ObjectFlow118_LiteralInteger120 = nullptr;
				ObjectFlowPtr BehaviorPort_Signal_main_ObjectFlow121 = nullptr;
					LiteralBooleanPtr BehaviorPort_Signal_main_ObjectFlow121_LiteralBoolean122 = nullptr;
					LiteralIntegerPtr BehaviorPort_Signal_main_ObjectFlow121_LiteralInteger123 = nullptr;
				CreateObjectActionPtr BehaviorPort_Signal_main_Create_Tester = nullptr;
					OutputPinPtr BehaviorPort_Signal_main_Create_Tester_result = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Signal_main_Create_Tester_result_LiteralUnlimitedNatural124 = nullptr;
						LiteralIntegerPtr BehaviorPort_Signal_main_Create_Tester_result_LiteralInteger125 = nullptr;
				StartObjectBehaviorActionPtr BehaviorPort_Signal_main_Start_Tester = nullptr;
					InputPinPtr BehaviorPort_Signal_main_Start_Tester_object = nullptr;
						LiteralIntegerPtr BehaviorPort_Signal_main_Start_Tester_object_LiteralInteger126 = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Signal_main_Start_Tester_object_LiteralUnlimitedNatural127 = nullptr;
				ForkNodePtr BehaviorPort_Signal_main_Fork_Tester = nullptr;
				ObjectFlowPtr BehaviorPort_Signal_main_ObjectFlow128 = nullptr;
					LiteralBooleanPtr BehaviorPort_Signal_main_ObjectFlow128_LiteralBoolean129 = nullptr;
					LiteralIntegerPtr BehaviorPort_Signal_main_ObjectFlow128_LiteralInteger130 = nullptr;
				ControlFlowPtr BehaviorPort_Signal_main_ControlFlow131 = nullptr;
				CallOperationActionPtr BehaviorPort_Signal_main_Tester_ = nullptr;
					InputPinPtr BehaviorPort_Signal_main_Tester__target = nullptr;
						LiteralIntegerPtr BehaviorPort_Signal_main_Tester__target_LiteralInteger132 = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Signal_main_Tester__target_LiteralUnlimitedNatural133 = nullptr;
					OutputPinPtr BehaviorPort_Signal_main_Tester__result = nullptr;
						LiteralIntegerPtr BehaviorPort_Signal_main_Tester__result_LiteralInteger134 = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Signal_main_Tester__result_LiteralUnlimitedNatural135 = nullptr;
						LiteralIntegerPtr BehaviorPort_Signal_main_Tester__result_LiteralInteger136 = nullptr;
				SendSignalActionPtr BehaviorPort_Signal_main_Send_Start = nullptr;
					InputPinPtr BehaviorPort_Signal_main_Send_Start_target = nullptr;
						LiteralIntegerPtr BehaviorPort_Signal_main_Send_Start_target_LiteralInteger137 = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Signal_main_Send_Start_target_LiteralUnlimitedNatural138 = nullptr;
				ObjectFlowPtr BehaviorPort_Signal_main_ObjectFlow139 = nullptr;
					LiteralIntegerPtr BehaviorPort_Signal_main_ObjectFlow139_LiteralInteger140 = nullptr;
					LiteralBooleanPtr BehaviorPort_Signal_main_ObjectFlow139_LiteralBoolean141 = nullptr;

		public:
			virtual ~BehaviorPort_SignalModel();
			static const std::shared_ptr<BehaviorPort_SignalModel>& Instance();

		private:
			BehaviorPort_SignalModel();
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

#endif /* BEHAVIORPORT_SIGNAL_MODEL_H */
