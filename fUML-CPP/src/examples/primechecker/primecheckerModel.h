/*
 * primecheckerModel.h
 * 
 * Auto-generated file
 */

#ifndef PRIMECHECKER_MODEL_H
#define PRIMECHECKER_MODEL_H

#include <fuml/syntax/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace primechecker
{
	class primecheckerModel : public fuml::environment::InMemoryModel
	{
		public:
		/*
		 * Model primechecker
		 */
		PackagePtr primechecker = nullptr;
			OpaqueBehaviorPtr primechecker_enterNumber = nullptr;
				ParameterPtr primechecker_enterNumber_value = nullptr;
			OpaqueBehaviorPtr primechecker_printIsNotPrime = nullptr;
			ActivityPtr primechecker_checkIfPrime = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow0 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow0_LiteralInteger1 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow0_LiteralBoolean2 = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow3 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow3_LiteralInteger4 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow3_LiteralBoolean5 = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow6 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow6_LiteralInteger7 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow6_LiteralBoolean8 = nullptr;
				CallBehaviorActionPtr primechecker_checkIfPrime_callDoPrimeCheck = nullptr;
					OutputPinPtr primechecker_checkIfPrime_callDoPrimeCheck_out_number = nullptr;
					OutputPinPtr primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime_LiteralUnlimitedNatural9 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime_LiteralInteger10 = nullptr;
					InputPinPtr primechecker_checkIfPrime_callDoPrimeCheck_in_number = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callDoPrimeCheck_in_number_LiteralUnlimitedNatural11 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callDoPrimeCheck_in_number_LiteralInteger12 = nullptr;
					InputPinPtr primechecker_checkIfPrime_callDoPrimeCheck_in_i = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callDoPrimeCheck_in_i_LiteralUnlimitedNatural13 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callDoPrimeCheck_in_i_LiteralInteger14 = nullptr;
					OutputPinPtr primechecker_checkIfPrime_callDoPrimeCheck_out_i = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callDoPrimeCheck_out_i_LiteralInteger15 = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callDoPrimeCheck_out_i_LiteralUnlimitedNatural16 = nullptr;
				CallBehaviorActionPtr primechecker_checkIfPrime_callCheckIf_1_Or_0 = nullptr;
					OutputPinPtr primechecker_checkIfPrime_callCheckIf_1_Or_0_result = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callCheckIf_1_Or_0_result_LiteralUnlimitedNatural17 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callCheckIf_1_Or_0_result_LiteralInteger18 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callCheckIf_1_Or_0_result_LiteralInteger19 = nullptr;
					InputPinPtr primechecker_checkIfPrime_callCheckIf_1_Or_0_number = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callCheckIf_1_Or_0_number_LiteralInteger20 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callCheckIf_1_Or_0_number_LiteralInteger21 = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callCheckIf_1_Or_0_number_LiteralUnlimitedNatural22 = nullptr;
				CallBehaviorActionPtr primechecker_checkIfPrime_callPrintIsPrime = nullptr;
				ControlFlowPtr primechecker_checkIfPrime_ControlFlow23 = nullptr;
				CallBehaviorActionPtr primechecker_checkIfPrime_callPrintIsNotPrime = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow24 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow24_LiteralInteger25 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow24_LiteralBoolean26 = nullptr;
				ControlFlowPtr primechecker_checkIfPrime_ControlFlow27 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ControlFlow27_LiteralBoolean28 = nullptr;
				ValueSpecificationActionPtr primechecker_checkIfPrime_initializeLoopVariable = nullptr;
					OutputPinPtr primechecker_checkIfPrime_initializeLoopVariable_result = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_initializeLoopVariable_result_LiteralUnlimitedNatural29 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_initializeLoopVariable_result_LiteralInteger30 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_initializeLoopVariable_LiteralInteger31 = nullptr;
				MergeNodePtr primechecker_checkIfPrime_MergeIsNotPrime = nullptr;
				ControlFlowPtr primechecker_checkIfPrime_ControlFlow32 = nullptr;
				ForkNodePtr primechecker_checkIfPrime_ForkNumber = nullptr;
				ControlFlowPtr primechecker_checkIfPrime_ControlFlow33 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ControlFlow33_LiteralBoolean34 = nullptr;
				ActivityFinalNodePtr primechecker_checkIfPrime_FinalIsPrime = nullptr;
				InitialNodePtr primechecker_checkIfPrime_InitialNode1 = nullptr;
				ControlFlowPtr primechecker_checkIfPrime_ControlFlow35 = nullptr;
				ActivityFinalNodePtr primechecker_checkIfPrime_FinalIsNotPrime = nullptr;
				ControlFlowPtr primechecker_checkIfPrime_ControlFlow36 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ControlFlow36_LiteralBoolean37 = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow38 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow38_LiteralBoolean39 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow38_LiteralInteger40 = nullptr;
				DecisionNodePtr primechecker_checkIfPrime_isNotPrime = nullptr;
				ControlFlowPtr primechecker_checkIfPrime_ControlFlow41 = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow42 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow42_LiteralBoolean43 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow42_LiteralInteger44 = nullptr;
				DecisionNodePtr primechecker_checkIfPrime_conditionOk = nullptr;
				CallBehaviorActionPtr primechecker_checkIfPrime_callIncrement = nullptr;
					OutputPinPtr primechecker_checkIfPrime_callIncrement_out_i = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callIncrement_out_i_LiteralUnlimitedNatural45 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callIncrement_out_i_LiteralInteger46 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callIncrement_out_i_LiteralInteger47 = nullptr;
					InputPinPtr primechecker_checkIfPrime_callIncrement_in_i = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callIncrement_in_i_LiteralInteger48 = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callIncrement_in_i_LiteralUnlimitedNatural49 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callIncrement_in_i_LiteralInteger50 = nullptr;
				ControlFlowPtr primechecker_checkIfPrime_ControlFlow51 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ControlFlow51_LiteralBoolean52 = nullptr;
				ControlFlowPtr primechecker_checkIfPrime_ControlFlow53 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ControlFlow53_LiteralBoolean54 = nullptr;
				CallBehaviorActionPtr primechecker_checkIfPrime_callCheckLoopCondition = nullptr;
					OutputPinPtr primechecker_checkIfPrime_callCheckLoopCondition_conditionOk = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callCheckLoopCondition_conditionOk_LiteralUnlimitedNatural55 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callCheckLoopCondition_conditionOk_LiteralInteger56 = nullptr;
					InputPinPtr primechecker_checkIfPrime_callCheckLoopCondition_in_i = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callCheckLoopCondition_in_i_LiteralInteger57 = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callCheckLoopCondition_in_i_LiteralUnlimitedNatural58 = nullptr;
					InputPinPtr primechecker_checkIfPrime_callCheckLoopCondition_number = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callCheckLoopCondition_number_LiteralInteger59 = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callCheckLoopCondition_number_LiteralUnlimitedNatural60 = nullptr;
					OutputPinPtr primechecker_checkIfPrime_callCheckLoopCondition_out_i = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callCheckLoopCondition_out_i_LiteralUnlimitedNatural61 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callCheckLoopCondition_out_i_LiteralInteger62 = nullptr;
				ControlFlowPtr primechecker_checkIfPrime_ControlFlow63 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ControlFlow63_LiteralBoolean64 = nullptr;
				MergeNodePtr primechecker_checkIfPrime_Merge_i = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow65 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow65_LiteralInteger66 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow65_LiteralBoolean67 = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow68 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow68_LiteralInteger69 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow68_LiteralBoolean70 = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow71 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow71_LiteralBoolean72 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow71_LiteralInteger73 = nullptr;
				MergeNodePtr primechecker_checkIfPrime_MergeNumber = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow74 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow74_LiteralInteger75 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow74_LiteralBoolean76 = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow77 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow77_LiteralInteger78 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow77_LiteralBoolean79 = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow80 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow80_LiteralBoolean81 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow80_LiteralInteger82 = nullptr;
				CallBehaviorActionPtr primechecker_checkIfPrime_callEnterNumber = nullptr;
					OutputPinPtr primechecker_checkIfPrime_callEnterNumber_value = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callEnterNumber_value_LiteralInteger83 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callEnterNumber_value_LiteralInteger84 = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callEnterNumber_value_LiteralUnlimitedNatural85 = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow86 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow86_LiteralInteger87 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow86_LiteralBoolean88 = nullptr;
				DecisionNodePtr primechecker_checkIfPrime_1_Or_0 = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow89 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow89_LiteralBoolean90 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow89_LiteralInteger91 = nullptr;
			OpaqueBehaviorPtr primechecker_printIsPrime = nullptr;
			OpaqueBehaviorPtr primechecker_increment = nullptr;
				ParameterPtr primechecker_increment_in_i = nullptr;
				ParameterPtr primechecker_increment_out_i = nullptr;
			OpaqueBehaviorPtr primechecker_doPrimeCheck = nullptr;
				ParameterPtr primechecker_doPrimeCheck_in_i = nullptr;
				ParameterPtr primechecker_doPrimeCheck_out_number = nullptr;
				ParameterPtr primechecker_doPrimeCheck_number = nullptr;
				ParameterPtr primechecker_doPrimeCheck_out_i = nullptr;
				ParameterPtr primechecker_doPrimeCheck_isNotPrime = nullptr;
			OpaqueBehaviorPtr primechecker_checkIf_1_Or_0 = nullptr;
				ParameterPtr primechecker_checkIf_1_Or_0_result = nullptr;
				ParameterPtr primechecker_checkIf_1_Or_0_number = nullptr;
			OpaqueBehaviorPtr primechecker_checkLoopCondition = nullptr;
				ParameterPtr primechecker_checkLoopCondition_out_i = nullptr;
				ParameterPtr primechecker_checkLoopCondition_conditionOk = nullptr;
				ParameterPtr primechecker_checkLoopCondition_number = nullptr;
				ParameterPtr primechecker_checkLoopCondition_in_i = nullptr;

		public:
			virtual ~primecheckerModel();
			static const std::shared_ptr<primecheckerModel>& Instance();

		private:
			primecheckerModel();
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

#endif /* PRIMECHECKER_MODEL_H */
