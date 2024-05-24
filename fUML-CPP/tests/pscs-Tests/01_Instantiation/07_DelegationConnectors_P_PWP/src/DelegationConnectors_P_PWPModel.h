/*
 * DelegationConnectors_P_PWPModel.h
 * 
 * Auto-generated file
 */

#ifndef DELEGATIONCONNECTORS_P_PWP_MODEL_H
#define DELEGATIONCONNECTORS_P_PWP_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace DelegationConnectors_P_PWP
{
	class DelegationConnectors_P_PWPModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model DelegationConnectors_P_PWP
		 */
		PackagePtr DelegationConnectors_P_PWP = nullptr;
			Class_Ptr DelegationConnectors_P_PWP_B = nullptr;
				PortPtr DelegationConnectors_P_PWP_B_q = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_B_q_LiteralInteger0 = nullptr;
					LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_B_q_LiteralUnlimitedNatural1 = nullptr;
			AssociationPtr DelegationConnectors_P_PWP_R = nullptr;
				PropertyPtr DelegationConnectors_P_PWP_R_x = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_R_x_LiteralInteger2 = nullptr;
					LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_R_x_LiteralUnlimitedNatural3 = nullptr;
				PropertyPtr DelegationConnectors_P_PWP_R_y = nullptr;
					LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_R_y_LiteralUnlimitedNatural4 = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_R_y_LiteralInteger5 = nullptr;
			InterfacePtr DelegationConnectors_P_PWP_I = nullptr;
			ActivityPtr DelegationConnectors_P_PWP_assert_A_Array_Pattern = nullptr;
				ParameterPtr DelegationConnectors_P_PWP_assert_A_Array_Pattern_a_Array_Pattern = nullptr;
				ObjectFlowPtr DelegationConnectors_P_PWP_assert_A_Array_Pattern_ObjectFlow6 = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Array_Pattern_ObjectFlow6_LiteralInteger7 = nullptr;
					LiteralBooleanPtr DelegationConnectors_P_PWP_assert_A_Array_Pattern_ObjectFlow6_LiteralBoolean8 = nullptr;
				CallBehaviorActionPtr DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine = nullptr;
					InputPinPtr DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_value = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_value_LiteralInteger9 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_value_LiteralInteger10 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_value_LiteralUnlimitedNatural11 = nullptr;
					OutputPinPtr DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_errorStatus = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger12 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger13 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural14 = nullptr;
				ActivityParameterNodePtr DelegationConnectors_P_PWP_assert_A_Array_Pattern_a_Array_Pattern_node = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger15 = nullptr;
				ValueSpecificationActionPtr DelegationConnectors_P_PWP_assert_A_Array_Pattern_message = nullptr;
					LiteralStringPtr DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_LiteralString16 = nullptr;
					OutputPinPtr DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_result = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_result_LiteralInteger17 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_result_LiteralUnlimitedNatural18 = nullptr;
			Class_Ptr DelegationConnectors_P_PWP_A_Star_Pattern = nullptr;
				PropertyPtr DelegationConnectors_P_PWP_A_Star_Pattern_b = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_A_Star_Pattern_b_LiteralInteger19 = nullptr;
					LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_A_Star_Pattern_b_LiteralUnlimitedNatural20 = nullptr;
				PortPtr DelegationConnectors_P_PWP_A_Star_Pattern_p = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_A_Star_Pattern_p_LiteralInteger21 = nullptr;
					LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_A_Star_Pattern_p_LiteralUnlimitedNatural22 = nullptr;
				ConnectorPtr DelegationConnectors_P_PWP_A_Star_Pattern_r = nullptr;
					ConnectorEndPtr DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd23 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd23_LiteralInteger24 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd23_LiteralUnlimitedNatural25 = nullptr;
					ConnectorEndPtr DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd26 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd26_LiteralUnlimitedNatural27 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd26_LiteralInteger28 = nullptr;
				CommentPtr DelegationConnectors_P_PWP_A_Star_Pattern_Comment29 = nullptr;
				OperationPtr DelegationConnectors_P_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern = nullptr;
					ParameterPtr DelegationConnectors_P_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result = nullptr;
			Class_Ptr DelegationConnectors_P_PWP_IImpl = nullptr;
				InterfaceRealizationPtr DelegationConnectors_P_PWP_IImpl_I_Realization = nullptr;
			ActivityPtr DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern = nullptr;
				ParameterPtr DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern = nullptr;
				CreateObjectActionPtr DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern = nullptr;
					OutputPinPtr DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralInteger30 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralUnlimitedNatural31 = nullptr;
				ObjectFlowPtr DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow32 = nullptr;
					LiteralBooleanPtr DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow32_LiteralBoolean33 = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow32_LiteralInteger34 = nullptr;
				ActivityParameterNodePtr DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node = nullptr;
				ObjectFlowPtr DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow35 = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow35_LiteralInteger36 = nullptr;
					LiteralBooleanPtr DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow35_LiteralBoolean37 = nullptr;
				CallOperationActionPtr DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_ = nullptr;
					OutputPinPtr DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralUnlimitedNatural38 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger39 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger40 = nullptr;
					InputPinPtr DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralInteger41 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralUnlimitedNatural42 = nullptr;
			ActivityPtr DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern = nullptr;
				ObjectFlowPtr DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow43 = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow43_LiteralInteger44 = nullptr;
					LiteralBooleanPtr DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow43_LiteralBoolean45 = nullptr;
				ObjectFlowPtr DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow46 = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow46_LiteralInteger47 = nullptr;
					LiteralBooleanPtr DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow46_LiteralBoolean48 = nullptr;
				CreateObjectActionPtr DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern = nullptr;
					OutputPinPtr DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralInteger49 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralUnlimitedNatural50 = nullptr;
				CallOperationActionPtr DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern_ = nullptr;
					InputPinPtr DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralUnlimitedNatural51 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralInteger52 = nullptr;
					OutputPinPtr DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger53 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralUnlimitedNatural54 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger55 = nullptr;
				ActivityParameterNodePtr DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern_node = nullptr;
				ParameterPtr DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern = nullptr;
			ActivityPtr DelegationConnectors_P_PWP_instantiate_A_Array_Pattern = nullptr;
				ObjectFlowPtr DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow56 = nullptr;
					LiteralBooleanPtr DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow56_LiteralBoolean57 = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow56_LiteralInteger58 = nullptr;
				ActivityParameterNodePtr DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger59 = nullptr;
				CreateObjectActionPtr DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern = nullptr;
					OutputPinPtr DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralUnlimitedNatural60 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralInteger61 = nullptr;
				ParameterPtr DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern = nullptr;
				ObjectFlowPtr DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow62 = nullptr;
					LiteralBooleanPtr DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow62_LiteralBoolean63 = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow62_LiteralInteger64 = nullptr;
				CallOperationActionPtr DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern_ = nullptr;
					InputPinPtr DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralUnlimitedNatural65 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralInteger66 = nullptr;
					OutputPinPtr DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralUnlimitedNatural67 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger68 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger69 = nullptr;
			Class_Ptr DelegationConnectors_P_PWP_A_Array_Pattern = nullptr;
				CommentPtr DelegationConnectors_P_PWP_A_Array_Pattern_Comment70 = nullptr;
				ConnectorPtr DelegationConnectors_P_PWP_A_Array_Pattern_r = nullptr;
					ConnectorEndPtr DelegationConnectors_P_PWP_A_Array_Pattern_r_ConnectorEnd71 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_A_Array_Pattern_r_ConnectorEnd71_LiteralUnlimitedNatural72 = nullptr;
					ConnectorEndPtr DelegationConnectors_P_PWP_A_Array_Pattern_r_ConnectorEnd73 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_A_Array_Pattern_r_ConnectorEnd73_LiteralUnlimitedNatural74 = nullptr;
				PropertyPtr DelegationConnectors_P_PWP_A_Array_Pattern_b = nullptr;
					LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_A_Array_Pattern_b_LiteralUnlimitedNatural75 = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_A_Array_Pattern_b_LiteralInteger76 = nullptr;
				OperationPtr DelegationConnectors_P_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern = nullptr;
					ParameterPtr DelegationConnectors_P_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result = nullptr;
				PortPtr DelegationConnectors_P_PWP_A_Array_Pattern_p = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_A_Array_Pattern_p_LiteralInteger77 = nullptr;
					LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_A_Array_Pattern_p_LiteralUnlimitedNatural78 = nullptr;
			ActivityPtr DelegationConnectors_P_PWP_assert_A_Empty_Pattern = nullptr;
				ObjectFlowPtr DelegationConnectors_P_PWP_assert_A_Empty_Pattern_ObjectFlow79 = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Empty_Pattern_ObjectFlow79_LiteralInteger80 = nullptr;
					LiteralBooleanPtr DelegationConnectors_P_PWP_assert_A_Empty_Pattern_ObjectFlow79_LiteralBoolean81 = nullptr;
				CallBehaviorActionPtr DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine = nullptr;
					OutputPinPtr DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_errorStatus = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger82 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger83 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural84 = nullptr;
					InputPinPtr DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_value = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_value_LiteralInteger85 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_value_LiteralUnlimitedNatural86 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_value_LiteralInteger87 = nullptr;
				ValueSpecificationActionPtr DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message = nullptr;
					OutputPinPtr DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_result = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_result_LiteralInteger88 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_result_LiteralUnlimitedNatural89 = nullptr;
					LiteralStringPtr DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_LiteralString90 = nullptr;
				ActivityParameterNodePtr DelegationConnectors_P_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node_LiteralInteger91 = nullptr;
				ParameterPtr DelegationConnectors_P_PWP_assert_A_Empty_Pattern_a_Empty_Pattern = nullptr;
			ActivityPtr DelegationConnectors_P_PWP_main = nullptr;
				CallBehaviorActionPtr DelegationConnectors_P_PWP_main_assert_A_Star_Pattern = nullptr;
					InputPinPtr DelegationConnectors_P_PWP_main_assert_A_Star_Pattern_a_Star_Pattern = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural92 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger93 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger94 = nullptr;
				CallBehaviorActionPtr DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern = nullptr;
					OutputPinPtr DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger95 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger96 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural97 = nullptr;
				CallBehaviorActionPtr DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern = nullptr;
					OutputPinPtr DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger98 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural99 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger100 = nullptr;
				ObjectFlowPtr DelegationConnectors_P_PWP_main_ObjectFlow101 = nullptr;
					LiteralBooleanPtr DelegationConnectors_P_PWP_main_ObjectFlow101_LiteralBoolean102 = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_main_ObjectFlow101_LiteralInteger103 = nullptr;
				ObjectFlowPtr DelegationConnectors_P_PWP_main_ObjectFlow104 = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_main_ObjectFlow104_LiteralInteger105 = nullptr;
					LiteralBooleanPtr DelegationConnectors_P_PWP_main_ObjectFlow104_LiteralBoolean106 = nullptr;
				CallBehaviorActionPtr DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern = nullptr;
					OutputPinPtr DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger107 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural108 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger109 = nullptr;
				ObjectFlowPtr DelegationConnectors_P_PWP_main_ObjectFlow110 = nullptr;
					LiteralBooleanPtr DelegationConnectors_P_PWP_main_ObjectFlow110_LiteralBoolean111 = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_main_ObjectFlow110_LiteralInteger112 = nullptr;
				CallBehaviorActionPtr DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern = nullptr;
					InputPinPtr DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger113 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural114 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger115 = nullptr;
				ObjectFlowPtr DelegationConnectors_P_PWP_main_ObjectFlow116 = nullptr;
					LiteralBooleanPtr DelegationConnectors_P_PWP_main_ObjectFlow116_LiteralBoolean117 = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_main_ObjectFlow116_LiteralInteger118 = nullptr;
				CallBehaviorActionPtr DelegationConnectors_P_PWP_main_assert_A_Array_Pattern = nullptr;
					InputPinPtr DelegationConnectors_P_PWP_main_assert_A_Array_Pattern_a_Array_Pattern = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural119 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger120 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger121 = nullptr;
				CallBehaviorActionPtr DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern = nullptr;
					InputPinPtr DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural122 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger123 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger124 = nullptr;
				CallBehaviorActionPtr DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern = nullptr;
					OutputPinPtr DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger125 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural126 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger127 = nullptr;
				ControlFlowPtr DelegationConnectors_P_PWP_main_ControlFlow128 = nullptr;
				ControlFlowPtr DelegationConnectors_P_PWP_main_ControlFlow129 = nullptr;
				ControlFlowPtr DelegationConnectors_P_PWP_main_ControlFlow130 = nullptr;
			Class_Ptr DelegationConnectors_P_PWP_A_Unconnected_Pattern = nullptr;
				PortPtr DelegationConnectors_P_PWP_A_Unconnected_Pattern_p = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_A_Unconnected_Pattern_p_LiteralInteger131 = nullptr;
					LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_A_Unconnected_Pattern_p_LiteralUnlimitedNatural132 = nullptr;
				OperationPtr DelegationConnectors_P_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern = nullptr;
					ParameterPtr DelegationConnectors_P_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result = nullptr;
				PropertyPtr DelegationConnectors_P_PWP_A_Unconnected_Pattern_b = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_A_Unconnected_Pattern_b_LiteralInteger133 = nullptr;
					LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_A_Unconnected_Pattern_b_LiteralUnlimitedNatural134 = nullptr;
				ConnectorPtr DelegationConnectors_P_PWP_A_Unconnected_Pattern_r = nullptr;
					ConnectorEndPtr DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd135 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd135_LiteralInteger136 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd135_LiteralUnlimitedNatural137 = nullptr;
					ConnectorEndPtr DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd138 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd138_LiteralUnlimitedNatural139 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd138_LiteralInteger140 = nullptr;
				CommentPtr DelegationConnectors_P_PWP_A_Unconnected_Pattern_Comment141 = nullptr;
			ActivityPtr DelegationConnectors_P_PWP_instantiate_A_Star_Pattern = nullptr;
				ParameterPtr DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_a_Star_Pattern = nullptr;
				CallOperationActionPtr DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern_ = nullptr;
					OutputPinPtr DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger142 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralUnlimitedNatural143 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger144 = nullptr;
					InputPinPtr DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralUnlimitedNatural145 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralInteger146 = nullptr;
				ObjectFlowPtr DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow147 = nullptr;
					LiteralBooleanPtr DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow147_LiteralBoolean148 = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow147_LiteralInteger149 = nullptr;
				CreateObjectActionPtr DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern = nullptr;
					OutputPinPtr DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralInteger150 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralUnlimitedNatural151 = nullptr;
				ObjectFlowPtr DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow152 = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow152_LiteralInteger153 = nullptr;
					LiteralBooleanPtr DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow152_LiteralBoolean154 = nullptr;
				ActivityParameterNodePtr DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_a_Star_Pattern_node = nullptr;
			ActivityPtr DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern = nullptr;
				ValueSpecificationActionPtr DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message = nullptr;
					LiteralStringPtr DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_LiteralString155 = nullptr;
					OutputPinPtr DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_result = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_result_LiteralInteger156 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_result_LiteralUnlimitedNatural157 = nullptr;
				ParameterPtr DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern = nullptr;
				ObjectFlowPtr DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_ObjectFlow158 = nullptr;
					LiteralBooleanPtr DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_ObjectFlow158_LiteralBoolean159 = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_ObjectFlow158_LiteralInteger160 = nullptr;
				CallBehaviorActionPtr DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine = nullptr;
					OutputPinPtr DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger161 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural162 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger163 = nullptr;
					InputPinPtr DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_value = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger164 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_value_LiteralUnlimitedNatural165 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger166 = nullptr;
				ActivityParameterNodePtr DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node_LiteralInteger167 = nullptr;
			Class_Ptr DelegationConnectors_P_PWP_A_Empty_Pattern = nullptr;
				PropertyPtr DelegationConnectors_P_PWP_A_Empty_Pattern_b = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_A_Empty_Pattern_b_LiteralInteger168 = nullptr;
					LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_A_Empty_Pattern_b_LiteralUnlimitedNatural169 = nullptr;
				OperationPtr DelegationConnectors_P_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern = nullptr;
					ParameterPtr DelegationConnectors_P_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result = nullptr;
				CommentPtr DelegationConnectors_P_PWP_A_Empty_Pattern_Comment170 = nullptr;
				PortPtr DelegationConnectors_P_PWP_A_Empty_Pattern_p = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_A_Empty_Pattern_p_LiteralInteger171 = nullptr;
					LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_A_Empty_Pattern_p_LiteralUnlimitedNatural172 = nullptr;
				ConnectorPtr DelegationConnectors_P_PWP_A_Empty_Pattern_r = nullptr;
					ConnectorEndPtr DelegationConnectors_P_PWP_A_Empty_Pattern_r_ConnectorEnd173 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_A_Empty_Pattern_r_ConnectorEnd173_LiteralUnlimitedNatural174 = nullptr;
					ConnectorEndPtr DelegationConnectors_P_PWP_A_Empty_Pattern_r_ConnectorEnd175 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_A_Empty_Pattern_r_ConnectorEnd175_LiteralUnlimitedNatural176 = nullptr;
			ActivityPtr DelegationConnectors_P_PWP_assert_A_Star_Pattern = nullptr;
				ActivityParameterNodePtr DelegationConnectors_P_PWP_assert_A_Star_Pattern_a_Star_Pattern_node = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Star_Pattern_a_Star_Pattern_node_LiteralInteger177 = nullptr;
				ValueSpecificationActionPtr DelegationConnectors_P_PWP_assert_A_Star_Pattern_message = nullptr;
					LiteralStringPtr DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_LiteralString178 = nullptr;
					OutputPinPtr DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_result = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_result_LiteralUnlimitedNatural179 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_result_LiteralInteger180 = nullptr;
				ParameterPtr DelegationConnectors_P_PWP_assert_A_Star_Pattern_a_Star_Pattern = nullptr;
				CallBehaviorActionPtr DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine = nullptr;
					InputPinPtr DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_value = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_value_LiteralInteger181 = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_value_LiteralUnlimitedNatural182 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_value_LiteralInteger183 = nullptr;
					OutputPinPtr DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_errorStatus = nullptr;
						LiteralUnlimitedNaturalPtr DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural184 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger185 = nullptr;
						LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger186 = nullptr;
				ObjectFlowPtr DelegationConnectors_P_PWP_assert_A_Star_Pattern_ObjectFlow187 = nullptr;
					LiteralIntegerPtr DelegationConnectors_P_PWP_assert_A_Star_Pattern_ObjectFlow187_LiteralInteger188 = nullptr;
					LiteralBooleanPtr DelegationConnectors_P_PWP_assert_A_Star_Pattern_ObjectFlow187_LiteralBoolean189 = nullptr;

		public:
			virtual ~DelegationConnectors_P_PWPModel();
			static const std::shared_ptr<DelegationConnectors_P_PWPModel>& Instance();

		private:
			DelegationConnectors_P_PWPModel();
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

#endif /* DELEGATIONCONNECTORS_P_PWP_MODEL_H */
