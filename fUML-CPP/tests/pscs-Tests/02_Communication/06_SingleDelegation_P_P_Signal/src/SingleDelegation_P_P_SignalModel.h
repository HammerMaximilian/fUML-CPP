/*
 * SingleDelegation_P_P_SignalModel.h
 * 
 * Auto-generated file
 */

#ifndef SINGLEDELEGATION_P_P_SIGNAL_MODEL_H
#define SINGLEDELEGATION_P_P_SIGNAL_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace SingleDelegation_P_P_Signal
{
	class SingleDelegation_P_P_SignalModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model SingleDelegation_P_P_Signal
		 */
		PackagePtr SingleDelegation_P_P_Signal = nullptr;
			SignalPtr SingleDelegation_P_P_Signal_S = nullptr;
				PropertyPtr SingleDelegation_P_P_Signal_S_v = nullptr;
				PropertyPtr SingleDelegation_P_P_Signal_S_t = nullptr;
			SignalEventPtr SingleDelegation_P_P_Signal_SignalEventContinue = nullptr;
			AssociationPtr SingleDelegation_P_P_Signal_R = nullptr;
				PropertyPtr SingleDelegation_P_P_Signal_R_y = nullptr;
				PropertyPtr SingleDelegation_P_P_Signal_R_x = nullptr;
			SignalPtr SingleDelegation_P_P_Signal_Continue = nullptr;
			Class_Ptr SingleDelegation_P_P_Signal_B = nullptr;
				OperationPtr SingleDelegation_P_P_Signal_B_B_B = nullptr;
					ParameterPtr SingleDelegation_P_P_Signal_B_B_B_result = nullptr;
				ActivityPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior = nullptr;
					ObjectFlowPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow0 = nullptr;
						LiteralBooleanPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow0_LiteralBoolean1 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow0_LiteralInteger2 = nullptr;
					ControlFlowPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_ControlFlow3 = nullptr;
					ReadSelfActionPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_this = nullptr;
						OutputPinPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_this_result = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_this_result_LiteralInteger4 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_this_result_LiteralUnlimitedNatural5 = nullptr;
					ObjectFlowPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow6 = nullptr;
						LiteralBooleanPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow6_LiteralBoolean7 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow6_LiteralInteger8 = nullptr;
					ControlFlowPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_ControlFlow9 = nullptr;
					AcceptEventActionPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S = nullptr;
						OutputPinPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_result = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_result_LiteralInteger10 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_result_LiteralUnlimitedNatural11 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_result_LiteralInteger12 = nullptr;
						TriggerPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger13 = nullptr;
					SendSignalActionPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue = nullptr;
						InputPinPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue_target = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue_target_LiteralUnlimitedNatural14 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue_target_LiteralInteger15 = nullptr;
					ReadStructuralFeatureActionPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v = nullptr;
						OutputPinPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_result = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_result_LiteralUnlimitedNatural16 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_result_LiteralInteger17 = nullptr;
						InputPinPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_object = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_object_LiteralInteger18 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_object_LiteralUnlimitedNatural19 = nullptr;
					ObjectFlowPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow20 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow20_LiteralInteger21 = nullptr;
						LiteralBooleanPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow20_LiteralBoolean22 = nullptr;
					ObjectFlowPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow23 = nullptr;
						LiteralBooleanPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow23_LiteralBoolean24 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow23_LiteralInteger25 = nullptr;
					ObjectFlowPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow26 = nullptr;
						LiteralBooleanPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow26_LiteralBoolean27 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow26_LiteralInteger28 = nullptr;
					InitialNodePtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Initial = nullptr;
					ObjectFlowPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow29 = nullptr;
						LiteralBooleanPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow29_LiteralBoolean30 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow29_LiteralInteger31 = nullptr;
					AddStructuralFeatureValueActionPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p = nullptr;
						InputPinPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_object = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_object_LiteralInteger32 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_object_LiteralUnlimitedNatural33 = nullptr;
						OutputPinPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_result = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_result_LiteralUnlimitedNatural34 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_result_LiteralInteger35 = nullptr;
						InputPinPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_value = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_value_LiteralInteger36 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_value_LiteralUnlimitedNatural37 = nullptr;
					ReadStructuralFeatureActionPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t = nullptr;
						InputPinPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_object = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_object_LiteralUnlimitedNatural38 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_object_LiteralInteger39 = nullptr;
						OutputPinPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_result = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_result_LiteralInteger40 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_result_LiteralUnlimitedNatural41 = nullptr;
					ForkNodePtr SingleDelegation_P_P_Signal_B_BClassifierBehavior_Fork_S = nullptr;
				PropertyPtr SingleDelegation_P_P_Signal_B_p = nullptr;
				InterfaceRealizationPtr SingleDelegation_P_P_Signal_B_IRealization = nullptr;
				ReceptionPtr SingleDelegation_P_P_Signal_B_S = nullptr;
			SignalEventPtr SingleDelegation_P_P_Signal_SignalEventS = nullptr;
			Class_Ptr SingleDelegation_P_P_Signal_A = nullptr;
				PropertyPtr SingleDelegation_P_P_Signal_A_b = nullptr;
				ConnectorPtr SingleDelegation_P_P_Signal_A_r = nullptr;
					ConnectorEndPtr SingleDelegation_P_P_Signal_A_r_ConnectorEnd42 = nullptr;
					ConnectorEndPtr SingleDelegation_P_P_Signal_A_r_ConnectorEnd43 = nullptr;
				OperationPtr SingleDelegation_P_P_Signal_A_A_A = nullptr;
					ParameterPtr SingleDelegation_P_P_Signal_A_A_A_result = nullptr;
				PortPtr SingleDelegation_P_P_Signal_A_q = nullptr;
			SignalPtr SingleDelegation_P_P_Signal_Start = nullptr;
			Class_Ptr SingleDelegation_P_P_Signal_IImpl = nullptr;
				ReceptionPtr SingleDelegation_P_P_Signal_IImpl_S = nullptr;
				InterfaceRealizationPtr SingleDelegation_P_P_Signal_IImpl_IRealization = nullptr;
			Class_Ptr SingleDelegation_P_P_Signal_Tester = nullptr;
				ActivityPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior = nullptr;
					ReadSelfActionPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this = nullptr;
						OutputPinPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this_result = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this_result_LiteralInteger44 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this_result_LiteralUnlimitedNatural45 = nullptr;
					ObjectFlowPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow46 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralInteger47 = nullptr;
						LiteralBooleanPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralBoolean48 = nullptr;
					ObjectFlowPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow49 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow49_LiteralInteger50 = nullptr;
						LiteralBooleanPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow49_LiteralBoolean51 = nullptr;
					ObjectFlowPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow52 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow52_LiteralInteger53 = nullptr;
						LiteralBooleanPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow52_LiteralBoolean54 = nullptr;
					AcceptEventActionPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start = nullptr;
						OutputPinPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralUnlimitedNatural55 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger56 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger57 = nullptr;
						TriggerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger58 = nullptr;
					ReadStructuralFeatureActionPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a = nullptr;
						InputPinPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object_LiteralInteger59 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object_LiteralUnlimitedNatural60 = nullptr;
						OutputPinPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result_LiteralUnlimitedNatural61 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result_LiteralInteger62 = nullptr;
					ValueSpecificationActionPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_LiteralInteger63 = nullptr;
						OutputPinPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_result = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_result_LiteralUnlimitedNatural64 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_result_LiteralInteger65 = nullptr;
					AcceptEventActionPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue = nullptr;
						TriggerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_Trigger66 = nullptr;
						OutputPinPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger67 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralUnlimitedNatural68 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger69 = nullptr;
					InitialNodePtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Initial = nullptr;
					SendSignalActionPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S = nullptr;
						InputPinPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_t = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_t_LiteralInteger70 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_t_LiteralUnlimitedNatural71 = nullptr;
						InputPinPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_v = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_v_LiteralInteger72 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_v_LiteralUnlimitedNatural73 = nullptr;
						InputPinPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_target = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_target_LiteralInteger74 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_target_LiteralUnlimitedNatural75 = nullptr;
					ObjectFlowPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow76 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow76_LiteralInteger77 = nullptr;
						LiteralBooleanPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow76_LiteralBoolean78 = nullptr;
					ObjectFlowPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow79 = nullptr;
						LiteralBooleanPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow79_LiteralBoolean80 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow79_LiteralInteger81 = nullptr;
					ObjectFlowPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow82 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow82_LiteralInteger83 = nullptr;
						LiteralBooleanPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow82_LiteralBoolean84 = nullptr;
					ObjectFlowPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow85 = nullptr;
						LiteralBooleanPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow85_LiteralBoolean86 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow85_LiteralInteger87 = nullptr;
					ControlFlowPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow88 = nullptr;
					ControlFlowPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow89 = nullptr;
					ReadStructuralFeatureActionPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q = nullptr;
						OutputPinPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result_LiteralInteger90 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result_LiteralUnlimitedNatural91 = nullptr;
						InputPinPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object_LiteralUnlimitedNatural92 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object_LiteralInteger93 = nullptr;
					ControlFlowPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow94 = nullptr;
					ForkNodePtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this = nullptr;
					CallOperationActionPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_ = nullptr;
						InputPinPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralUnlimitedNatural95 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralInteger96 = nullptr;
				OperationPtr SingleDelegation_P_P_Signal_Tester_Tester_Tester = nullptr;
					ParameterPtr SingleDelegation_P_P_Signal_Tester_Tester_Tester_result = nullptr;
				PropertyPtr SingleDelegation_P_P_Signal_Tester_a = nullptr;
				ActivityPtr SingleDelegation_P_P_Signal_Tester_testActivity = nullptr;
					ControlFlowPtr SingleDelegation_P_P_Signal_Tester_testActivity_ControlFlow97 = nullptr;
					ReadSelfActionPtr SingleDelegation_P_P_Signal_Tester_testActivity_this = nullptr;
						OutputPinPtr SingleDelegation_P_P_Signal_Tester_testActivity_this_result = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_this_result_LiteralInteger98 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_testActivity_this_result_LiteralUnlimitedNatural99 = nullptr;
					ReadStructuralFeatureActionPtr SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a = nullptr;
						InputPinPtr SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_object = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_object_LiteralInteger100 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_object_LiteralUnlimitedNatural101 = nullptr;
						OutputPinPtr SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_result = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_result_LiteralUnlimitedNatural102 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_result_LiteralInteger103 = nullptr;
					ObjectFlowPtr SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow104 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow104_LiteralInteger105 = nullptr;
						LiteralBooleanPtr SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow104_LiteralBoolean106 = nullptr;
					ObjectFlowPtr SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow107 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow107_LiteralInteger108 = nullptr;
						LiteralBooleanPtr SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow107_LiteralBoolean109 = nullptr;
					ValueSpecificationActionPtr SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage = nullptr;
						OutputPinPtr SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_result = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_result_LiteralInteger110 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_result_LiteralUnlimitedNatural111 = nullptr;
						LiteralStringPtr SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_LiteralString112 = nullptr;
					ValueSpecificationActionPtr SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage = nullptr;
						OutputPinPtr SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_result = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_result_LiteralInteger113 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_result_LiteralUnlimitedNatural114 = nullptr;
						LiteralStringPtr SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_LiteralString115 = nullptr;
					CallBehaviorActionPtr SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP = nullptr;
						InputPinPtr SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP_p = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP_p_LiteralInteger116 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP_p_LiteralInteger117 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP_p_LiteralUnlimitedNatural118 = nullptr;
					ControlFlowPtr SingleDelegation_P_P_Signal_Tester_testActivity_ControlFlow119 = nullptr;
					ObjectFlowPtr SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow120 = nullptr;
						LiteralBooleanPtr SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow120_LiteralBoolean121 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow120_LiteralInteger122 = nullptr;
					ReadStructuralFeatureActionPtr SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b = nullptr;
						InputPinPtr SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_object = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_object_LiteralUnlimitedNatural123 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_object_LiteralInteger124 = nullptr;
						OutputPinPtr SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_result = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_result_LiteralInteger125 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_result_LiteralUnlimitedNatural126 = nullptr;
					ObjectFlowPtr SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow127 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow127_LiteralInteger128 = nullptr;
						LiteralBooleanPtr SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow127_LiteralBoolean129 = nullptr;
					ObjectFlowPtr SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow130 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow130_LiteralInteger131 = nullptr;
						LiteralBooleanPtr SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow130_LiteralBoolean132 = nullptr;
					CallBehaviorActionPtr SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage = nullptr;
						InputPinPtr SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_value = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_value_LiteralUnlimitedNatural133 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_value_LiteralInteger134 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_value_LiteralInteger135 = nullptr;
						OutputPinPtr SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_errorStatus = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_errorStatus_LiteralInteger136 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_errorStatus_LiteralInteger137 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_errorStatus_LiteralUnlimitedNatural138 = nullptr;
					ObjectFlowPtr SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow139 = nullptr;
						LiteralBooleanPtr SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow139_LiteralBoolean140 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow139_LiteralInteger141 = nullptr;
					OpaqueBehaviorPtr SingleDelegation_P_P_Signal_Tester_testActivity_testP = nullptr;
						ParameterPtr SingleDelegation_P_P_Signal_Tester_testActivity_testP_p = nullptr;
					ReadStructuralFeatureActionPtr SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p = nullptr;
						InputPinPtr SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_object = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_object_LiteralUnlimitedNatural142 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_object_LiteralInteger143 = nullptr;
						OutputPinPtr SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_result = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_result_LiteralUnlimitedNatural144 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_result_LiteralInteger145 = nullptr;
					CallBehaviorActionPtr SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage = nullptr;
						InputPinPtr SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_value = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_value_LiteralInteger146 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_value_LiteralInteger147 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_value_LiteralUnlimitedNatural148 = nullptr;
						OutputPinPtr SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_errorStatus = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_errorStatus_LiteralInteger149 = nullptr;
							LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_errorStatus_LiteralUnlimitedNatural150 = nullptr;
							LiteralIntegerPtr SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_errorStatus_LiteralInteger151 = nullptr;
				GeneralizationPtr SingleDelegation_P_P_Signal_Tester_Generalization152 = nullptr;
				OperationPtr SingleDelegation_P_P_Signal_Tester_test = nullptr;
			Class_Ptr SingleDelegation_P_P_Signal_AbstractTester = nullptr;
				ReceptionPtr SingleDelegation_P_P_Signal_AbstractTester_Start = nullptr;
				OperationPtr SingleDelegation_P_P_Signal_AbstractTester_test = nullptr;
				ReceptionPtr SingleDelegation_P_P_Signal_AbstractTester_Continue = nullptr;
			ActivityPtr SingleDelegation_P_P_Signal_main = nullptr;
				CallOperationActionPtr SingleDelegation_P_P_Signal_main_Tester_ = nullptr;
					InputPinPtr SingleDelegation_P_P_Signal_main_Tester__target = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_main_Tester__target_LiteralInteger153 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_main_Tester__target_LiteralUnlimitedNatural154 = nullptr;
					OutputPinPtr SingleDelegation_P_P_Signal_main_Tester__result = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_main_Tester__result_LiteralInteger155 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_main_Tester__result_LiteralInteger156 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_main_Tester__result_LiteralUnlimitedNatural157 = nullptr;
				ObjectFlowPtr SingleDelegation_P_P_Signal_main_ObjectFlow158 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_P_Signal_main_ObjectFlow158_LiteralBoolean159 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_P_Signal_main_ObjectFlow158_LiteralInteger160 = nullptr;
				CreateObjectActionPtr SingleDelegation_P_P_Signal_main_Create_Tester = nullptr;
					OutputPinPtr SingleDelegation_P_P_Signal_main_Create_Tester_result = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_main_Create_Tester_result_LiteralInteger161 = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_main_Create_Tester_result_LiteralUnlimitedNatural162 = nullptr;
				ObjectFlowPtr SingleDelegation_P_P_Signal_main_ObjectFlow163 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_P_Signal_main_ObjectFlow163_LiteralBoolean164 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_P_Signal_main_ObjectFlow163_LiteralInteger165 = nullptr;
				ControlFlowPtr SingleDelegation_P_P_Signal_main_ControlFlow166 = nullptr;
				ObjectFlowPtr SingleDelegation_P_P_Signal_main_ObjectFlow167 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_P_Signal_main_ObjectFlow167_LiteralInteger168 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_P_Signal_main_ObjectFlow167_LiteralBoolean169 = nullptr;
				StartObjectBehaviorActionPtr SingleDelegation_P_P_Signal_main_Start_Tester = nullptr;
					InputPinPtr SingleDelegation_P_P_Signal_main_Start_Tester_object = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_main_Start_Tester_object_LiteralUnlimitedNatural170 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_main_Start_Tester_object_LiteralInteger171 = nullptr;
				SendSignalActionPtr SingleDelegation_P_P_Signal_main_Send_Start = nullptr;
					InputPinPtr SingleDelegation_P_P_Signal_main_Send_Start_target = nullptr;
						LiteralUnlimitedNaturalPtr SingleDelegation_P_P_Signal_main_Send_Start_target_LiteralUnlimitedNatural172 = nullptr;
						LiteralIntegerPtr SingleDelegation_P_P_Signal_main_Send_Start_target_LiteralInteger173 = nullptr;
				ForkNodePtr SingleDelegation_P_P_Signal_main_Fork_Tester = nullptr;
				ObjectFlowPtr SingleDelegation_P_P_Signal_main_ObjectFlow174 = nullptr;
					LiteralBooleanPtr SingleDelegation_P_P_Signal_main_ObjectFlow174_LiteralBoolean175 = nullptr;
					LiteralIntegerPtr SingleDelegation_P_P_Signal_main_ObjectFlow174_LiteralInteger176 = nullptr;
			InterfacePtr SingleDelegation_P_P_Signal_I = nullptr;
				ReceptionPtr SingleDelegation_P_P_Signal_I_S = nullptr;
			SignalEventPtr SingleDelegation_P_P_Signal_SignalEventStart = nullptr;

		public:
			virtual ~SingleDelegation_P_P_SignalModel();
			static const std::shared_ptr<SingleDelegation_P_P_SignalModel>& Instance();

		private:
			SingleDelegation_P_P_SignalModel();
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

#endif /* SINGLEDELEGATION_P_P_SIGNAL_MODEL_H */
