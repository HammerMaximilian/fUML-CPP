/*
 * PolymorphismTestModel.h
 * 
 * Auto-generated file
 */

#ifndef POLYMORPHISMTEST_MODEL_H
#define POLYMORPHISMTEST_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace PolymorphismTest
{
	class PolymorphismTestModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model PolymorphismTest
		 */
		PackagePtr PolymorphismTest = nullptr;
			Class_Ptr PolymorphismTest_U = nullptr;
				ActivityPtr PolymorphismTest_U_o4_method = nullptr;
					CallBehaviorActionPtr PolymorphismTest_U_o4_method_Call_WriteLine = nullptr;
						InputPinPtr PolymorphismTest_U_o4_method_Call_WriteLine_value = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_o4_method_Call_WriteLine_value_LiteralInteger0 = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_o4_method_Call_WriteLine_value_LiteralInteger1 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_U_o4_method_Call_WriteLine_value_LiteralUnlimitedNatural2 = nullptr;
						OutputPinPtr PolymorphismTest_U_o4_method_Call_WriteLine_errorStatus = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_o4_method_Call_WriteLine_errorStatus_LiteralInteger3 = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_o4_method_Call_WriteLine_errorStatus_LiteralInteger4 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_U_o4_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural5 = nullptr;
					ValueSpecificationActionPtr PolymorphismTest_U_o4_method_Message = nullptr;
						LiteralStringPtr PolymorphismTest_U_o4_method_Message_LiteralString6 = nullptr;
						OutputPinPtr PolymorphismTest_U_o4_method_Message_result = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_o4_method_Message_result_LiteralInteger7 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_U_o4_method_Message_result_LiteralUnlimitedNatural8 = nullptr;
					ObjectFlowPtr PolymorphismTest_U_o4_method_ObjectFlow9 = nullptr;
						LiteralIntegerPtr PolymorphismTest_U_o4_method_ObjectFlow9_LiteralInteger10 = nullptr;
						LiteralBooleanPtr PolymorphismTest_U_o4_method_ObjectFlow9_LiteralBoolean11 = nullptr;
				ActivityPtr PolymorphismTest_U_o2_method = nullptr;
					ActivityParameterNodePtr PolymorphismTest_U_o2_method_b_node = nullptr;
						LiteralIntegerPtr PolymorphismTest_U_o2_method_b_node_LiteralInteger12 = nullptr;
					ObjectFlowPtr PolymorphismTest_U_o2_method_ObjectFlow13 = nullptr;
						LiteralIntegerPtr PolymorphismTest_U_o2_method_ObjectFlow13_LiteralInteger14 = nullptr;
						LiteralBooleanPtr PolymorphismTest_U_o2_method_ObjectFlow13_LiteralBoolean15 = nullptr;
					CallBehaviorActionPtr PolymorphismTest_U_o2_method_Call_WriteLine = nullptr;
						InputPinPtr PolymorphismTest_U_o2_method_Call_WriteLine_value = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_o2_method_Call_WriteLine_value_LiteralInteger16 = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_o2_method_Call_WriteLine_value_LiteralInteger17 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_U_o2_method_Call_WriteLine_value_LiteralUnlimitedNatural18 = nullptr;
						OutputPinPtr PolymorphismTest_U_o2_method_Call_WriteLine_errorStatus = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_o2_method_Call_WriteLine_errorStatus_LiteralInteger19 = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_o2_method_Call_WriteLine_errorStatus_LiteralInteger20 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_U_o2_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural21 = nullptr;
					ParameterPtr PolymorphismTest_U_o2_method_b = nullptr;
					ParameterPtr PolymorphismTest_U_o2_method_a = nullptr;
					ValueSpecificationActionPtr PolymorphismTest_U_o2_method_Message = nullptr;
						OutputPinPtr PolymorphismTest_U_o2_method_Message_result = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_o2_method_Message_result_LiteralInteger22 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_U_o2_method_Message_result_LiteralUnlimitedNatural23 = nullptr;
						LiteralStringPtr PolymorphismTest_U_o2_method_Message_LiteralString24 = nullptr;
					ActivityParameterNodePtr PolymorphismTest_U_o2_method_a_node = nullptr;
						LiteralIntegerPtr PolymorphismTest_U_o2_method_a_node_LiteralInteger25 = nullptr;
				OperationPtr PolymorphismTest_U_x = nullptr;
				OperationPtr PolymorphismTest_U_A_o1_B = nullptr;
					ParameterPtr PolymorphismTest_U_A_o1_B_b = nullptr;
					ParameterPtr PolymorphismTest_U_A_o1_B_a = nullptr;
				OperationPtr PolymorphismTest_U_A_o2_B = nullptr;
					ParameterPtr PolymorphismTest_U_A_o2_B_a = nullptr;
					ParameterPtr PolymorphismTest_U_A_o2_B_b = nullptr;
				OperationPtr PolymorphismTest_U_o4 = nullptr;
				OperationPtr PolymorphismTest_U_o3_Integer = nullptr;
					ParameterPtr PolymorphismTest_U_o3_Integer_i = nullptr;
				ActivityPtr PolymorphismTest_U_o3_method = nullptr;
					ActivityParameterNodePtr PolymorphismTest_U_o3_method_i_node = nullptr;
						LiteralIntegerPtr PolymorphismTest_U_o3_method_i_node_LiteralInteger26 = nullptr;
					ValueSpecificationActionPtr PolymorphismTest_U_o3_method_Message = nullptr;
						OutputPinPtr PolymorphismTest_U_o3_method_Message_result = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_o3_method_Message_result_LiteralInteger27 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_U_o3_method_Message_result_LiteralUnlimitedNatural28 = nullptr;
						LiteralStringPtr PolymorphismTest_U_o3_method_Message_LiteralString29 = nullptr;
					CallBehaviorActionPtr PolymorphismTest_U_o3_method_Call_WriteLine = nullptr;
						InputPinPtr PolymorphismTest_U_o3_method_Call_WriteLine_value = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_U_o3_method_Call_WriteLine_value_LiteralUnlimitedNatural30 = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_o3_method_Call_WriteLine_value_LiteralInteger31 = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_o3_method_Call_WriteLine_value_LiteralInteger32 = nullptr;
						OutputPinPtr PolymorphismTest_U_o3_method_Call_WriteLine_errorStatus = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_o3_method_Call_WriteLine_errorStatus_LiteralInteger33 = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_o3_method_Call_WriteLine_errorStatus_LiteralInteger34 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_U_o3_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural35 = nullptr;
					ParameterPtr PolymorphismTest_U_o3_method_i = nullptr;
					ObjectFlowPtr PolymorphismTest_U_o3_method_ObjectFlow36 = nullptr;
						LiteralIntegerPtr PolymorphismTest_U_o3_method_ObjectFlow36_LiteralInteger37 = nullptr;
						LiteralBooleanPtr PolymorphismTest_U_o3_method_ObjectFlow36_LiteralBoolean38 = nullptr;
				ActivityPtr PolymorphismTest_U_x_method = nullptr;
					CallBehaviorActionPtr PolymorphismTest_U_x_method_Call_WriteLine = nullptr;
						OutputPinPtr PolymorphismTest_U_x_method_Call_WriteLine_errorStatus = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_x_method_Call_WriteLine_errorStatus_LiteralInteger39 = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_x_method_Call_WriteLine_errorStatus_LiteralInteger40 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_U_x_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural41 = nullptr;
						InputPinPtr PolymorphismTest_U_x_method_Call_WriteLine_value = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_x_method_Call_WriteLine_value_LiteralInteger42 = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_x_method_Call_WriteLine_value_LiteralInteger43 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_U_x_method_Call_WriteLine_value_LiteralUnlimitedNatural44 = nullptr;
					ObjectFlowPtr PolymorphismTest_U_x_method_ObjectFlow45 = nullptr;
						LiteralBooleanPtr PolymorphismTest_U_x_method_ObjectFlow45_LiteralBoolean46 = nullptr;
						LiteralIntegerPtr PolymorphismTest_U_x_method_ObjectFlow45_LiteralInteger47 = nullptr;
					ValueSpecificationActionPtr PolymorphismTest_U_x_method_Message = nullptr;
						LiteralStringPtr PolymorphismTest_U_x_method_Message_LiteralString48 = nullptr;
						OutputPinPtr PolymorphismTest_U_x_method_Message_result = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_x_method_Message_result_LiteralInteger49 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_U_x_method_Message_result_LiteralUnlimitedNatural50 = nullptr;
				ActivityPtr PolymorphismTest_U_o1_method = nullptr;
					ParameterPtr PolymorphismTest_U_o1_method_b = nullptr;
					ValueSpecificationActionPtr PolymorphismTest_U_o1_method_Message = nullptr;
						OutputPinPtr PolymorphismTest_U_o1_method_Message_result = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_o1_method_Message_result_LiteralInteger51 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_U_o1_method_Message_result_LiteralUnlimitedNatural52 = nullptr;
						LiteralStringPtr PolymorphismTest_U_o1_method_Message_LiteralString53 = nullptr;
					ParameterPtr PolymorphismTest_U_o1_method_a = nullptr;
					CallBehaviorActionPtr PolymorphismTest_U_o1_method_Call_WriteLine = nullptr;
						InputPinPtr PolymorphismTest_U_o1_method_Call_WriteLine_value = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_U_o1_method_Call_WriteLine_value_LiteralUnlimitedNatural54 = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_o1_method_Call_WriteLine_value_LiteralInteger55 = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_o1_method_Call_WriteLine_value_LiteralInteger56 = nullptr;
						OutputPinPtr PolymorphismTest_U_o1_method_Call_WriteLine_errorStatus = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_U_o1_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural57 = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_o1_method_Call_WriteLine_errorStatus_LiteralInteger58 = nullptr;
							LiteralIntegerPtr PolymorphismTest_U_o1_method_Call_WriteLine_errorStatus_LiteralInteger59 = nullptr;
					ActivityParameterNodePtr PolymorphismTest_U_o1_method_b_node = nullptr;
						LiteralIntegerPtr PolymorphismTest_U_o1_method_b_node_LiteralInteger60 = nullptr;
					ActivityParameterNodePtr PolymorphismTest_U_o1_method_a_node = nullptr;
						LiteralIntegerPtr PolymorphismTest_U_o1_method_a_node_LiteralInteger61 = nullptr;
					ObjectFlowPtr PolymorphismTest_U_o1_method_ObjectFlow62 = nullptr;
						LiteralIntegerPtr PolymorphismTest_U_o1_method_ObjectFlow62_LiteralInteger63 = nullptr;
						LiteralBooleanPtr PolymorphismTest_U_o1_method_ObjectFlow62_LiteralBoolean64 = nullptr;
			Class_Ptr PolymorphismTest_B = nullptr;
				GeneralizationPtr PolymorphismTest_B_Generalization65 = nullptr;
			Class_Ptr PolymorphismTest_A = nullptr;
				ActivityPtr PolymorphismTest_A_x_method = nullptr;
					CallBehaviorActionPtr PolymorphismTest_A_x_method_Call_WriteLine = nullptr;
						InputPinPtr PolymorphismTest_A_x_method_Call_WriteLine_value = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_A_x_method_Call_WriteLine_value_LiteralUnlimitedNatural66 = nullptr;
							LiteralIntegerPtr PolymorphismTest_A_x_method_Call_WriteLine_value_LiteralInteger67 = nullptr;
							LiteralIntegerPtr PolymorphismTest_A_x_method_Call_WriteLine_value_LiteralInteger68 = nullptr;
						OutputPinPtr PolymorphismTest_A_x_method_Call_WriteLine_errorStatus = nullptr;
							LiteralIntegerPtr PolymorphismTest_A_x_method_Call_WriteLine_errorStatus_LiteralInteger69 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_A_x_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural70 = nullptr;
							LiteralIntegerPtr PolymorphismTest_A_x_method_Call_WriteLine_errorStatus_LiteralInteger71 = nullptr;
					ValueSpecificationActionPtr PolymorphismTest_A_x_method_Message = nullptr;
						LiteralStringPtr PolymorphismTest_A_x_method_Message_LiteralString72 = nullptr;
						OutputPinPtr PolymorphismTest_A_x_method_Message_result = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_A_x_method_Message_result_LiteralUnlimitedNatural73 = nullptr;
							LiteralIntegerPtr PolymorphismTest_A_x_method_Message_result_LiteralInteger74 = nullptr;
					ObjectFlowPtr PolymorphismTest_A_x_method_ObjectFlow75 = nullptr;
						LiteralBooleanPtr PolymorphismTest_A_x_method_ObjectFlow75_LiteralBoolean76 = nullptr;
						LiteralIntegerPtr PolymorphismTest_A_x_method_ObjectFlow75_LiteralInteger77 = nullptr;
				OperationPtr PolymorphismTest_A_x = nullptr;
			ActivityPtr PolymorphismTest_main = nullptr;
				CallBehaviorActionPtr PolymorphismTest_main_Call_runTests = nullptr;
					InputPinPtr PolymorphismTest_main_Call_runTests_u = nullptr;
						LiteralIntegerPtr PolymorphismTest_main_Call_runTests_u_LiteralInteger78 = nullptr;
						LiteralUnlimitedNaturalPtr PolymorphismTest_main_Call_runTests_u_LiteralUnlimitedNatural79 = nullptr;
						LiteralIntegerPtr PolymorphismTest_main_Call_runTests_u_LiteralInteger80 = nullptr;
				ActivityPtr PolymorphismTest_main_runTests = nullptr;
					ObjectFlowPtr PolymorphismTest_main_runTests_ObjectFlow81 = nullptr;
						LiteralBooleanPtr PolymorphismTest_main_runTests_ObjectFlow81_LiteralBoolean82 = nullptr;
						LiteralIntegerPtr PolymorphismTest_main_runTests_ObjectFlow81_LiteralInteger83 = nullptr;
					ControlFlowPtr PolymorphismTest_main_runTests_ControlFlow84 = nullptr;
					CallOperationActionPtr PolymorphismTest_main_runTests_Call_o3_ = nullptr;
						InputPinPtr PolymorphismTest_main_runTests_Call_o3__target = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_main_runTests_Call_o3__target_LiteralUnlimitedNatural85 = nullptr;
							LiteralIntegerPtr PolymorphismTest_main_runTests_Call_o3__target_LiteralInteger86 = nullptr;
						InputPinPtr PolymorphismTest_main_runTests_Call_o3__i = nullptr;
							LiteralIntegerPtr PolymorphismTest_main_runTests_Call_o3__i_LiteralInteger87 = nullptr;
							LiteralIntegerPtr PolymorphismTest_main_runTests_Call_o3__i_LiteralInteger88 = nullptr;
					CallOperationActionPtr PolymorphismTest_main_runTests_Call_A_x_ = nullptr;
						InputPinPtr PolymorphismTest_main_runTests_Call_A_x__target = nullptr;
							LiteralIntegerPtr PolymorphismTest_main_runTests_Call_A_x__target_LiteralInteger89 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_main_runTests_Call_A_x__target_LiteralUnlimitedNatural90 = nullptr;
					CallOperationActionPtr PolymorphismTest_main_runTests_Call_U_o1_ = nullptr;
						InputPinPtr PolymorphismTest_main_runTests_Call_U_o1__target = nullptr;
						InputPinPtr PolymorphismTest_main_runTests_Call_U_o1__b = nullptr;
							LiteralIntegerPtr PolymorphismTest_main_runTests_Call_U_o1__b_LiteralInteger91 = nullptr;
							LiteralIntegerPtr PolymorphismTest_main_runTests_Call_U_o1__b_LiteralInteger92 = nullptr;
						OutputPinPtr PolymorphismTest_main_runTests_Call_U_o1__a = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_main_runTests_Call_U_o1__a_LiteralUnlimitedNatural93 = nullptr;
							LiteralIntegerPtr PolymorphismTest_main_runTests_Call_U_o1__a_LiteralInteger94 = nullptr;
							LiteralIntegerPtr PolymorphismTest_main_runTests_Call_U_o1__a_LiteralInteger95 = nullptr;
					ObjectFlowPtr PolymorphismTest_main_runTests_ObjectFlow96 = nullptr;
						LiteralBooleanPtr PolymorphismTest_main_runTests_ObjectFlow96_LiteralBoolean97 = nullptr;
						LiteralIntegerPtr PolymorphismTest_main_runTests_ObjectFlow96_LiteralInteger98 = nullptr;
					CallOperationActionPtr PolymorphismTest_main_runTests_Call_o4_ = nullptr;
						InputPinPtr PolymorphismTest_main_runTests_Call_o4__target = nullptr;
							LiteralIntegerPtr PolymorphismTest_main_runTests_Call_o4__target_LiteralInteger99 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_main_runTests_Call_o4__target_LiteralUnlimitedNatural100 = nullptr;
					ObjectFlowPtr PolymorphismTest_main_runTests_ObjectFlow101 = nullptr;
						LiteralBooleanPtr PolymorphismTest_main_runTests_ObjectFlow101_LiteralBoolean102 = nullptr;
						LiteralIntegerPtr PolymorphismTest_main_runTests_ObjectFlow101_LiteralInteger103 = nullptr;
					ParameterPtr PolymorphismTest_main_runTests_u = nullptr;
					ObjectFlowPtr PolymorphismTest_main_runTests_ObjectFlow104 = nullptr;
						LiteralIntegerPtr PolymorphismTest_main_runTests_ObjectFlow104_LiteralInteger105 = nullptr;
						LiteralBooleanPtr PolymorphismTest_main_runTests_ObjectFlow104_LiteralBoolean106 = nullptr;
					ObjectFlowPtr PolymorphismTest_main_runTests_ObjectFlow107 = nullptr;
						LiteralIntegerPtr PolymorphismTest_main_runTests_ObjectFlow107_LiteralInteger108 = nullptr;
						LiteralBooleanPtr PolymorphismTest_main_runTests_ObjectFlow107_LiteralBoolean109 = nullptr;
					ControlFlowPtr PolymorphismTest_main_runTests_ControlFlow110 = nullptr;
					ActivityParameterNodePtr PolymorphismTest_main_runTests_u_node = nullptr;
						LiteralIntegerPtr PolymorphismTest_main_runTests_u_node_LiteralInteger111 = nullptr;
					ControlFlowPtr PolymorphismTest_main_runTests_ControlFlow112 = nullptr;
					ForkNodePtr PolymorphismTest_main_runTests_Fork_u = nullptr;
					CallOperationActionPtr PolymorphismTest_main_runTests_Call_o2_ = nullptr;
						OutputPinPtr PolymorphismTest_main_runTests_Call_o2__a = nullptr;
							LiteralIntegerPtr PolymorphismTest_main_runTests_Call_o2__a_LiteralInteger113 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_main_runTests_Call_o2__a_LiteralUnlimitedNatural114 = nullptr;
							LiteralIntegerPtr PolymorphismTest_main_runTests_Call_o2__a_LiteralInteger115 = nullptr;
						InputPinPtr PolymorphismTest_main_runTests_Call_o2__target = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_main_runTests_Call_o2__target_LiteralUnlimitedNatural116 = nullptr;
							LiteralIntegerPtr PolymorphismTest_main_runTests_Call_o2__target_LiteralInteger117 = nullptr;
						InputPinPtr PolymorphismTest_main_runTests_Call_o2__b = nullptr;
							LiteralIntegerPtr PolymorphismTest_main_runTests_Call_o2__b_LiteralInteger118 = nullptr;
							LiteralIntegerPtr PolymorphismTest_main_runTests_Call_o2__b_LiteralInteger119 = nullptr;
					ObjectFlowPtr PolymorphismTest_main_runTests_ObjectFlow120 = nullptr;
						LiteralBooleanPtr PolymorphismTest_main_runTests_ObjectFlow120_LiteralBoolean121 = nullptr;
						LiteralIntegerPtr PolymorphismTest_main_runTests_ObjectFlow120_LiteralInteger122 = nullptr;
					ObjectFlowPtr PolymorphismTest_main_runTests_ObjectFlow123 = nullptr;
						LiteralBooleanPtr PolymorphismTest_main_runTests_ObjectFlow123_LiteralBoolean124 = nullptr;
						LiteralIntegerPtr PolymorphismTest_main_runTests_ObjectFlow123_LiteralInteger125 = nullptr;
					ControlFlowPtr PolymorphismTest_main_runTests_ControlFlow126 = nullptr;
					ControlFlowPtr PolymorphismTest_main_runTests_ControlFlow127 = nullptr;
					CallOperationActionPtr PolymorphismTest_main_runTests_Call_o1_ = nullptr;
						InputPinPtr PolymorphismTest_main_runTests_Call_o1__target = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_main_runTests_Call_o1__target_LiteralUnlimitedNatural128 = nullptr;
							LiteralIntegerPtr PolymorphismTest_main_runTests_Call_o1__target_LiteralInteger129 = nullptr;
						InputPinPtr PolymorphismTest_main_runTests_Call_o1__b = nullptr;
							LiteralIntegerPtr PolymorphismTest_main_runTests_Call_o1__b_LiteralInteger130 = nullptr;
							LiteralIntegerPtr PolymorphismTest_main_runTests_Call_o1__b_LiteralInteger131 = nullptr;
						OutputPinPtr PolymorphismTest_main_runTests_Call_o1__a = nullptr;
							LiteralIntegerPtr PolymorphismTest_main_runTests_Call_o1__a_LiteralInteger132 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_main_runTests_Call_o1__a_LiteralUnlimitedNatural133 = nullptr;
							LiteralIntegerPtr PolymorphismTest_main_runTests_Call_o1__a_LiteralInteger134 = nullptr;
				CreateObjectActionPtr PolymorphismTest_main_Create_S = nullptr;
					OutputPinPtr PolymorphismTest_main_Create_S_result = nullptr;
						LiteralIntegerPtr PolymorphismTest_main_Create_S_result_LiteralInteger135 = nullptr;
						LiteralUnlimitedNaturalPtr PolymorphismTest_main_Create_S_result_LiteralUnlimitedNatural136 = nullptr;
				ObjectFlowPtr PolymorphismTest_main_ObjectFlow137 = nullptr;
					LiteralBooleanPtr PolymorphismTest_main_ObjectFlow137_LiteralBoolean138 = nullptr;
					LiteralIntegerPtr PolymorphismTest_main_ObjectFlow137_LiteralInteger139 = nullptr;
			Class_Ptr PolymorphismTest_T = nullptr;
				ActivityPtr PolymorphismTest_T_o4_method = nullptr;
					ValueSpecificationActionPtr PolymorphismTest_T_o4_method_Message = nullptr;
						OutputPinPtr PolymorphismTest_T_o4_method_Message_result = nullptr;
							LiteralIntegerPtr PolymorphismTest_T_o4_method_Message_result_LiteralInteger140 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_T_o4_method_Message_result_LiteralUnlimitedNatural141 = nullptr;
						LiteralStringPtr PolymorphismTest_T_o4_method_Message_LiteralString142 = nullptr;
					CallBehaviorActionPtr PolymorphismTest_T_o4_method_Call_WriteLine = nullptr;
						OutputPinPtr PolymorphismTest_T_o4_method_Call_WriteLine_errorStatus = nullptr;
							LiteralIntegerPtr PolymorphismTest_T_o4_method_Call_WriteLine_errorStatus_LiteralInteger143 = nullptr;
							LiteralIntegerPtr PolymorphismTest_T_o4_method_Call_WriteLine_errorStatus_LiteralInteger144 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_T_o4_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural145 = nullptr;
						InputPinPtr PolymorphismTest_T_o4_method_Call_WriteLine_value = nullptr;
							LiteralIntegerPtr PolymorphismTest_T_o4_method_Call_WriteLine_value_LiteralInteger146 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_T_o4_method_Call_WriteLine_value_LiteralUnlimitedNatural147 = nullptr;
							LiteralIntegerPtr PolymorphismTest_T_o4_method_Call_WriteLine_value_LiteralInteger148 = nullptr;
					ObjectFlowPtr PolymorphismTest_T_o4_method_ObjectFlow149 = nullptr;
						LiteralBooleanPtr PolymorphismTest_T_o4_method_ObjectFlow149_LiteralBoolean150 = nullptr;
						LiteralIntegerPtr PolymorphismTest_T_o4_method_ObjectFlow149_LiteralInteger151 = nullptr;
				OperationPtr PolymorphismTest_T_o3_Integer = nullptr;
					ParameterPtr PolymorphismTest_T_o3_Integer_i = nullptr;
				ActivityPtr PolymorphismTest_T_o1_method = nullptr;
					ValueSpecificationActionPtr PolymorphismTest_T_o1_method_Message = nullptr;
						LiteralStringPtr PolymorphismTest_T_o1_method_Message_LiteralString152 = nullptr;
						OutputPinPtr PolymorphismTest_T_o1_method_Message_result = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_T_o1_method_Message_result_LiteralUnlimitedNatural153 = nullptr;
							LiteralIntegerPtr PolymorphismTest_T_o1_method_Message_result_LiteralInteger154 = nullptr;
					CallBehaviorActionPtr PolymorphismTest_T_o1_method_Call_WriteLine = nullptr;
						OutputPinPtr PolymorphismTest_T_o1_method_Call_WriteLine_errorStatus = nullptr;
							LiteralIntegerPtr PolymorphismTest_T_o1_method_Call_WriteLine_errorStatus_LiteralInteger155 = nullptr;
							LiteralIntegerPtr PolymorphismTest_T_o1_method_Call_WriteLine_errorStatus_LiteralInteger156 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_T_o1_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural157 = nullptr;
						InputPinPtr PolymorphismTest_T_o1_method_Call_WriteLine_value = nullptr;
							LiteralIntegerPtr PolymorphismTest_T_o1_method_Call_WriteLine_value_LiteralInteger158 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_T_o1_method_Call_WriteLine_value_LiteralUnlimitedNatural159 = nullptr;
							LiteralIntegerPtr PolymorphismTest_T_o1_method_Call_WriteLine_value_LiteralInteger160 = nullptr;
					ActivityParameterNodePtr PolymorphismTest_T_o1_method_b_node = nullptr;
						LiteralIntegerPtr PolymorphismTest_T_o1_method_b_node_LiteralInteger161 = nullptr;
					ParameterPtr PolymorphismTest_T_o1_method_a = nullptr;
					ActivityParameterNodePtr PolymorphismTest_T_o1_method_a_node = nullptr;
						LiteralIntegerPtr PolymorphismTest_T_o1_method_a_node_LiteralInteger162 = nullptr;
					ObjectFlowPtr PolymorphismTest_T_o1_method_ObjectFlow163 = nullptr;
						LiteralBooleanPtr PolymorphismTest_T_o1_method_ObjectFlow163_LiteralBoolean164 = nullptr;
						LiteralIntegerPtr PolymorphismTest_T_o1_method_ObjectFlow163_LiteralInteger165 = nullptr;
					ParameterPtr PolymorphismTest_T_o1_method_b = nullptr;
				ActivityPtr PolymorphismTest_T_o3_method = nullptr;
					ObjectFlowPtr PolymorphismTest_T_o3_method_ObjectFlow166 = nullptr;
						LiteralIntegerPtr PolymorphismTest_T_o3_method_ObjectFlow166_LiteralInteger167 = nullptr;
						LiteralBooleanPtr PolymorphismTest_T_o3_method_ObjectFlow166_LiteralBoolean168 = nullptr;
					CallBehaviorActionPtr PolymorphismTest_T_o3_method_Call_WriteLine = nullptr;
						OutputPinPtr PolymorphismTest_T_o3_method_Call_WriteLine_errorStatus = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_T_o3_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural169 = nullptr;
							LiteralIntegerPtr PolymorphismTest_T_o3_method_Call_WriteLine_errorStatus_LiteralInteger170 = nullptr;
							LiteralIntegerPtr PolymorphismTest_T_o3_method_Call_WriteLine_errorStatus_LiteralInteger171 = nullptr;
						InputPinPtr PolymorphismTest_T_o3_method_Call_WriteLine_value = nullptr;
							LiteralIntegerPtr PolymorphismTest_T_o3_method_Call_WriteLine_value_LiteralInteger172 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_T_o3_method_Call_WriteLine_value_LiteralUnlimitedNatural173 = nullptr;
							LiteralIntegerPtr PolymorphismTest_T_o3_method_Call_WriteLine_value_LiteralInteger174 = nullptr;
					ParameterPtr PolymorphismTest_T_o3_method_i = nullptr;
					ActivityParameterNodePtr PolymorphismTest_T_o3_method_i_node = nullptr;
						LiteralIntegerPtr PolymorphismTest_T_o3_method_i_node_LiteralInteger175 = nullptr;
					ValueSpecificationActionPtr PolymorphismTest_T_o3_method_Message = nullptr;
						OutputPinPtr PolymorphismTest_T_o3_method_Message_result = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_T_o3_method_Message_result_LiteralUnlimitedNatural176 = nullptr;
							LiteralIntegerPtr PolymorphismTest_T_o3_method_Message_result_LiteralInteger177 = nullptr;
						LiteralStringPtr PolymorphismTest_T_o3_method_Message_LiteralString178 = nullptr;
				OperationPtr PolymorphismTest_T_o4 = nullptr;
				GeneralizationPtr PolymorphismTest_T_Generalization179 = nullptr;
				ActivityPtr PolymorphismTest_T_o2_method = nullptr;
					ParameterPtr PolymorphismTest_T_o2_method_b = nullptr;
					ObjectFlowPtr PolymorphismTest_T_o2_method_ObjectFlow180 = nullptr;
						LiteralIntegerPtr PolymorphismTest_T_o2_method_ObjectFlow180_LiteralInteger181 = nullptr;
						LiteralBooleanPtr PolymorphismTest_T_o2_method_ObjectFlow180_LiteralBoolean182 = nullptr;
					CallBehaviorActionPtr PolymorphismTest_T_o2_method_Call_WriteLine = nullptr;
						InputPinPtr PolymorphismTest_T_o2_method_Call_WriteLine_value = nullptr;
							LiteralIntegerPtr PolymorphismTest_T_o2_method_Call_WriteLine_value_LiteralInteger183 = nullptr;
							LiteralIntegerPtr PolymorphismTest_T_o2_method_Call_WriteLine_value_LiteralInteger184 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_T_o2_method_Call_WriteLine_value_LiteralUnlimitedNatural185 = nullptr;
						OutputPinPtr PolymorphismTest_T_o2_method_Call_WriteLine_errorStatus = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_T_o2_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural186 = nullptr;
							LiteralIntegerPtr PolymorphismTest_T_o2_method_Call_WriteLine_errorStatus_LiteralInteger187 = nullptr;
							LiteralIntegerPtr PolymorphismTest_T_o2_method_Call_WriteLine_errorStatus_LiteralInteger188 = nullptr;
					ParameterPtr PolymorphismTest_T_o2_method_result = nullptr;
					ValueSpecificationActionPtr PolymorphismTest_T_o2_method_Message = nullptr;
						OutputPinPtr PolymorphismTest_T_o2_method_Message_result = nullptr;
							LiteralIntegerPtr PolymorphismTest_T_o2_method_Message_result_LiteralInteger189 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_T_o2_method_Message_result_LiteralUnlimitedNatural190 = nullptr;
						LiteralStringPtr PolymorphismTest_T_o2_method_Message_LiteralString191 = nullptr;
					ActivityParameterNodePtr PolymorphismTest_T_o2_method_b_node = nullptr;
						LiteralIntegerPtr PolymorphismTest_T_o2_method_b_node_LiteralInteger192 = nullptr;
					ActivityParameterNodePtr PolymorphismTest_T_o2_method_result_node = nullptr;
						LiteralIntegerPtr PolymorphismTest_T_o2_method_result_node_LiteralInteger193 = nullptr;
				OperationPtr PolymorphismTest_T_B_o2_B = nullptr;
					ParameterPtr PolymorphismTest_T_B_o2_B_result = nullptr;
					ParameterPtr PolymorphismTest_T_B_o2_B_b = nullptr;
				OperationPtr PolymorphismTest_T_A_o1_B = nullptr;
					ParameterPtr PolymorphismTest_T_A_o1_B_b = nullptr;
					ParameterPtr PolymorphismTest_T_A_o1_B_a = nullptr;
			Class_Ptr PolymorphismTest_S = nullptr;
				ActivityPtr PolymorphismTest_S_o1_method = nullptr;
					ParameterPtr PolymorphismTest_S_o1_method_b = nullptr;
					ObjectFlowPtr PolymorphismTest_S_o1_method_ObjectFlow194 = nullptr;
						LiteralIntegerPtr PolymorphismTest_S_o1_method_ObjectFlow194_LiteralInteger195 = nullptr;
						LiteralBooleanPtr PolymorphismTest_S_o1_method_ObjectFlow194_LiteralBoolean196 = nullptr;
					ActivityParameterNodePtr PolymorphismTest_S_o1_method_a_node = nullptr;
						LiteralIntegerPtr PolymorphismTest_S_o1_method_a_node_LiteralInteger197 = nullptr;
					ValueSpecificationActionPtr PolymorphismTest_S_o1_method_Message = nullptr;
						OutputPinPtr PolymorphismTest_S_o1_method_Message_result = nullptr;
							LiteralIntegerPtr PolymorphismTest_S_o1_method_Message_result_LiteralInteger198 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_S_o1_method_Message_result_LiteralUnlimitedNatural199 = nullptr;
						LiteralStringPtr PolymorphismTest_S_o1_method_Message_LiteralString200 = nullptr;
					ActivityParameterNodePtr PolymorphismTest_S_o1_method_b_node = nullptr;
						LiteralIntegerPtr PolymorphismTest_S_o1_method_b_node_LiteralInteger201 = nullptr;
					ParameterPtr PolymorphismTest_S_o1_method_a = nullptr;
					CallBehaviorActionPtr PolymorphismTest_S_o1_method_Call_WriteLine = nullptr;
						OutputPinPtr PolymorphismTest_S_o1_method_Call_WriteLine_errorStatus = nullptr;
							LiteralIntegerPtr PolymorphismTest_S_o1_method_Call_WriteLine_errorStatus_LiteralInteger202 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_S_o1_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural203 = nullptr;
							LiteralIntegerPtr PolymorphismTest_S_o1_method_Call_WriteLine_errorStatus_LiteralInteger204 = nullptr;
						InputPinPtr PolymorphismTest_S_o1_method_Call_WriteLine_value = nullptr;
							LiteralIntegerPtr PolymorphismTest_S_o1_method_Call_WriteLine_value_LiteralInteger205 = nullptr;
							LiteralIntegerPtr PolymorphismTest_S_o1_method_Call_WriteLine_value_LiteralInteger206 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_S_o1_method_Call_WriteLine_value_LiteralUnlimitedNatural207 = nullptr;
				ActivityPtr PolymorphismTest_S_o3_method = nullptr;
					ObjectFlowPtr PolymorphismTest_S_o3_method_ObjectFlow208 = nullptr;
						LiteralBooleanPtr PolymorphismTest_S_o3_method_ObjectFlow208_LiteralBoolean209 = nullptr;
						LiteralIntegerPtr PolymorphismTest_S_o3_method_ObjectFlow208_LiteralInteger210 = nullptr;
					ValueSpecificationActionPtr PolymorphismTest_S_o3_method_Message = nullptr;
						LiteralStringPtr PolymorphismTest_S_o3_method_Message_LiteralString211 = nullptr;
						OutputPinPtr PolymorphismTest_S_o3_method_Message_result = nullptr;
							LiteralIntegerPtr PolymorphismTest_S_o3_method_Message_result_LiteralInteger212 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_S_o3_method_Message_result_LiteralUnlimitedNatural213 = nullptr;
					CallBehaviorActionPtr PolymorphismTest_S_o3_method_Call_WriteLine = nullptr;
						InputPinPtr PolymorphismTest_S_o3_method_Call_WriteLine_value = nullptr;
							LiteralIntegerPtr PolymorphismTest_S_o3_method_Call_WriteLine_value_LiteralInteger214 = nullptr;
							LiteralIntegerPtr PolymorphismTest_S_o3_method_Call_WriteLine_value_LiteralInteger215 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_S_o3_method_Call_WriteLine_value_LiteralUnlimitedNatural216 = nullptr;
						OutputPinPtr PolymorphismTest_S_o3_method_Call_WriteLine_errorStatus = nullptr;
							LiteralIntegerPtr PolymorphismTest_S_o3_method_Call_WriteLine_errorStatus_LiteralInteger217 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_S_o3_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural218 = nullptr;
							LiteralIntegerPtr PolymorphismTest_S_o3_method_Call_WriteLine_errorStatus_LiteralInteger219 = nullptr;
				ActivityPtr PolymorphismTest_S_o5_method = nullptr;
					CallBehaviorActionPtr PolymorphismTest_S_o5_method_Call_WriteLine = nullptr;
						OutputPinPtr PolymorphismTest_S_o5_method_Call_WriteLine_errorStatus = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_S_o5_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural220 = nullptr;
							LiteralIntegerPtr PolymorphismTest_S_o5_method_Call_WriteLine_errorStatus_LiteralInteger221 = nullptr;
							LiteralIntegerPtr PolymorphismTest_S_o5_method_Call_WriteLine_errorStatus_LiteralInteger222 = nullptr;
						InputPinPtr PolymorphismTest_S_o5_method_Call_WriteLine_value = nullptr;
							LiteralIntegerPtr PolymorphismTest_S_o5_method_Call_WriteLine_value_LiteralInteger223 = nullptr;
							LiteralIntegerPtr PolymorphismTest_S_o5_method_Call_WriteLine_value_LiteralInteger224 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_S_o5_method_Call_WriteLine_value_LiteralUnlimitedNatural225 = nullptr;
					ValueSpecificationActionPtr PolymorphismTest_S_o5_method_Message = nullptr;
						LiteralStringPtr PolymorphismTest_S_o5_method_Message_LiteralString226 = nullptr;
						OutputPinPtr PolymorphismTest_S_o5_method_Message_result = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_S_o5_method_Message_result_LiteralUnlimitedNatural227 = nullptr;
							LiteralIntegerPtr PolymorphismTest_S_o5_method_Message_result_LiteralInteger228 = nullptr;
					ObjectFlowPtr PolymorphismTest_S_o5_method_ObjectFlow229 = nullptr;
						LiteralIntegerPtr PolymorphismTest_S_o5_method_ObjectFlow229_LiteralInteger230 = nullptr;
						LiteralBooleanPtr PolymorphismTest_S_o5_method_ObjectFlow229_LiteralBoolean231 = nullptr;
				OperationPtr PolymorphismTest_S_o5 = nullptr;
				GeneralizationPtr PolymorphismTest_S_Generalization232 = nullptr;
				ActivityPtr PolymorphismTest_S_o2_method = nullptr;
					ParameterPtr PolymorphismTest_S_o2_method_b = nullptr;
					ActivityParameterNodePtr PolymorphismTest_S_o2_method_a_node = nullptr;
						LiteralIntegerPtr PolymorphismTest_S_o2_method_a_node_LiteralInteger233 = nullptr;
					ParameterPtr PolymorphismTest_S_o2_method_a = nullptr;
					ValueSpecificationActionPtr PolymorphismTest_S_o2_method_Message = nullptr;
						LiteralStringPtr PolymorphismTest_S_o2_method_Message_LiteralString234 = nullptr;
						OutputPinPtr PolymorphismTest_S_o2_method_Message_result = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_S_o2_method_Message_result_LiteralUnlimitedNatural235 = nullptr;
							LiteralIntegerPtr PolymorphismTest_S_o2_method_Message_result_LiteralInteger236 = nullptr;
					CallBehaviorActionPtr PolymorphismTest_S_o2_method_Call_WriteLine = nullptr;
						OutputPinPtr PolymorphismTest_S_o2_method_Call_WriteLine_errorStatus = nullptr;
							LiteralIntegerPtr PolymorphismTest_S_o2_method_Call_WriteLine_errorStatus_LiteralInteger237 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_S_o2_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural238 = nullptr;
							LiteralIntegerPtr PolymorphismTest_S_o2_method_Call_WriteLine_errorStatus_LiteralInteger239 = nullptr;
						InputPinPtr PolymorphismTest_S_o2_method_Call_WriteLine_value = nullptr;
							LiteralIntegerPtr PolymorphismTest_S_o2_method_Call_WriteLine_value_LiteralInteger240 = nullptr;
							LiteralUnlimitedNaturalPtr PolymorphismTest_S_o2_method_Call_WriteLine_value_LiteralUnlimitedNatural241 = nullptr;
							LiteralIntegerPtr PolymorphismTest_S_o2_method_Call_WriteLine_value_LiteralInteger242 = nullptr;
					ActivityParameterNodePtr PolymorphismTest_S_o2_method_b_node = nullptr;
						LiteralIntegerPtr PolymorphismTest_S_o2_method_b_node_LiteralInteger243 = nullptr;
					ObjectFlowPtr PolymorphismTest_S_o2_method_ObjectFlow244 = nullptr;
						LiteralIntegerPtr PolymorphismTest_S_o2_method_ObjectFlow244_LiteralInteger245 = nullptr;
						LiteralBooleanPtr PolymorphismTest_S_o2_method_ObjectFlow244_LiteralBoolean246 = nullptr;
				OperationPtr PolymorphismTest_S_A_o1_B = nullptr;
					ParameterPtr PolymorphismTest_S_A_o1_B_a = nullptr;
					ParameterPtr PolymorphismTest_S_A_o1_B_b = nullptr;
				OperationPtr PolymorphismTest_S_B_o2_A = nullptr;
					ParameterPtr PolymorphismTest_S_B_o2_A_a = nullptr;
					ParameterPtr PolymorphismTest_S_B_o2_A_b = nullptr;
				OperationPtr PolymorphismTest_S_o3 = nullptr;

		public:
			virtual ~PolymorphismTestModel();
			static const std::shared_ptr<PolymorphismTestModel>& Instance();

		private:
			PolymorphismTestModel();
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

#endif /* POLYMORPHISMTEST_MODEL_H */
