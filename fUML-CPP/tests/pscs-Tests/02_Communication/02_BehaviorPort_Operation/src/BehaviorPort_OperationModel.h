/*
 * BehaviorPort_OperationModel.h
 * 
 * Auto-generated file
 */

#ifndef BEHAVIORPORT_OPERATION_MODEL_H
#define BEHAVIORPORT_OPERATION_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace BehaviorPort_Operation
{
	class BehaviorPort_OperationModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model BehaviorPort_Operation
		 */
		PackagePtr BehaviorPort_Operation = nullptr;
			CallEventPtr BehaviorPort_Operation_CallEventOr = nullptr;
			InterfacePtr BehaviorPort_Operation_I = nullptr;
				OperationPtr BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean = nullptr;
					ParameterPtr BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_a = nullptr;
					ParameterPtr BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_result = nullptr;
					ParameterPtr BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_c = nullptr;
					ParameterPtr BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_b = nullptr;
			SignalEventPtr BehaviorPort_Operation_SignalEventStart = nullptr;
			Class_Ptr BehaviorPort_Operation_P = nullptr;
				ActivityPtr BehaviorPort_Operation_P_P_ClassifierBehavior = nullptr;
					ObjectFlowPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow0 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow0_LiteralBoolean1 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow0_LiteralInteger2 = nullptr;
					ObjectFlowPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow3 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow3_LiteralInteger4 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow3_LiteralBoolean5 = nullptr;
					ForkNodePtr BehaviorPort_Operation_P_P_ClassifierBehavior_ForkNode2 = nullptr;
					ControlFlowPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ControlFlow6 = nullptr;
					ObjectFlowPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow7 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow7_LiteralInteger8 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow7_LiteralBoolean9 = nullptr;
					ObjectFlowPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow10 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow10_LiteralBoolean11 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow10_LiteralInteger12 = nullptr;
					AddStructuralFeatureValueActionPtr BehaviorPort_Operation_P_P_ClassifierBehavior_set_out = nullptr;
						InputPinPtr BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_value = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_value_LiteralUnlimitedNatural13 = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_value_LiteralInteger14 = nullptr;
						InputPinPtr BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_object = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_object_LiteralUnlimitedNatural15 = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_object_LiteralInteger16 = nullptr;
						OutputPinPtr BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_result = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_result_LiteralInteger17 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_result_LiteralUnlimitedNatural18 = nullptr;
					ObjectFlowPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow19 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow19_LiteralInteger20 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow19_LiteralBoolean21 = nullptr;
					ObjectFlowPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow22 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow22_LiteralBoolean23 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow22_LiteralInteger24 = nullptr;
					CallOperationActionPtr BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp = nullptr;
						OutputPinPtr BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_c = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_c_LiteralUnlimitedNatural25 = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_c_LiteralInteger26 = nullptr;
						OutputPinPtr BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_result = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_result_LiteralInteger27 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_result_LiteralUnlimitedNatural28 = nullptr;
						InputPinPtr BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_a = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_a_LiteralInteger29 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_a_LiteralUnlimitedNatural30 = nullptr;
						InputPinPtr BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_target = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_target_LiteralInteger31 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_target_LiteralUnlimitedNatural32 = nullptr;
						InputPinPtr BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_b = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_b_LiteralUnlimitedNatural33 = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_b_LiteralInteger34 = nullptr;
					ForkNodePtr BehaviorPort_Operation_P_P_ClassifierBehavior_ForkNode1 = nullptr;
					ReadSelfActionPtr BehaviorPort_Operation_P_P_ClassifierBehavior_this = nullptr;
						OutputPinPtr BehaviorPort_Operation_P_P_ClassifierBehavior_this_p = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_P_P_ClassifierBehavior_this_p_LiteralUnlimitedNatural35 = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_this_p_LiteralInteger36 = nullptr;
					ObjectFlowPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow37 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow37_LiteralInteger38 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow37_LiteralBoolean39 = nullptr;
					ControlFlowPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ControlFlow40 = nullptr;
					ObjectFlowPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow41 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow41_LiteralInteger42 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow41_LiteralBoolean43 = nullptr;
					InitialNodePtr BehaviorPort_Operation_P_P_ClassifierBehavior_InitialNode1 = nullptr;
					AcceptEventActionPtr BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start = nullptr;
						TriggerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_SignalEventStartTrigger = nullptr;
						OutputPinPtr BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_result = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_result_LiteralInteger44 = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_result_LiteralInteger45 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_result_LiteralUnlimitedNatural46 = nullptr;
					ValueSpecificationActionPtr BehaviorPort_Operation_P_P_ClassifierBehavior_true = nullptr;
						OutputPinPtr BehaviorPort_Operation_P_P_ClassifierBehavior_true_result = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_P_P_ClassifierBehavior_true_result_LiteralUnlimitedNatural47 = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_true_result_LiteralInteger48 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_P_P_ClassifierBehavior_true_LiteralBoolean49 = nullptr;
					AddStructuralFeatureValueActionPtr BehaviorPort_Operation_P_P_ClassifierBehavior_set_return = nullptr;
						InputPinPtr BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_value = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_value_LiteralUnlimitedNatural50 = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_value_LiteralInteger51 = nullptr;
						OutputPinPtr BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_result = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_result_LiteralUnlimitedNatural52 = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_result_LiteralInteger53 = nullptr;
						InputPinPtr BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_object = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_object_LiteralUnlimitedNatural54 = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_object_LiteralInteger55 = nullptr;
					ObjectFlowPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow56 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow56_LiteralInteger57 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow56_LiteralBoolean58 = nullptr;
				ActivityPtr BehaviorPort_Operation_P_P_Factory = nullptr;
					ObjectFlowPtr BehaviorPort_Operation_P_P_Factory_ObjectFlow59 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_P_P_Factory_ObjectFlow59_LiteralInteger60 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_P_P_Factory_ObjectFlow59_LiteralBoolean61 = nullptr;
					CreateObjectActionPtr BehaviorPort_Operation_P_P_Factory_Create_P = nullptr;
						OutputPinPtr BehaviorPort_Operation_P_P_Factory_Create_P_result = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_P_P_Factory_Create_P_result_LiteralUnlimitedNatural62 = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_P_P_Factory_Create_P_result_LiteralInteger63 = nullptr;
					ObjectFlowPtr BehaviorPort_Operation_P_P_Factory_ObjectFlow64 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_P_P_Factory_ObjectFlow64_LiteralInteger65 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_P_P_Factory_ObjectFlow64_LiteralBoolean66 = nullptr;
					CallOperationActionPtr BehaviorPort_Operation_P_P_Factory_P_ = nullptr;
						InputPinPtr BehaviorPort_Operation_P_P_Factory_P__target = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_P_P_Factory_P__target_LiteralInteger67 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_P_P_Factory_P__target_LiteralUnlimitedNatural68 = nullptr;
						OutputPinPtr BehaviorPort_Operation_P_P_Factory_P__result = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_P_P_Factory_P__result_LiteralInteger69 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_P_P_Factory_P__result_LiteralUnlimitedNatural70 = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_P_P_Factory_P__result_LiteralInteger71 = nullptr;
					ObjectFlowPtr BehaviorPort_Operation_P_P_Factory_ObjectFlow72 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_P_P_Factory_ObjectFlow72_LiteralBoolean73 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_P_P_Factory_ObjectFlow72_LiteralInteger74 = nullptr;
					ActivityParameterNodePtr BehaviorPort_Operation_P_P_Factory_resultParameterNode = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_P_P_Factory_resultParameterNode_LiteralInteger75 = nullptr;
					StartObjectBehaviorActionPtr BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior = nullptr;
						InputPinPtr BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior_object = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior_object_LiteralUnlimitedNatural76 = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior_object_LiteralInteger77 = nullptr;
					ObjectFlowPtr BehaviorPort_Operation_P_P_Factory_ObjectFlow78 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_P_P_Factory_ObjectFlow78_LiteralBoolean79 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_P_P_Factory_ObjectFlow78_LiteralInteger80 = nullptr;
					ForkNodePtr BehaviorPort_Operation_P_P_Factory_Fork_object = nullptr;
					ParameterPtr BehaviorPort_Operation_P_P_Factory_result = nullptr;
				PropertyPtr BehaviorPort_Operation_P_return = nullptr;
					LiteralIntegerPtr BehaviorPort_Operation_P_return_LiteralInteger81 = nullptr;
				PortPtr BehaviorPort_Operation_P_pp = nullptr;
				PropertyPtr BehaviorPort_Operation_P_out = nullptr;
					LiteralIntegerPtr BehaviorPort_Operation_P_out_LiteralInteger82 = nullptr;
				OperationPtr BehaviorPort_Operation_P_P_P = nullptr;
					ParameterPtr BehaviorPort_Operation_P_P_P_result = nullptr;
				ReceptionPtr BehaviorPort_Operation_P_Start = nullptr;
			ActivityPtr BehaviorPort_Operation_main = nullptr;
				ControlFlowPtr BehaviorPort_Operation_main_ControlFlow83 = nullptr;
				ReadStructuralFeatureActionPtr BehaviorPort_Operation_main_s_p = nullptr;
					InputPinPtr BehaviorPort_Operation_main_s_p_s = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Operation_main_s_p_s_LiteralUnlimitedNatural84 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_main_s_p_s_LiteralInteger85 = nullptr;
					OutputPinPtr BehaviorPort_Operation_main_s_p_result = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Operation_main_s_p_result_LiteralUnlimitedNatural86 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_main_s_p_result_LiteralInteger87 = nullptr;
				CreateObjectActionPtr BehaviorPort_Operation_main_Create_S = nullptr;
					OutputPinPtr BehaviorPort_Operation_main_Create_S_result = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_main_Create_S_result_LiteralInteger88 = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Operation_main_Create_S_result_LiteralUnlimitedNatural89 = nullptr;
				CallBehaviorActionPtr BehaviorPort_Operation_main_assertP = nullptr;
					InputPinPtr BehaviorPort_Operation_main_assertP_p = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_main_assertP_p_LiteralInteger90 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_main_assertP_p_LiteralInteger91 = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Operation_main_assertP_p_LiteralUnlimitedNatural92 = nullptr;
				ObjectFlowPtr BehaviorPort_Operation_main_ObjectFlow93 = nullptr;
					LiteralIntegerPtr BehaviorPort_Operation_main_ObjectFlow93_LiteralInteger94 = nullptr;
					LiteralBooleanPtr BehaviorPort_Operation_main_ObjectFlow93_LiteralBoolean95 = nullptr;
				SendSignalActionPtr BehaviorPort_Operation_main_Send_Start = nullptr;
					InputPinPtr BehaviorPort_Operation_main_Send_Start_target = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_main_Send_Start_target_LiteralInteger96 = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Operation_main_Send_Start_target_LiteralUnlimitedNatural97 = nullptr;
				ForkNodePtr BehaviorPort_Operation_main_Fork_s_p = nullptr;
				ObjectFlowPtr BehaviorPort_Operation_main_ObjectFlow98 = nullptr;
					LiteralIntegerPtr BehaviorPort_Operation_main_ObjectFlow98_LiteralInteger99 = nullptr;
					LiteralBooleanPtr BehaviorPort_Operation_main_ObjectFlow98_LiteralBoolean100 = nullptr;
				ObjectFlowPtr BehaviorPort_Operation_main_ObjectFlow101 = nullptr;
					LiteralIntegerPtr BehaviorPort_Operation_main_ObjectFlow101_LiteralInteger102 = nullptr;
					LiteralBooleanPtr BehaviorPort_Operation_main_ObjectFlow101_LiteralBoolean103 = nullptr;
				ObjectFlowPtr BehaviorPort_Operation_main_ObjectFlow104 = nullptr;
					LiteralBooleanPtr BehaviorPort_Operation_main_ObjectFlow104_LiteralBoolean105 = nullptr;
					LiteralIntegerPtr BehaviorPort_Operation_main_ObjectFlow104_LiteralInteger106 = nullptr;
				ObjectFlowPtr BehaviorPort_Operation_main_ObjectFlow107 = nullptr;
					LiteralIntegerPtr BehaviorPort_Operation_main_ObjectFlow107_LiteralInteger108 = nullptr;
					LiteralBooleanPtr BehaviorPort_Operation_main_ObjectFlow107_LiteralBoolean109 = nullptr;
				CallOperationActionPtr BehaviorPort_Operation_main_S_ = nullptr;
					InputPinPtr BehaviorPort_Operation_main_S__target = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_main_S__target_LiteralInteger110 = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Operation_main_S__target_LiteralUnlimitedNatural111 = nullptr;
					OutputPinPtr BehaviorPort_Operation_main_S__result = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_main_S__result_LiteralInteger112 = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Operation_main_S__result_LiteralUnlimitedNatural113 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_main_S__result_LiteralInteger114 = nullptr;
			Class_Ptr BehaviorPort_Operation_C = nullptr;
				ActivityPtr BehaviorPort_Operation_C_C_Factory = nullptr;
					ObjectFlowPtr BehaviorPort_Operation_C_C_Factory_ObjectFlow115 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_C_C_Factory_ObjectFlow115_LiteralBoolean116 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_C_C_Factory_ObjectFlow115_LiteralInteger117 = nullptr;
					ForkNodePtr BehaviorPort_Operation_C_C_Factory_Fork_object = nullptr;
					ParameterPtr BehaviorPort_Operation_C_C_Factory_result = nullptr;
					ObjectFlowPtr BehaviorPort_Operation_C_C_Factory_ObjectFlow118 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_C_C_Factory_ObjectFlow118_LiteralBoolean119 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_C_C_Factory_ObjectFlow118_LiteralInteger120 = nullptr;
					ObjectFlowPtr BehaviorPort_Operation_C_C_Factory_ObjectFlow121 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_C_C_Factory_ObjectFlow121_LiteralBoolean122 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_C_C_Factory_ObjectFlow121_LiteralInteger123 = nullptr;
					CreateObjectActionPtr BehaviorPort_Operation_C_C_Factory_Create_C = nullptr;
						OutputPinPtr BehaviorPort_Operation_C_C_Factory_Create_C_result = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_C_C_Factory_Create_C_result_LiteralInteger124 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_C_C_Factory_Create_C_result_LiteralUnlimitedNatural125 = nullptr;
					StartObjectBehaviorActionPtr BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior = nullptr;
						InputPinPtr BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior_object = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior_object_LiteralInteger126 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior_object_LiteralUnlimitedNatural127 = nullptr;
					ObjectFlowPtr BehaviorPort_Operation_C_C_Factory_ObjectFlow128 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_C_C_Factory_ObjectFlow128_LiteralInteger129 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_C_C_Factory_ObjectFlow128_LiteralBoolean130 = nullptr;
					ActivityParameterNodePtr BehaviorPort_Operation_C_C_Factory_resultParameterNode = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_C_C_Factory_resultParameterNode_LiteralInteger131 = nullptr;
					CallOperationActionPtr BehaviorPort_Operation_C_C_Factory_C_ = nullptr;
						OutputPinPtr BehaviorPort_Operation_C_C_Factory_C__result = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_C_C_Factory_C__result_LiteralUnlimitedNatural132 = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_C_C_Factory_C__result_LiteralInteger133 = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_C_C_Factory_C__result_LiteralInteger134 = nullptr;
						InputPinPtr BehaviorPort_Operation_C_C_Factory_C__target = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_C_C_Factory_C__target_LiteralInteger135 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_C_C_Factory_C__target_LiteralUnlimitedNatural136 = nullptr;
				PortPtr BehaviorPort_Operation_C_pc = nullptr;
				OperationPtr BehaviorPort_Operation_C_C_C = nullptr;
					ParameterPtr BehaviorPort_Operation_C_C_C_result = nullptr;
				InterfaceRealizationPtr BehaviorPort_Operation_C_I_Realization = nullptr;
				OperationPtr BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean = nullptr;
					ParameterPtr BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_b = nullptr;
					ParameterPtr BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_result = nullptr;
					ParameterPtr BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_c = nullptr;
					ParameterPtr BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_a = nullptr;
				ActivityPtr BehaviorPort_Operation_C_C_ClassifierBehavior = nullptr;
					ObjectFlowPtr BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow137 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow137_LiteralInteger138 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow137_LiteralBoolean139 = nullptr;
					ControlFlowPtr BehaviorPort_Operation_C_C_ClassifierBehavior_ControlFlow140 = nullptr;
					ForkNodePtr BehaviorPort_Operation_C_C_ClassifierBehavior_Fork_result = nullptr;
					ObjectFlowPtr BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow141 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow141_LiteralInteger142 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow141_LiteralBoolean143 = nullptr;
					ObjectFlowPtr BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow144 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow144_LiteralBoolean145 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow144_LiteralInteger146 = nullptr;
					InitialNodePtr BehaviorPort_Operation_C_C_ClassifierBehavior_InitialNode1 = nullptr;
					ObjectFlowPtr BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow147 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow147_LiteralBoolean148 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow147_LiteralInteger149 = nullptr;
					CallBehaviorActionPtr BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor = nullptr;
						InputPinPtr BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_y = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_y_LiteralInteger150 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_y_LiteralUnlimitedNatural151 = nullptr;
						OutputPinPtr BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_result = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_result_LiteralInteger152 = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_result_LiteralInteger153 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_result_LiteralUnlimitedNatural154 = nullptr;
						InputPinPtr BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_x = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_x_LiteralInteger155 = nullptr;
							LiteralUnlimitedNaturalPtr BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_x_LiteralUnlimitedNatural156 = nullptr;
					ObjectFlowPtr BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow157 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow157_LiteralBoolean158 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow157_LiteralInteger159 = nullptr;
					AcceptCallActionPtr BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or_ = nullptr;
						OutputPinPtr BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__b = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__b_LiteralInteger160 = nullptr;
						OutputPinPtr BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__returnInformation = nullptr;
						OutputPinPtr BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__a = nullptr;
							LiteralIntegerPtr BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__a_LiteralInteger161 = nullptr;
						TriggerPtr BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__CallEventOrTrigger = nullptr;
					ReplyActionPtr BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or_ = nullptr;
						InputPinPtr BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__r = nullptr;
						InputPinPtr BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__cr = nullptr;
						InputPinPtr BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__returnInformation = nullptr;
					ObjectFlowPtr BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow162 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow162_LiteralInteger163 = nullptr;
						LiteralBooleanPtr BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow162_LiteralBoolean164 = nullptr;
			Class_Ptr BehaviorPort_Operation_S = nullptr;
				PropertyPtr BehaviorPort_Operation_S_p = nullptr;
				PropertyPtr BehaviorPort_Operation_S_c = nullptr;
				ConnectorPtr BehaviorPort_Operation_S_Connector1 = nullptr;
					ConnectorEndPtr BehaviorPort_Operation_S_Connector1_ConnectorEnd165 = nullptr;
					ConnectorEndPtr BehaviorPort_Operation_S_Connector1_ConnectorEnd166 = nullptr;
				OperationPtr BehaviorPort_Operation_S_S_S = nullptr;
					ParameterPtr BehaviorPort_Operation_S_S_S_result = nullptr;
			SignalPtr BehaviorPort_Operation_Start = nullptr;
			UsagePtr BehaviorPort_Operation_I_Usage_P = nullptr;
			ActivityPtr BehaviorPort_Operation_assertP = nullptr;
				ObjectFlowPtr BehaviorPort_Operation_assertP_ObjectFlow167 = nullptr;
					LiteralIntegerPtr BehaviorPort_Operation_assertP_ObjectFlow167_LiteralInteger168 = nullptr;
					LiteralBooleanPtr BehaviorPort_Operation_assertP_ObjectFlow167_LiteralBoolean169 = nullptr;
				ControlFlowPtr BehaviorPort_Operation_assertP_ControlFlow170 = nullptr;
				ObjectFlowPtr BehaviorPort_Operation_assertP_ObjectFlow171 = nullptr;
					LiteralBooleanPtr BehaviorPort_Operation_assertP_ObjectFlow171_LiteralBoolean172 = nullptr;
					LiteralIntegerPtr BehaviorPort_Operation_assertP_ObjectFlow171_LiteralInteger173 = nullptr;
				ObjectFlowPtr BehaviorPort_Operation_assertP_ObjectFlow174 = nullptr;
					LiteralBooleanPtr BehaviorPort_Operation_assertP_ObjectFlow174_LiteralBoolean175 = nullptr;
					LiteralIntegerPtr BehaviorPort_Operation_assertP_ObjectFlow174_LiteralInteger176 = nullptr;
				ForkNodePtr BehaviorPort_Operation_assertP_Fork_p = nullptr;
				CallBehaviorActionPtr BehaviorPort_Operation_assertP_test_out = nullptr;
					InputPinPtr BehaviorPort_Operation_assertP_test_out_input = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Operation_assertP_test_out_input_LiteralUnlimitedNatural177 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_assertP_test_out_input_LiteralInteger178 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_assertP_test_out_input_LiteralInteger179 = nullptr;
				CallBehaviorActionPtr BehaviorPort_Operation_assertP_writeLine_p_return = nullptr;
					OutputPinPtr BehaviorPort_Operation_assertP_writeLine_p_return_errorStatus = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Operation_assertP_writeLine_p_return_errorStatus_LiteralUnlimitedNatural180 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_assertP_writeLine_p_return_errorStatus_LiteralInteger181 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_assertP_writeLine_p_return_errorStatus_LiteralInteger182 = nullptr;
					InputPinPtr BehaviorPort_Operation_assertP_writeLine_p_return_value = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_assertP_writeLine_p_return_value_LiteralInteger183 = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Operation_assertP_writeLine_p_return_value_LiteralUnlimitedNatural184 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_assertP_writeLine_p_return_value_LiteralInteger185 = nullptr;
				CallBehaviorActionPtr BehaviorPort_Operation_assertP_writeLine_p_out = nullptr;
					InputPinPtr BehaviorPort_Operation_assertP_writeLine_p_out_value = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Operation_assertP_writeLine_p_out_value_LiteralUnlimitedNatural186 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_assertP_writeLine_p_out_value_LiteralInteger187 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_assertP_writeLine_p_out_value_LiteralInteger188 = nullptr;
					OutputPinPtr BehaviorPort_Operation_assertP_writeLine_p_out_errorStatus = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Operation_assertP_writeLine_p_out_errorStatus_LiteralUnlimitedNatural189 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_assertP_writeLine_p_out_errorStatus_LiteralInteger190 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_assertP_writeLine_p_out_errorStatus_LiteralInteger191 = nullptr;
				ReadStructuralFeatureActionPtr BehaviorPort_Operation_assertP_p_out = nullptr;
					OutputPinPtr BehaviorPort_Operation_assertP_p_out_result = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_assertP_p_out_result_LiteralInteger192 = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Operation_assertP_p_out_result_LiteralUnlimitedNatural193 = nullptr;
					InputPinPtr BehaviorPort_Operation_assertP_p_out_object = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Operation_assertP_p_out_object_LiteralUnlimitedNatural194 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_assertP_p_out_object_LiteralInteger195 = nullptr;
				ControlFlowPtr BehaviorPort_Operation_assertP_ControlFlow196 = nullptr;
				ParameterPtr BehaviorPort_Operation_assertP_p = nullptr;
				ControlFlowPtr BehaviorPort_Operation_assertP_ControlFlow197 = nullptr;
				ActivityParameterNodePtr BehaviorPort_Operation_assertP_pParameterNode = nullptr;
					LiteralIntegerPtr BehaviorPort_Operation_assertP_pParameterNode_LiteralInteger198 = nullptr;
				CallBehaviorActionPtr BehaviorPort_Operation_assertP_test_return = nullptr;
					InputPinPtr BehaviorPort_Operation_assertP_test_return_input = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_assertP_test_return_input_LiteralInteger199 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_assertP_test_return_input_LiteralInteger200 = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Operation_assertP_test_return_input_LiteralUnlimitedNatural201 = nullptr;
				ValueSpecificationActionPtr BehaviorPort_Operation_assertP_p_out_message = nullptr;
					LiteralStringPtr BehaviorPort_Operation_assertP_p_out_message_LiteralString202 = nullptr;
					OutputPinPtr BehaviorPort_Operation_assertP_p_out_message_result = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Operation_assertP_p_out_message_result_LiteralUnlimitedNatural203 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_assertP_p_out_message_result_LiteralInteger204 = nullptr;
				ReadStructuralFeatureActionPtr BehaviorPort_Operation_assertP_p_return = nullptr;
					InputPinPtr BehaviorPort_Operation_assertP_p_return_object = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_assertP_p_return_object_LiteralInteger205 = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Operation_assertP_p_return_object_LiteralUnlimitedNatural206 = nullptr;
					OutputPinPtr BehaviorPort_Operation_assertP_p_return_result = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Operation_assertP_p_return_result_LiteralUnlimitedNatural207 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_assertP_p_return_result_LiteralInteger208 = nullptr;
				ObjectFlowPtr BehaviorPort_Operation_assertP_ObjectFlow209 = nullptr;
					LiteralBooleanPtr BehaviorPort_Operation_assertP_ObjectFlow209_LiteralBoolean210 = nullptr;
					LiteralIntegerPtr BehaviorPort_Operation_assertP_ObjectFlow209_LiteralInteger211 = nullptr;
				ControlFlowPtr BehaviorPort_Operation_assertP_ControlFlow212 = nullptr;
				ValueSpecificationActionPtr BehaviorPort_Operation_assertP_p_return_message = nullptr;
					LiteralStringPtr BehaviorPort_Operation_assertP_p_return_message_LiteralString213 = nullptr;
					OutputPinPtr BehaviorPort_Operation_assertP_p_return_message_result = nullptr;
						LiteralUnlimitedNaturalPtr BehaviorPort_Operation_assertP_p_return_message_result_LiteralUnlimitedNatural214 = nullptr;
						LiteralIntegerPtr BehaviorPort_Operation_assertP_p_return_message_result_LiteralInteger215 = nullptr;
				ObjectFlowPtr BehaviorPort_Operation_assertP_ObjectFlow216 = nullptr;
					LiteralBooleanPtr BehaviorPort_Operation_assertP_ObjectFlow216_LiteralBoolean217 = nullptr;
					LiteralIntegerPtr BehaviorPort_Operation_assertP_ObjectFlow216_LiteralInteger218 = nullptr;
				ControlFlowPtr BehaviorPort_Operation_assertP_ControlFlow219 = nullptr;
				ObjectFlowPtr BehaviorPort_Operation_assertP_ObjectFlow220 = nullptr;
					LiteralIntegerPtr BehaviorPort_Operation_assertP_ObjectFlow220_LiteralInteger221 = nullptr;
					LiteralBooleanPtr BehaviorPort_Operation_assertP_ObjectFlow220_LiteralBoolean222 = nullptr;
				OpaqueBehaviorPtr BehaviorPort_Operation_assertP_testFalse = nullptr;
					ParameterPtr BehaviorPort_Operation_assertP_testFalse_input = nullptr;
				ObjectFlowPtr BehaviorPort_Operation_assertP_ObjectFlow223 = nullptr;
					LiteralBooleanPtr BehaviorPort_Operation_assertP_ObjectFlow223_LiteralBoolean224 = nullptr;
					LiteralIntegerPtr BehaviorPort_Operation_assertP_ObjectFlow223_LiteralInteger225 = nullptr;

		public:
			virtual ~BehaviorPort_OperationModel();
			static const std::shared_ptr<BehaviorPort_OperationModel>& Instance();

		private:
			BehaviorPort_OperationModel();
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

#endif /* BEHAVIORPORT_OPERATION_MODEL_H */
