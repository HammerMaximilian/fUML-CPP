/*
 * AssemblyConnectors_PWP_PWPModel.h
 * 
 * Auto-generated file
 */

#ifndef ASSEMBLYCONNECTORS_PWP_PWP_MODEL_H
#define ASSEMBLYCONNECTORS_PWP_PWP_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace AssemblyConnectors_PWP_PWP
{
	class AssemblyConnectors_PWP_PWPModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model AssemblyConnectors_PWP_PWP
		 */
		PackagePtr AssemblyConnectors_PWP_PWP = nullptr;
			ActivityPtr AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern = nullptr;
				ActivityParameterNodePtr AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node_LiteralInteger0 = nullptr;
				ParameterPtr AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_a_Empty_Pattern = nullptr;
				ObjectFlowPtr AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_ObjectFlow1 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_ObjectFlow1_LiteralInteger2 = nullptr;
					LiteralBooleanPtr AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_ObjectFlow1_LiteralBoolean3 = nullptr;
				ValueSpecificationActionPtr AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message = nullptr;
					OutputPinPtr AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_result = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_result_LiteralUnlimitedNatural4 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_result_LiteralInteger5 = nullptr;
					LiteralStringPtr AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_LiteralString6 = nullptr;
				CallBehaviorActionPtr AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine = nullptr;
					InputPinPtr AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_value = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_value_LiteralInteger7 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_value_LiteralInteger8 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_value_LiteralUnlimitedNatural9 = nullptr;
					OutputPinPtr AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_errorStatus = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger10 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural11 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger12 = nullptr;
			AssociationPtr AssemblyConnectors_PWP_PWP_R = nullptr;
				PropertyPtr AssemblyConnectors_PWP_PWP_R_x = nullptr;
					LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_R_x_LiteralUnlimitedNatural13 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_R_x_LiteralInteger14 = nullptr;
				PropertyPtr AssemblyConnectors_PWP_PWP_R_y = nullptr;
					LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_R_y_LiteralUnlimitedNatural15 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_R_y_LiteralInteger16 = nullptr;
			ActivityPtr AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern = nullptr;
				ObjectFlowPtr AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow17 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow17_LiteralInteger18 = nullptr;
					LiteralBooleanPtr AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow17_LiteralBoolean19 = nullptr;
				CreateObjectActionPtr AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern = nullptr;
					OutputPinPtr AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralUnlimitedNatural20 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralInteger21 = nullptr;
				ParameterPtr AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern = nullptr;
				CallOperationActionPtr AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern_ = nullptr;
					OutputPinPtr AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger22 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralUnlimitedNatural23 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger24 = nullptr;
					InputPinPtr AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralUnlimitedNatural25 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralInteger26 = nullptr;
				ObjectFlowPtr AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow27 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow27_LiteralInteger28 = nullptr;
					LiteralBooleanPtr AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow27_LiteralBoolean29 = nullptr;
				ActivityParameterNodePtr AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger30 = nullptr;
			Class_Ptr AssemblyConnectors_PWP_PWP_C = nullptr;
				PortPtr AssemblyConnectors_PWP_PWP_C_q = nullptr;
					LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_C_q_LiteralUnlimitedNatural31 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_C_q_LiteralInteger32 = nullptr;
			Class_Ptr AssemblyConnectors_PWP_PWP_B = nullptr;
				PortPtr AssemblyConnectors_PWP_PWP_B_p = nullptr;
					LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_B_p_LiteralUnlimitedNatural33 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_B_p_LiteralInteger34 = nullptr;
			ActivityPtr AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern = nullptr;
				CreateObjectActionPtr AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern = nullptr;
					OutputPinPtr AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralInteger35 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralUnlimitedNatural36 = nullptr;
				ActivityParameterNodePtr AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node = nullptr;
				ParameterPtr AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern = nullptr;
				CallOperationActionPtr AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_ = nullptr;
					OutputPinPtr AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralUnlimitedNatural37 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger38 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger39 = nullptr;
					InputPinPtr AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralInteger40 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralUnlimitedNatural41 = nullptr;
				ObjectFlowPtr AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow42 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow42_LiteralInteger43 = nullptr;
					LiteralBooleanPtr AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow42_LiteralBoolean44 = nullptr;
				ObjectFlowPtr AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow45 = nullptr;
					LiteralBooleanPtr AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow45_LiteralBoolean46 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow45_LiteralInteger47 = nullptr;
			Class_Ptr AssemblyConnectors_PWP_PWP_A_Star_Pattern = nullptr;
				CommentPtr AssemblyConnectors_PWP_PWP_A_Star_Pattern_Comment48 = nullptr;
				PropertyPtr AssemblyConnectors_PWP_PWP_A_Star_Pattern_partC = nullptr;
					LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_A_Star_Pattern_partC_LiteralUnlimitedNatural49 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_A_Star_Pattern_partC_LiteralInteger50 = nullptr;
				OperationPtr AssemblyConnectors_PWP_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern = nullptr;
					ParameterPtr AssemblyConnectors_PWP_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result = nullptr;
				ConnectorPtr AssemblyConnectors_PWP_PWP_A_Star_Pattern_r = nullptr;
					ConnectorEndPtr AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd51 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd51_connectorEnd_2_Lower = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd51_connectorEnd_2_Upper = nullptr;
					ConnectorEndPtr AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd52 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd52_connectorEnd_1_Upper = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd52_connectorEnd_1_Lower = nullptr;
				PropertyPtr AssemblyConnectors_PWP_PWP_A_Star_Pattern_partB = nullptr;
					LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_A_Star_Pattern_partB_LiteralUnlimitedNatural53 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_A_Star_Pattern_partB_LiteralInteger54 = nullptr;
			ActivityPtr AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern = nullptr;
				ParameterPtr AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern = nullptr;
				CallBehaviorActionPtr AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine = nullptr;
					OutputPinPtr AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger55 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger56 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural57 = nullptr;
					InputPinPtr AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_value = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger58 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger59 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_value_LiteralUnlimitedNatural60 = nullptr;
				ObjectFlowPtr AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_ObjectFlow61 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_ObjectFlow61_LiteralInteger62 = nullptr;
					LiteralBooleanPtr AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_ObjectFlow61_LiteralBoolean63 = nullptr;
				ActivityParameterNodePtr AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node_LiteralInteger64 = nullptr;
				ValueSpecificationActionPtr AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message = nullptr;
					LiteralStringPtr AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_LiteralString65 = nullptr;
					OutputPinPtr AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_result = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_result_LiteralInteger66 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_result_LiteralUnlimitedNatural67 = nullptr;
			ActivityPtr AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern = nullptr;
				ActivityParameterNodePtr AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_a_Array_Pattern_node = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger68 = nullptr;
				ValueSpecificationActionPtr AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message = nullptr;
					LiteralStringPtr AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_LiteralString69 = nullptr;
					OutputPinPtr AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_result = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_result_LiteralUnlimitedNatural70 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_result_LiteralInteger71 = nullptr;
				ParameterPtr AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_a_Array_Pattern = nullptr;
				CallBehaviorActionPtr AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine = nullptr;
					OutputPinPtr AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_errorStatus = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural72 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger73 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger74 = nullptr;
					InputPinPtr AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_value = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_value_LiteralUnlimitedNatural75 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_value_LiteralInteger76 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_value_LiteralInteger77 = nullptr;
				ObjectFlowPtr AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_ObjectFlow78 = nullptr;
					LiteralBooleanPtr AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_ObjectFlow78_LiteralBoolean79 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_ObjectFlow78_LiteralInteger80 = nullptr;
			ActivityPtr AssemblyConnectors_PWP_PWP_main = nullptr;
				ObjectFlowPtr AssemblyConnectors_PWP_PWP_main_ObjectFlow81 = nullptr;
					LiteralBooleanPtr AssemblyConnectors_PWP_PWP_main_ObjectFlow81_LiteralBoolean82 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_main_ObjectFlow81_LiteralInteger83 = nullptr;
				CallBehaviorActionPtr AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern = nullptr;
					OutputPinPtr AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural84 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger85 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger86 = nullptr;
				ObjectFlowPtr AssemblyConnectors_PWP_PWP_main_ObjectFlow87 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_main_ObjectFlow87_LiteralInteger88 = nullptr;
					LiteralBooleanPtr AssemblyConnectors_PWP_PWP_main_ObjectFlow87_LiteralBoolean89 = nullptr;
				CallBehaviorActionPtr AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern = nullptr;
					InputPinPtr AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern_a_Array_Pattern = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger90 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural91 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger92 = nullptr;
				CallBehaviorActionPtr AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern = nullptr;
					InputPinPtr AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger93 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger94 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural95 = nullptr;
				CallBehaviorActionPtr AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern = nullptr;
					OutputPinPtr AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger96 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger97 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural98 = nullptr;
				CallBehaviorActionPtr AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern = nullptr;
					InputPinPtr AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern_a_Star_Pattern = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger99 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural100 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger101 = nullptr;
				CallBehaviorActionPtr AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern = nullptr;
					InputPinPtr AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger102 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural103 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger104 = nullptr;
				ObjectFlowPtr AssemblyConnectors_PWP_PWP_main_ObjectFlow105 = nullptr;
					LiteralBooleanPtr AssemblyConnectors_PWP_PWP_main_ObjectFlow105_LiteralBoolean106 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_main_ObjectFlow105_LiteralInteger107 = nullptr;
				ControlFlowPtr AssemblyConnectors_PWP_PWP_main_ControlFlow108 = nullptr;
				ControlFlowPtr AssemblyConnectors_PWP_PWP_main_ControlFlow109 = nullptr;
				ControlFlowPtr AssemblyConnectors_PWP_PWP_main_ControlFlow110 = nullptr;
				CallBehaviorActionPtr AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern = nullptr;
					OutputPinPtr AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger111 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural112 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger113 = nullptr;
				CallBehaviorActionPtr AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern = nullptr;
					OutputPinPtr AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural114 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger115 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger116 = nullptr;
				ObjectFlowPtr AssemblyConnectors_PWP_PWP_main_ObjectFlow117 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_main_ObjectFlow117_LiteralInteger118 = nullptr;
					LiteralBooleanPtr AssemblyConnectors_PWP_PWP_main_ObjectFlow117_LiteralBoolean119 = nullptr;
			Class_Ptr AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern = nullptr;
				CommentPtr AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_Comment120 = nullptr;
				PropertyPtr AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partC = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partC_LiteralInteger121 = nullptr;
					LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partC_LiteralUnlimitedNatural122 = nullptr;
				PropertyPtr AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partB = nullptr;
					LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partB_LiteralUnlimitedNatural123 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partB_LiteralInteger124 = nullptr;
				ConnectorPtr AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r = nullptr;
					ConnectorEndPtr AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd125 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd125_connectorEnd_2_Lower = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd125_connectorEnd_2_Upper = nullptr;
					ConnectorEndPtr AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd126 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd126_connectorEnd_1_Lower = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd126_connectorEnd_1_Upper = nullptr;
				OperationPtr AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern = nullptr;
					ParameterPtr AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result = nullptr;
			Class_Ptr AssemblyConnectors_PWP_PWP_A_Array_Pattern = nullptr;
				PropertyPtr AssemblyConnectors_PWP_PWP_A_Array_Pattern_partB = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_A_Array_Pattern_partB_LiteralInteger127 = nullptr;
					LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_A_Array_Pattern_partB_LiteralUnlimitedNatural128 = nullptr;
				PropertyPtr AssemblyConnectors_PWP_PWP_A_Array_Pattern_partC = nullptr;
					LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_A_Array_Pattern_partC_LiteralUnlimitedNatural129 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_A_Array_Pattern_partC_LiteralInteger130 = nullptr;
				CommentPtr AssemblyConnectors_PWP_PWP_A_Array_Pattern_Comment131 = nullptr;
				ConnectorPtr AssemblyConnectors_PWP_PWP_A_Array_Pattern_r = nullptr;
					ConnectorEndPtr AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd132 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd132_connectorEnd_1_Lower = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd132_connectorEnd_1_Upper = nullptr;
					ConnectorEndPtr AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd133 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd133_connectorEnd_2_Lower = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd133_connectorEnd_2_Upper = nullptr;
				OperationPtr AssemblyConnectors_PWP_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern = nullptr;
					ParameterPtr AssemblyConnectors_PWP_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result = nullptr;
			ActivityPtr AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern = nullptr;
				ActivityParameterNodePtr AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern_node = nullptr;
				CallOperationActionPtr AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern_ = nullptr;
					InputPinPtr AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralInteger134 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralUnlimitedNatural135 = nullptr;
					OutputPinPtr AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger136 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger137 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralUnlimitedNatural138 = nullptr;
				ObjectFlowPtr AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow139 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow139_LiteralInteger140 = nullptr;
					LiteralBooleanPtr AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow139_LiteralBoolean141 = nullptr;
				ParameterPtr AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern = nullptr;
				CreateObjectActionPtr AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern = nullptr;
					OutputPinPtr AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralInteger142 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralUnlimitedNatural143 = nullptr;
				ObjectFlowPtr AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow144 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow144_LiteralInteger145 = nullptr;
					LiteralBooleanPtr AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow144_LiteralBoolean146 = nullptr;
			ActivityPtr AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern = nullptr;
				ObjectFlowPtr AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_ObjectFlow147 = nullptr;
					LiteralBooleanPtr AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_ObjectFlow147_LiteralBoolean148 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_ObjectFlow147_LiteralInteger149 = nullptr;
				CallBehaviorActionPtr AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine = nullptr;
					InputPinPtr AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_value = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_value_LiteralInteger150 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_value_LiteralInteger151 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_value_LiteralUnlimitedNatural152 = nullptr;
					OutputPinPtr AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_errorStatus = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger153 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger154 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural155 = nullptr;
				ActivityParameterNodePtr AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_a_Star_Pattern_node = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_a_Star_Pattern_node_LiteralInteger156 = nullptr;
				ParameterPtr AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_a_Star_Pattern = nullptr;
				ValueSpecificationActionPtr AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message = nullptr;
					OutputPinPtr AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_result = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_result_LiteralInteger157 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_result_LiteralUnlimitedNatural158 = nullptr;
					LiteralStringPtr AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_LiteralString159 = nullptr;
			Class_Ptr AssemblyConnectors_PWP_PWP_IImpl = nullptr;
				InterfaceRealizationPtr AssemblyConnectors_PWP_PWP_IImpl_I_Realization = nullptr;
			InterfacePtr AssemblyConnectors_PWP_PWP_I = nullptr;
			Class_Ptr AssemblyConnectors_PWP_PWP_A_Empty_Pattern = nullptr;
				PropertyPtr AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partB = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partB_LiteralInteger160 = nullptr;
					LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partB_LiteralUnlimitedNatural161 = nullptr;
				PropertyPtr AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partC = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partC_LiteralInteger162 = nullptr;
					LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partC_LiteralUnlimitedNatural163 = nullptr;
				OperationPtr AssemblyConnectors_PWP_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern = nullptr;
					ParameterPtr AssemblyConnectors_PWP_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result = nullptr;
				ConnectorPtr AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r = nullptr;
					ConnectorEndPtr AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd164 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd164_connectorEnd_2_Upper = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd164_connectorEnd_2_Lower = nullptr;
					ConnectorEndPtr AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd165 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd165_connectorEnd_1_Upper = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd165_connectorEnd_1_Lower = nullptr;
				CommentPtr AssemblyConnectors_PWP_PWP_A_Empty_Pattern_Comment166 = nullptr;
			ActivityPtr AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern = nullptr;
				CallOperationActionPtr AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern_ = nullptr;
					InputPinPtr AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralUnlimitedNatural167 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralInteger168 = nullptr;
					OutputPinPtr AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger169 = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralUnlimitedNatural170 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger171 = nullptr;
				ObjectFlowPtr AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow172 = nullptr;
					LiteralBooleanPtr AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow172_LiteralBoolean173 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow172_LiteralInteger174 = nullptr;
				ActivityParameterNodePtr AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_a_Star_Pattern_node = nullptr;
				ParameterPtr AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_a_Star_Pattern = nullptr;
				ObjectFlowPtr AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow175 = nullptr;
					LiteralBooleanPtr AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow175_LiteralBoolean176 = nullptr;
					LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow175_LiteralInteger177 = nullptr;
				CreateObjectActionPtr AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern = nullptr;
					OutputPinPtr AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result = nullptr;
						LiteralUnlimitedNaturalPtr AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralUnlimitedNatural178 = nullptr;
						LiteralIntegerPtr AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralInteger179 = nullptr;

		public:
			virtual ~AssemblyConnectors_PWP_PWPModel();
			static const std::shared_ptr<AssemblyConnectors_PWP_PWPModel>& Instance();

		private:
			AssemblyConnectors_PWP_PWPModel();
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

#endif /* ASSEMBLYCONNECTORS_PWP_PWP_MODEL_H */
