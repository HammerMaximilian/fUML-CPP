/*
 * DefaultValue_BasicTypesModel.h
 * 
 * Auto-generated file
 */

#ifndef DEFAULTVALUE_BASICTYPES_MODEL_H
#define DEFAULTVALUE_BASICTYPES_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace DefaultValue_BasicTypes
{
	class DefaultValue_BasicTypesModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model DefaultValue_BasicTypes
		 */
		PackagePtr DefaultValue_BasicTypes = nullptr;
			ActivityPtr DefaultValue_BasicTypes_main = nullptr;
				CallBehaviorActionPtr DefaultValue_BasicTypes_main_assert_A = nullptr;
					InputPinPtr DefaultValue_BasicTypes_main_assert_A_a = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_main_assert_A_a_LiteralInteger0 = nullptr;
						LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_main_assert_A_a_LiteralUnlimitedNatural1 = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_main_assert_A_a_LiteralInteger2 = nullptr;
				ObjectFlowPtr DefaultValue_BasicTypes_main_ObjectFlow3 = nullptr;
					LiteralIntegerPtr DefaultValue_BasicTypes_main_ObjectFlow3_LiteralInteger4 = nullptr;
					LiteralBooleanPtr DefaultValue_BasicTypes_main_ObjectFlow3_LiteralBoolean5 = nullptr;
				CallBehaviorActionPtr DefaultValue_BasicTypes_main_instantiate_A = nullptr;
					OutputPinPtr DefaultValue_BasicTypes_main_instantiate_A_a = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_main_instantiate_A_a_LiteralInteger6 = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_main_instantiate_A_a_LiteralInteger7 = nullptr;
						LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_main_instantiate_A_a_LiteralUnlimitedNatural8 = nullptr;
			EnumerationPtr DefaultValue_BasicTypes_E = nullptr;
				EnumerationLiteralPtr DefaultValue_BasicTypes_E_e1 = nullptr;
				EnumerationLiteralPtr DefaultValue_BasicTypes_E_e2 = nullptr;
			Class_Ptr DefaultValue_BasicTypes_A = nullptr;
				PropertyPtr DefaultValue_BasicTypes_A_pInteger = nullptr;
					LiteralIntegerPtr DefaultValue_BasicTypes_A_pInteger_LiteralInteger9 = nullptr;
				PropertyPtr DefaultValue_BasicTypes_A_pReal = nullptr;
					LiteralRealPtr DefaultValue_BasicTypes_A_pReal_LiteralReal10 = nullptr;
				PropertyPtr DefaultValue_BasicTypes_A_pEnum = nullptr;
					InstanceValuePtr DefaultValue_BasicTypes_A_pEnum_InstanceValue11 = nullptr;
				PropertyPtr DefaultValue_BasicTypes_A_pString = nullptr;
					LiteralStringPtr DefaultValue_BasicTypes_A_pString_LiteralString12 = nullptr;
				PropertyPtr DefaultValue_BasicTypes_A_pUnlimitedNatural = nullptr;
					LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_A_pUnlimitedNatural_LiteralUnlimitedNatural13 = nullptr;
				OperationPtr DefaultValue_BasicTypes_A_A_A = nullptr;
					ParameterPtr DefaultValue_BasicTypes_A_A_A_result = nullptr;
				PropertyPtr DefaultValue_BasicTypes_A_pBoolean = nullptr;
					LiteralBooleanPtr DefaultValue_BasicTypes_A_pBoolean_LiteralBoolean14 = nullptr;
			ActivityPtr DefaultValue_BasicTypes_assert_A = nullptr;
				ObjectFlowPtr DefaultValue_BasicTypes_assert_A_ObjectFlow15 = nullptr;
					LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_ObjectFlow15_LiteralInteger16 = nullptr;
					LiteralBooleanPtr DefaultValue_BasicTypes_assert_A_ObjectFlow15_LiteralBoolean17 = nullptr;
				CallBehaviorActionPtr DefaultValue_BasicTypes_assert_A_Test_Default_Values = nullptr;
					InputPinPtr DefaultValue_BasicTypes_assert_A_Test_Default_Values_pInteger = nullptr;
						LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_assert_A_Test_Default_Values_pInteger_LiteralUnlimitedNatural18 = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_Test_Default_Values_pInteger_LiteralInteger19 = nullptr;
					InputPinPtr DefaultValue_BasicTypes_assert_A_Test_Default_Values_pBoolean = nullptr;
						LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_assert_A_Test_Default_Values_pBoolean_LiteralUnlimitedNatural20 = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_Test_Default_Values_pBoolean_LiteralInteger21 = nullptr;
					InputPinPtr DefaultValue_BasicTypes_assert_A_Test_Default_Values_pReal = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_Test_Default_Values_pReal_LiteralInteger22 = nullptr;
						LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_assert_A_Test_Default_Values_pReal_LiteralUnlimitedNatural23 = nullptr;
					InputPinPtr DefaultValue_BasicTypes_assert_A_Test_Default_Values_pUnlimitedNatural = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_Test_Default_Values_pUnlimitedNatural_LiteralInteger24 = nullptr;
						LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_assert_A_Test_Default_Values_pUnlimitedNatural_LiteralUnlimitedNatural25 = nullptr;
					InputPinPtr DefaultValue_BasicTypes_assert_A_Test_Default_Values_pEnum = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_Test_Default_Values_pEnum_LiteralInteger26 = nullptr;
						LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_assert_A_Test_Default_Values_pEnum_LiteralUnlimitedNatural27 = nullptr;
					InputPinPtr DefaultValue_BasicTypes_assert_A_Test_Default_Values_pString = nullptr;
						LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_assert_A_Test_Default_Values_pString_LiteralUnlimitedNatural28 = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_Test_Default_Values_pString_LiteralInteger29 = nullptr;
				ObjectFlowPtr DefaultValue_BasicTypes_assert_A_ObjectFlow30 = nullptr;
					LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_ObjectFlow30_LiteralInteger31 = nullptr;
					LiteralBooleanPtr DefaultValue_BasicTypes_assert_A_ObjectFlow30_LiteralBoolean32 = nullptr;
				ObjectFlowPtr DefaultValue_BasicTypes_assert_A_ObjectFlow33 = nullptr;
					LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_ObjectFlow33_LiteralInteger34 = nullptr;
					LiteralBooleanPtr DefaultValue_BasicTypes_assert_A_ObjectFlow33_LiteralBoolean35 = nullptr;
				ObjectFlowPtr DefaultValue_BasicTypes_assert_A_ObjectFlow36 = nullptr;
					LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_ObjectFlow36_LiteralInteger37 = nullptr;
					LiteralBooleanPtr DefaultValue_BasicTypes_assert_A_ObjectFlow36_LiteralBoolean38 = nullptr;
				ParameterPtr DefaultValue_BasicTypes_assert_A_a = nullptr;
				ReadStructuralFeatureActionPtr DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural = nullptr;
					OutputPinPtr DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_result = nullptr;
						LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_result_LiteralUnlimitedNatural39 = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_result_LiteralInteger40 = nullptr;
					InputPinPtr DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_object = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_object_LiteralInteger41 = nullptr;
						LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_object_LiteralUnlimitedNatural42 = nullptr;
				ObjectFlowPtr DefaultValue_BasicTypes_assert_A_ObjectFlow43 = nullptr;
					LiteralBooleanPtr DefaultValue_BasicTypes_assert_A_ObjectFlow43_LiteralBoolean44 = nullptr;
					LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_ObjectFlow43_LiteralInteger45 = nullptr;
				ObjectFlowPtr DefaultValue_BasicTypes_assert_A_ObjectFlow46 = nullptr;
					LiteralBooleanPtr DefaultValue_BasicTypes_assert_A_ObjectFlow46_LiteralBoolean47 = nullptr;
					LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_ObjectFlow46_LiteralInteger48 = nullptr;
				ObjectFlowPtr DefaultValue_BasicTypes_assert_A_ObjectFlow49 = nullptr;
					LiteralBooleanPtr DefaultValue_BasicTypes_assert_A_ObjectFlow49_LiteralBoolean50 = nullptr;
					LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_ObjectFlow49_LiteralInteger51 = nullptr;
				ForkNodePtr DefaultValue_BasicTypes_assert_A_Fork_a = nullptr;
				ReadStructuralFeatureActionPtr DefaultValue_BasicTypes_assert_A_Read_a_pEnum = nullptr;
					OutputPinPtr DefaultValue_BasicTypes_assert_A_Read_a_pEnum_result = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_Read_a_pEnum_result_LiteralInteger52 = nullptr;
						LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_assert_A_Read_a_pEnum_result_LiteralUnlimitedNatural53 = nullptr;
					InputPinPtr DefaultValue_BasicTypes_assert_A_Read_a_pEnum_object = nullptr;
						LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_assert_A_Read_a_pEnum_object_LiteralUnlimitedNatural54 = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_Read_a_pEnum_object_LiteralInteger55 = nullptr;
				ObjectFlowPtr DefaultValue_BasicTypes_assert_A_ObjectFlow56 = nullptr;
					LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_ObjectFlow56_LiteralInteger57 = nullptr;
					LiteralBooleanPtr DefaultValue_BasicTypes_assert_A_ObjectFlow56_LiteralBoolean58 = nullptr;
				ReadStructuralFeatureActionPtr DefaultValue_BasicTypes_assert_A_Read_a_pReal = nullptr;
					OutputPinPtr DefaultValue_BasicTypes_assert_A_Read_a_pReal_result = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_Read_a_pReal_result_LiteralInteger59 = nullptr;
						LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_assert_A_Read_a_pReal_result_LiteralUnlimitedNatural60 = nullptr;
					InputPinPtr DefaultValue_BasicTypes_assert_A_Read_a_pReal_object = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_Read_a_pReal_object_LiteralInteger61 = nullptr;
						LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_assert_A_Read_a_pReal_object_LiteralUnlimitedNatural62 = nullptr;
				ObjectFlowPtr DefaultValue_BasicTypes_assert_A_ObjectFlow63 = nullptr;
					LiteralBooleanPtr DefaultValue_BasicTypes_assert_A_ObjectFlow63_LiteralBoolean64 = nullptr;
					LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_ObjectFlow63_LiteralInteger65 = nullptr;
				ObjectFlowPtr DefaultValue_BasicTypes_assert_A_ObjectFlow66 = nullptr;
					LiteralBooleanPtr DefaultValue_BasicTypes_assert_A_ObjectFlow66_LiteralBoolean67 = nullptr;
					LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_ObjectFlow66_LiteralInteger68 = nullptr;
				ReadStructuralFeatureActionPtr DefaultValue_BasicTypes_assert_A_Read_a_pInteger = nullptr;
					OutputPinPtr DefaultValue_BasicTypes_assert_A_Read_a_pInteger_result = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_Read_a_pInteger_result_LiteralInteger69 = nullptr;
						LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_assert_A_Read_a_pInteger_result_LiteralUnlimitedNatural70 = nullptr;
					InputPinPtr DefaultValue_BasicTypes_assert_A_Read_a_pInteger_object = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_Read_a_pInteger_object_LiteralInteger71 = nullptr;
						LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_assert_A_Read_a_pInteger_object_LiteralUnlimitedNatural72 = nullptr;
				ObjectFlowPtr DefaultValue_BasicTypes_assert_A_ObjectFlow73 = nullptr;
					LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_ObjectFlow73_LiteralInteger74 = nullptr;
					LiteralBooleanPtr DefaultValue_BasicTypes_assert_A_ObjectFlow73_LiteralBoolean75 = nullptr;
				OpaqueBehaviorPtr DefaultValue_BasicTypes_assert_A_testDefaultValues = nullptr;
					ParameterPtr DefaultValue_BasicTypes_assert_A_testDefaultValues_pString = nullptr;
					ParameterPtr DefaultValue_BasicTypes_assert_A_testDefaultValues_pUnlimitedNatural = nullptr;
					ParameterPtr DefaultValue_BasicTypes_assert_A_testDefaultValues_pReal = nullptr;
					ParameterPtr DefaultValue_BasicTypes_assert_A_testDefaultValues_pBoolean = nullptr;
					ParameterPtr DefaultValue_BasicTypes_assert_A_testDefaultValues_pInteger = nullptr;
					ParameterPtr DefaultValue_BasicTypes_assert_A_testDefaultValues_pEnum = nullptr;
				ReadStructuralFeatureActionPtr DefaultValue_BasicTypes_assert_A_Read_a_pString = nullptr;
					InputPinPtr DefaultValue_BasicTypes_assert_A_Read_a_pString_object = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_Read_a_pString_object_LiteralInteger76 = nullptr;
						LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_assert_A_Read_a_pString_object_LiteralUnlimitedNatural77 = nullptr;
					OutputPinPtr DefaultValue_BasicTypes_assert_A_Read_a_pString_result = nullptr;
						LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_assert_A_Read_a_pString_result_LiteralUnlimitedNatural78 = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_Read_a_pString_result_LiteralInteger79 = nullptr;
				ActivityParameterNodePtr DefaultValue_BasicTypes_assert_A_a_node = nullptr;
					LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_a_node_LiteralInteger80 = nullptr;
				ReadStructuralFeatureActionPtr DefaultValue_BasicTypes_assert_A_Read_a_pBoolean = nullptr;
					InputPinPtr DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_object = nullptr;
						LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_object_LiteralUnlimitedNatural81 = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_object_LiteralInteger82 = nullptr;
					OutputPinPtr DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_result = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_result_LiteralInteger83 = nullptr;
						LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_result_LiteralUnlimitedNatural84 = nullptr;
				ObjectFlowPtr DefaultValue_BasicTypes_assert_A_ObjectFlow85 = nullptr;
					LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_ObjectFlow85_LiteralInteger86 = nullptr;
					LiteralBooleanPtr DefaultValue_BasicTypes_assert_A_ObjectFlow85_LiteralBoolean87 = nullptr;
				ObjectFlowPtr DefaultValue_BasicTypes_assert_A_ObjectFlow88 = nullptr;
					LiteralBooleanPtr DefaultValue_BasicTypes_assert_A_ObjectFlow88_LiteralBoolean89 = nullptr;
					LiteralIntegerPtr DefaultValue_BasicTypes_assert_A_ObjectFlow88_LiteralInteger90 = nullptr;
			ActivityPtr DefaultValue_BasicTypes_instantiate_A = nullptr;
				ActivityParameterNodePtr DefaultValue_BasicTypes_instantiate_A_a_node = nullptr;
					LiteralIntegerPtr DefaultValue_BasicTypes_instantiate_A_a_node_LiteralInteger91 = nullptr;
				CallOperationActionPtr DefaultValue_BasicTypes_instantiate_A_A_ = nullptr;
					InputPinPtr DefaultValue_BasicTypes_instantiate_A_A__target = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_instantiate_A_A__target_LiteralInteger92 = nullptr;
						LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_instantiate_A_A__target_LiteralUnlimitedNatural93 = nullptr;
					OutputPinPtr DefaultValue_BasicTypes_instantiate_A_A__result = nullptr;
						LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_instantiate_A_A__result_LiteralUnlimitedNatural94 = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_instantiate_A_A__result_LiteralInteger95 = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_instantiate_A_A__result_LiteralInteger96 = nullptr;
				CreateObjectActionPtr DefaultValue_BasicTypes_instantiate_A_Create_A = nullptr;
					OutputPinPtr DefaultValue_BasicTypes_instantiate_A_Create_A_result = nullptr;
						LiteralIntegerPtr DefaultValue_BasicTypes_instantiate_A_Create_A_result_LiteralInteger97 = nullptr;
						LiteralUnlimitedNaturalPtr DefaultValue_BasicTypes_instantiate_A_Create_A_result_LiteralUnlimitedNatural98 = nullptr;
				ObjectFlowPtr DefaultValue_BasicTypes_instantiate_A_ObjectFlow99 = nullptr;
					LiteralIntegerPtr DefaultValue_BasicTypes_instantiate_A_ObjectFlow99_LiteralInteger100 = nullptr;
					LiteralBooleanPtr DefaultValue_BasicTypes_instantiate_A_ObjectFlow99_LiteralBoolean101 = nullptr;
				ParameterPtr DefaultValue_BasicTypes_instantiate_A_a = nullptr;
				ObjectFlowPtr DefaultValue_BasicTypes_instantiate_A_ObjectFlow102 = nullptr;
					LiteralBooleanPtr DefaultValue_BasicTypes_instantiate_A_ObjectFlow102_LiteralBoolean103 = nullptr;
					LiteralIntegerPtr DefaultValue_BasicTypes_instantiate_A_ObjectFlow102_LiteralInteger104 = nullptr;

		public:
			virtual ~DefaultValue_BasicTypesModel();
			static const std::shared_ptr<DefaultValue_BasicTypesModel>& Instance();

		private:
			DefaultValue_BasicTypesModel();
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

#endif /* DEFAULTVALUE_BASICTYPES_MODEL_H */
