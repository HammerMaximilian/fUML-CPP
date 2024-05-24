/*
 * HierarchyModel.h
 * 
 * Auto-generated file
 */

#ifndef HIERARCHY_MODEL_H
#define HIERARCHY_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace Hierarchy
{
	class HierarchyModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model Hierarchy
		 */
		PackagePtr Hierarchy = nullptr;
			ActivityPtr Hierarchy_instantiate_A = nullptr;
				CallOperationActionPtr Hierarchy_instantiate_A_A_ = nullptr;
					OutputPinPtr Hierarchy_instantiate_A_A__result = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_instantiate_A_A__result_LiteralUnlimitedNatural0 = nullptr;
						LiteralIntegerPtr Hierarchy_instantiate_A_A__result_LiteralInteger1 = nullptr;
						LiteralIntegerPtr Hierarchy_instantiate_A_A__result_LiteralInteger2 = nullptr;
					InputPinPtr Hierarchy_instantiate_A_A__target = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_instantiate_A_A__target_LiteralUnlimitedNatural3 = nullptr;
						LiteralIntegerPtr Hierarchy_instantiate_A_A__target_LiteralInteger4 = nullptr;
				ObjectFlowPtr Hierarchy_instantiate_A_ObjectFlow5 = nullptr;
					LiteralIntegerPtr Hierarchy_instantiate_A_ObjectFlow5_LiteralInteger6 = nullptr;
					LiteralBooleanPtr Hierarchy_instantiate_A_ObjectFlow5_LiteralBoolean7 = nullptr;
				ActivityParameterNodePtr Hierarchy_instantiate_A_a_node = nullptr;
					LiteralIntegerPtr Hierarchy_instantiate_A_a_node_LiteralInteger8 = nullptr;
				CreateObjectActionPtr Hierarchy_instantiate_A_Create_A = nullptr;
					OutputPinPtr Hierarchy_instantiate_A_Create_A_result = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_instantiate_A_Create_A_result_LiteralUnlimitedNatural9 = nullptr;
						LiteralIntegerPtr Hierarchy_instantiate_A_Create_A_result_LiteralInteger10 = nullptr;
				ParameterPtr Hierarchy_instantiate_A_a = nullptr;
				ObjectFlowPtr Hierarchy_instantiate_A_ObjectFlow11 = nullptr;
					LiteralIntegerPtr Hierarchy_instantiate_A_ObjectFlow11_LiteralInteger12 = nullptr;
					LiteralBooleanPtr Hierarchy_instantiate_A_ObjectFlow11_LiteralBoolean13 = nullptr;
			ActivityPtr Hierarchy_assert_A = nullptr;
				OpaqueBehaviorPtr Hierarchy_assert_A_testNonEmptyList = nullptr;
					ParameterPtr Hierarchy_assert_A_testNonEmptyList_listSize = nullptr;
				CallBehaviorActionPtr Hierarchy_assert_A_Test_a_b_c_d_e_size = nullptr;
					InputPinPtr Hierarchy_assert_A_Test_a_b_c_d_e_size_listSize = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_Test_a_b_c_d_e_size_listSize_LiteralUnlimitedNatural14 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_Test_a_b_c_d_e_size_listSize_LiteralInteger15 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_Test_a_b_c_d_e_size_listSize_LiteralInteger16 = nullptr;
				ObjectFlowPtr Hierarchy_assert_A_ObjectFlow17 = nullptr;
					LiteralBooleanPtr Hierarchy_assert_A_ObjectFlow17_LiteralBoolean18 = nullptr;
					LiteralIntegerPtr Hierarchy_assert_A_ObjectFlow17_LiteralInteger19 = nullptr;
				ReadStructuralFeatureActionPtr Hierarchy_assert_A_Read_a_b_c_d = nullptr;
					InputPinPtr Hierarchy_assert_A_Read_a_b_c_d_object = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_Read_a_b_c_d_object_LiteralInteger20 = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_Read_a_b_c_d_object_LiteralUnlimitedNatural21 = nullptr;
					OutputPinPtr Hierarchy_assert_A_Read_a_b_c_d_result = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_Read_a_b_c_d_result_LiteralUnlimitedNatural22 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_Read_a_b_c_d_result_LiteralInteger23 = nullptr;
				ForkNodePtr Hierarchy_assert_A_Fork_a_b_c_d = nullptr;
				ValueSpecificationActionPtr Hierarchy_assert_A_String_a_b_c_d_e_size = nullptr;
					LiteralStringPtr Hierarchy_assert_A_String_a_b_c_d_e_size_LiteralString24 = nullptr;
					OutputPinPtr Hierarchy_assert_A_String_a_b_c_d_e_size_result = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_String_a_b_c_d_e_size_result_LiteralInteger25 = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_String_a_b_c_d_e_size_result_LiteralUnlimitedNatural26 = nullptr;
				CallBehaviorActionPtr Hierarchy_assert_A_a_b_c_d_e_size_ = nullptr;
					InputPinPtr Hierarchy_assert_A_a_b_c_d_e_size__list = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_a_b_c_d_e_size__list_LiteralUnlimitedNatural27 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_a_b_c_d_e_size__list_LiteralInteger28 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_a_b_c_d_e_size__list_LiteralInteger29 = nullptr;
					OutputPinPtr Hierarchy_assert_A_a_b_c_d_e_size__result = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_a_b_c_d_e_size__result_LiteralUnlimitedNatural30 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_a_b_c_d_e_size__result_LiteralInteger31 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_a_b_c_d_e_size__result_LiteralInteger32 = nullptr;
				ObjectFlowPtr Hierarchy_assert_A_ObjectFlow33 = nullptr;
					LiteralBooleanPtr Hierarchy_assert_A_ObjectFlow33_LiteralBoolean34 = nullptr;
					LiteralIntegerPtr Hierarchy_assert_A_ObjectFlow33_LiteralInteger35 = nullptr;
				CallBehaviorActionPtr Hierarchy_assert_A_WriteLine_a_b_c = nullptr;
					OutputPinPtr Hierarchy_assert_A_WriteLine_a_b_c_errorStatus = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_WriteLine_a_b_c_errorStatus_LiteralInteger36 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_WriteLine_a_b_c_errorStatus_LiteralInteger37 = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_WriteLine_a_b_c_errorStatus_LiteralUnlimitedNatural38 = nullptr;
					InputPinPtr Hierarchy_assert_A_WriteLine_a_b_c_value = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_WriteLine_a_b_c_value_LiteralUnlimitedNatural39 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_WriteLine_a_b_c_value_LiteralInteger40 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_WriteLine_a_b_c_value_LiteralInteger41 = nullptr;
				ControlFlowPtr Hierarchy_assert_A_ControlFlow42 = nullptr;
				ForkNodePtr Hierarchy_assert_A_Fork_a_b_c = nullptr;
				CallBehaviorActionPtr Hierarchy_assert_A_WriteLine_a_b_c_d_e = nullptr;
					OutputPinPtr Hierarchy_assert_A_WriteLine_a_b_c_d_e_errorStatus = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_WriteLine_a_b_c_d_e_errorStatus_LiteralUnlimitedNatural43 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_WriteLine_a_b_c_d_e_errorStatus_LiteralInteger44 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_WriteLine_a_b_c_d_e_errorStatus_LiteralInteger45 = nullptr;
					InputPinPtr Hierarchy_assert_A_WriteLine_a_b_c_d_e_value = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_WriteLine_a_b_c_d_e_value_LiteralUnlimitedNatural46 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_WriteLine_a_b_c_d_e_value_LiteralInteger47 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_WriteLine_a_b_c_d_e_value_LiteralInteger48 = nullptr;
				CallBehaviorActionPtr Hierarchy_assert_A_a_b_c_d_size_ = nullptr;
					InputPinPtr Hierarchy_assert_A_a_b_c_d_size__list = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_a_b_c_d_size__list_LiteralInteger49 = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_a_b_c_d_size__list_LiteralUnlimitedNatural50 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_a_b_c_d_size__list_LiteralInteger51 = nullptr;
					OutputPinPtr Hierarchy_assert_A_a_b_c_d_size__result = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_a_b_c_d_size__result_LiteralUnlimitedNatural52 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_a_b_c_d_size__result_LiteralInteger53 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_a_b_c_d_size__result_LiteralInteger54 = nullptr;
				CallBehaviorActionPtr Hierarchy_assert_A_Test_a_b_c_d_size = nullptr;
					InputPinPtr Hierarchy_assert_A_Test_a_b_c_d_size_listSize = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_Test_a_b_c_d_size_listSize_LiteralUnlimitedNatural55 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_Test_a_b_c_d_size_listSize_LiteralInteger56 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_Test_a_b_c_d_size_listSize_LiteralInteger57 = nullptr;
				ParameterPtr Hierarchy_assert_A_a = nullptr;
				ControlFlowPtr Hierarchy_assert_A_ControlFlow58 = nullptr;
				CallBehaviorActionPtr Hierarchy_assert_A_a_b_size_ = nullptr;
					OutputPinPtr Hierarchy_assert_A_a_b_size__result = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_a_b_size__result_LiteralInteger59 = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_a_b_size__result_LiteralUnlimitedNatural60 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_a_b_size__result_LiteralInteger61 = nullptr;
					InputPinPtr Hierarchy_assert_A_a_b_size__list = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_a_b_size__list_LiteralInteger62 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_a_b_size__list_LiteralInteger63 = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_a_b_size__list_LiteralUnlimitedNatural64 = nullptr;
				ObjectFlowPtr Hierarchy_assert_A_ObjectFlow65 = nullptr;
					LiteralIntegerPtr Hierarchy_assert_A_ObjectFlow65_LiteralInteger66 = nullptr;
					LiteralBooleanPtr Hierarchy_assert_A_ObjectFlow65_LiteralBoolean67 = nullptr;
				ActivityParameterNodePtr Hierarchy_assert_A_a_node = nullptr;
					LiteralIntegerPtr Hierarchy_assert_A_a_node_LiteralInteger68 = nullptr;
				ObjectFlowPtr Hierarchy_assert_A_ObjectFlow69 = nullptr;
					LiteralIntegerPtr Hierarchy_assert_A_ObjectFlow69_LiteralInteger70 = nullptr;
					LiteralBooleanPtr Hierarchy_assert_A_ObjectFlow69_LiteralBoolean71 = nullptr;
				OpaqueBehaviorPtr Hierarchy_assert_A_testEmptyList = nullptr;
					ParameterPtr Hierarchy_assert_A_testEmptyList_listSize = nullptr;
				ControlFlowPtr Hierarchy_assert_A_ControlFlow72 = nullptr;
				ValueSpecificationActionPtr Hierarchy_assert_A_String_a_b_c_d_size = nullptr;
					OutputPinPtr Hierarchy_assert_A_String_a_b_c_d_size_result = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_String_a_b_c_d_size_result_LiteralUnlimitedNatural73 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_String_a_b_c_d_size_result_LiteralInteger74 = nullptr;
					LiteralStringPtr Hierarchy_assert_A_String_a_b_c_d_size_LiteralString75 = nullptr;
				ObjectFlowPtr Hierarchy_assert_A_ObjectFlow76 = nullptr;
					LiteralIntegerPtr Hierarchy_assert_A_ObjectFlow76_LiteralInteger77 = nullptr;
					LiteralBooleanPtr Hierarchy_assert_A_ObjectFlow76_LiteralBoolean78 = nullptr;
				ControlFlowPtr Hierarchy_assert_A_ControlFlow79 = nullptr;
				ControlFlowPtr Hierarchy_assert_A_ControlFlow80 = nullptr;
				ControlFlowPtr Hierarchy_assert_A_ControlFlow81 = nullptr;
				CallBehaviorActionPtr Hierarchy_assert_A_WriteLine_a_b = nullptr;
					InputPinPtr Hierarchy_assert_A_WriteLine_a_b_value = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_WriteLine_a_b_value_LiteralInteger82 = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_WriteLine_a_b_value_LiteralUnlimitedNatural83 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_WriteLine_a_b_value_LiteralInteger84 = nullptr;
					OutputPinPtr Hierarchy_assert_A_WriteLine_a_b_errorStatus = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_WriteLine_a_b_errorStatus_LiteralInteger85 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_WriteLine_a_b_errorStatus_LiteralInteger86 = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_WriteLine_a_b_errorStatus_LiteralUnlimitedNatural87 = nullptr;
				ControlFlowPtr Hierarchy_assert_A_ControlFlow88 = nullptr;
				ObjectFlowPtr Hierarchy_assert_A_ObjectFlow89 = nullptr;
					LiteralIntegerPtr Hierarchy_assert_A_ObjectFlow89_LiteralInteger90 = nullptr;
					LiteralBooleanPtr Hierarchy_assert_A_ObjectFlow89_LiteralBoolean91 = nullptr;
				ObjectFlowPtr Hierarchy_assert_A_ObjectFlow92 = nullptr;
					LiteralIntegerPtr Hierarchy_assert_A_ObjectFlow92_LiteralInteger93 = nullptr;
					LiteralBooleanPtr Hierarchy_assert_A_ObjectFlow92_LiteralBoolean94 = nullptr;
				CallBehaviorActionPtr Hierarchy_assert_A_a_b_c_size_ = nullptr;
					OutputPinPtr Hierarchy_assert_A_a_b_c_size__result = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_a_b_c_size__result_LiteralInteger95 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_a_b_c_size__result_LiteralInteger96 = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_a_b_c_size__result_LiteralUnlimitedNatural97 = nullptr;
					InputPinPtr Hierarchy_assert_A_a_b_c_size__list = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_a_b_c_size__list_LiteralInteger98 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_a_b_c_size__list_LiteralInteger99 = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_a_b_c_size__list_LiteralUnlimitedNatural100 = nullptr;
				ControlFlowPtr Hierarchy_assert_A_ControlFlow101 = nullptr;
				ControlFlowPtr Hierarchy_assert_A_ControlFlow102 = nullptr;
				ControlFlowPtr Hierarchy_assert_A_ControlFlow103 = nullptr;
				ObjectFlowPtr Hierarchy_assert_A_ObjectFlow104 = nullptr;
					LiteralBooleanPtr Hierarchy_assert_A_ObjectFlow104_LiteralBoolean105 = nullptr;
					LiteralIntegerPtr Hierarchy_assert_A_ObjectFlow104_LiteralInteger106 = nullptr;
				ObjectFlowPtr Hierarchy_assert_A_ObjectFlow107 = nullptr;
					LiteralBooleanPtr Hierarchy_assert_A_ObjectFlow107_LiteralBoolean108 = nullptr;
					LiteralIntegerPtr Hierarchy_assert_A_ObjectFlow107_LiteralInteger109 = nullptr;
				ReadStructuralFeatureActionPtr Hierarchy_assert_A_Read_a_b = nullptr;
					OutputPinPtr Hierarchy_assert_A_Read_a_b_result = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_Read_a_b_result_LiteralInteger110 = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_Read_a_b_result_LiteralUnlimitedNatural111 = nullptr;
					InputPinPtr Hierarchy_assert_A_Read_a_b_object = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_Read_a_b_object_LiteralInteger112 = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_Read_a_b_object_LiteralUnlimitedNatural113 = nullptr;
				CallBehaviorActionPtr Hierarchy_assert_A_WriteLine_a_b_c_d = nullptr;
					InputPinPtr Hierarchy_assert_A_WriteLine_a_b_c_d_value = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_WriteLine_a_b_c_d_value_LiteralInteger114 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_WriteLine_a_b_c_d_value_LiteralInteger115 = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_WriteLine_a_b_c_d_value_LiteralUnlimitedNatural116 = nullptr;
					OutputPinPtr Hierarchy_assert_A_WriteLine_a_b_c_d_errorStatus = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_WriteLine_a_b_c_d_errorStatus_LiteralInteger117 = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_WriteLine_a_b_c_d_errorStatus_LiteralUnlimitedNatural118 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_WriteLine_a_b_c_d_errorStatus_LiteralInteger119 = nullptr;
				ObjectFlowPtr Hierarchy_assert_A_ObjectFlow120 = nullptr;
					LiteralBooleanPtr Hierarchy_assert_A_ObjectFlow120_LiteralBoolean121 = nullptr;
					LiteralIntegerPtr Hierarchy_assert_A_ObjectFlow120_LiteralInteger122 = nullptr;
				ObjectFlowPtr Hierarchy_assert_A_ObjectFlow123 = nullptr;
					LiteralBooleanPtr Hierarchy_assert_A_ObjectFlow123_LiteralBoolean124 = nullptr;
					LiteralIntegerPtr Hierarchy_assert_A_ObjectFlow123_LiteralInteger125 = nullptr;
				ObjectFlowPtr Hierarchy_assert_A_ObjectFlow126 = nullptr;
					LiteralBooleanPtr Hierarchy_assert_A_ObjectFlow126_LiteralBoolean127 = nullptr;
					LiteralIntegerPtr Hierarchy_assert_A_ObjectFlow126_LiteralInteger128 = nullptr;
				CallBehaviorActionPtr Hierarchy_assert_A_Test_a_b_size = nullptr;
					InputPinPtr Hierarchy_assert_A_Test_a_b_size_listSize = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_Test_a_b_size_listSize_LiteralUnlimitedNatural129 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_Test_a_b_size_listSize_LiteralInteger130 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_Test_a_b_size_listSize_LiteralInteger131 = nullptr;
				ValueSpecificationActionPtr Hierarchy_assert_A_String_a_b_size = nullptr;
					LiteralStringPtr Hierarchy_assert_A_String_a_b_size_LiteralString132 = nullptr;
					OutputPinPtr Hierarchy_assert_A_String_a_b_size_result = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_String_a_b_size_result_LiteralInteger133 = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_String_a_b_size_result_LiteralUnlimitedNatural134 = nullptr;
				ControlFlowPtr Hierarchy_assert_A_ControlFlow135 = nullptr;
				ValueSpecificationActionPtr Hierarchy_assert_A_String_a_b_c_size = nullptr;
					LiteralStringPtr Hierarchy_assert_A_String_a_b_c_size_LiteralString136 = nullptr;
					OutputPinPtr Hierarchy_assert_A_String_a_b_c_size_result = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_String_a_b_c_size_result_LiteralInteger137 = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_String_a_b_c_size_result_LiteralUnlimitedNatural138 = nullptr;
				ObjectFlowPtr Hierarchy_assert_A_ObjectFlow139 = nullptr;
					LiteralIntegerPtr Hierarchy_assert_A_ObjectFlow139_LiteralInteger140 = nullptr;
					LiteralBooleanPtr Hierarchy_assert_A_ObjectFlow139_LiteralBoolean141 = nullptr;
				ObjectFlowPtr Hierarchy_assert_A_ObjectFlow142 = nullptr;
					LiteralIntegerPtr Hierarchy_assert_A_ObjectFlow142_LiteralInteger143 = nullptr;
					LiteralBooleanPtr Hierarchy_assert_A_ObjectFlow142_LiteralBoolean144 = nullptr;
				ReadStructuralFeatureActionPtr Hierarchy_assert_A_Read_a_b_c = nullptr;
					OutputPinPtr Hierarchy_assert_A_Read_a_b_c_result = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_Read_a_b_c_result_LiteralUnlimitedNatural145 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_Read_a_b_c_result_LiteralInteger146 = nullptr;
					InputPinPtr Hierarchy_assert_A_Read_a_b_c_object = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_Read_a_b_c_object_LiteralInteger147 = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_Read_a_b_c_object_LiteralUnlimitedNatural148 = nullptr;
				ObjectFlowPtr Hierarchy_assert_A_ObjectFlow149 = nullptr;
					LiteralBooleanPtr Hierarchy_assert_A_ObjectFlow149_LiteralBoolean150 = nullptr;
					LiteralIntegerPtr Hierarchy_assert_A_ObjectFlow149_LiteralInteger151 = nullptr;
				ObjectFlowPtr Hierarchy_assert_A_ObjectFlow152 = nullptr;
					LiteralBooleanPtr Hierarchy_assert_A_ObjectFlow152_LiteralBoolean153 = nullptr;
					LiteralIntegerPtr Hierarchy_assert_A_ObjectFlow152_LiteralInteger154 = nullptr;
				ReadStructuralFeatureActionPtr Hierarchy_assert_A_Read_a_b_c_d_e = nullptr;
					OutputPinPtr Hierarchy_assert_A_Read_a_b_c_d_e_result = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_Read_a_b_c_d_e_result_LiteralUnlimitedNatural155 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_Read_a_b_c_d_e_result_LiteralInteger156 = nullptr;
					InputPinPtr Hierarchy_assert_A_Read_a_b_c_d_e_object = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_Read_a_b_c_d_e_object_LiteralUnlimitedNatural157 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_Read_a_b_c_d_e_object_LiteralInteger158 = nullptr;
				ObjectFlowPtr Hierarchy_assert_A_ObjectFlow159 = nullptr;
					LiteralIntegerPtr Hierarchy_assert_A_ObjectFlow159_LiteralInteger160 = nullptr;
					LiteralBooleanPtr Hierarchy_assert_A_ObjectFlow159_LiteralBoolean161 = nullptr;
				ObjectFlowPtr Hierarchy_assert_A_ObjectFlow162 = nullptr;
					LiteralBooleanPtr Hierarchy_assert_A_ObjectFlow162_LiteralBoolean163 = nullptr;
					LiteralIntegerPtr Hierarchy_assert_A_ObjectFlow162_LiteralInteger164 = nullptr;
				CallBehaviorActionPtr Hierarchy_assert_A_Test_a_b_c_size = nullptr;
					InputPinPtr Hierarchy_assert_A_Test_a_b_c_size_listSize = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_assert_A_Test_a_b_c_size_listSize_LiteralUnlimitedNatural165 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_Test_a_b_c_size_listSize_LiteralInteger166 = nullptr;
						LiteralIntegerPtr Hierarchy_assert_A_Test_a_b_c_size_listSize_LiteralInteger167 = nullptr;
				ForkNodePtr Hierarchy_assert_A_Fork_a_b = nullptr;
				ObjectFlowPtr Hierarchy_assert_A_ObjectFlow168 = nullptr;
					LiteralIntegerPtr Hierarchy_assert_A_ObjectFlow168_LiteralInteger169 = nullptr;
					LiteralBooleanPtr Hierarchy_assert_A_ObjectFlow168_LiteralBoolean170 = nullptr;
			Class_Ptr Hierarchy_B = nullptr;
				PropertyPtr Hierarchy_B_c = nullptr;
			Class_Ptr Hierarchy_D = nullptr;
				PropertyPtr Hierarchy_D_e = nullptr;
			Class_Ptr Hierarchy_E = nullptr;
			Class_Ptr Hierarchy_A = nullptr;
				PropertyPtr Hierarchy_A_b = nullptr;
				OperationPtr Hierarchy_A_A_A = nullptr;
					ParameterPtr Hierarchy_A_A_A_result = nullptr;
			ActivityPtr Hierarchy_main = nullptr;
				ObjectFlowPtr Hierarchy_main_ObjectFlow171 = nullptr;
					LiteralBooleanPtr Hierarchy_main_ObjectFlow171_LiteralBoolean172 = nullptr;
					LiteralIntegerPtr Hierarchy_main_ObjectFlow171_LiteralInteger173 = nullptr;
				CallBehaviorActionPtr Hierarchy_main_instantiate_A = nullptr;
					OutputPinPtr Hierarchy_main_instantiate_A_a = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_main_instantiate_A_a_LiteralUnlimitedNatural174 = nullptr;
						LiteralIntegerPtr Hierarchy_main_instantiate_A_a_LiteralInteger175 = nullptr;
						LiteralIntegerPtr Hierarchy_main_instantiate_A_a_LiteralInteger176 = nullptr;
				CallBehaviorActionPtr Hierarchy_main_assert_A = nullptr;
					InputPinPtr Hierarchy_main_assert_A_a = nullptr;
						LiteralIntegerPtr Hierarchy_main_assert_A_a_LiteralInteger177 = nullptr;
						LiteralIntegerPtr Hierarchy_main_assert_A_a_LiteralInteger178 = nullptr;
						LiteralUnlimitedNaturalPtr Hierarchy_main_assert_A_a_LiteralUnlimitedNatural179 = nullptr;
			Class_Ptr Hierarchy_C = nullptr;
				PropertyPtr Hierarchy_C_d = nullptr;

		public:
			virtual ~HierarchyModel();
			static const std::shared_ptr<HierarchyModel>& Instance();

		private:
			HierarchyModel();
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

#endif /* HIERARCHY_MODEL_H */
