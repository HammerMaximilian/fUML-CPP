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
			OpaqueBehaviorPtr primechecker_printIsPrime = nullptr;
			ActivityPtr primechecker_checkIfPrime = nullptr;
				ControlFlowPtr primechecker_checkIfPrime_ControlFlow0 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ControlFlow0_LiteralBoolean1 = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow2 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow2_LiteralInteger3 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow2_LiteralBoolean4 = nullptr;
				DecisionNodePtr primechecker_checkIfPrime_conditionOk = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow5 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow5_LiteralBoolean6 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow5_LiteralInteger7 = nullptr;
				CallBehaviorActionPtr primechecker_checkIfPrime_callCheckLoopCondition = nullptr;
					InputPinPtr primechecker_checkIfPrime_callCheckLoopCondition_number = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callCheckLoopCondition_number_LiteralInteger8 = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callCheckLoopCondition_number_LiteralUnlimitedNatural9 = nullptr;
					OutputPinPtr primechecker_checkIfPrime_callCheckLoopCondition_conditionOk = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callCheckLoopCondition_conditionOk_LiteralInteger10 = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callCheckLoopCondition_conditionOk_LiteralUnlimitedNatural11 = nullptr;
					InputPinPtr primechecker_checkIfPrime_callCheckLoopCondition_in_i = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callCheckLoopCondition_in_i_LiteralUnlimitedNatural12 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callCheckLoopCondition_in_i_LiteralInteger13 = nullptr;
					OutputPinPtr primechecker_checkIfPrime_callCheckLoopCondition_out_i = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callCheckLoopCondition_out_i_LiteralInteger14 = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callCheckLoopCondition_out_i_LiteralUnlimitedNatural15 = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow16 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow16_LiteralInteger17 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow16_LiteralBoolean18 = nullptr;
				ControlFlowPtr primechecker_checkIfPrime_ControlFlow19 = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow20 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow20_LiteralBoolean21 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow20_LiteralInteger22 = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow23 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow23_LiteralBoolean24 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow23_LiteralInteger25 = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow26 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow26_LiteralBoolean27 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow26_LiteralInteger28 = nullptr;
				ControlFlowPtr primechecker_checkIfPrime_ControlFlow29 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ControlFlow29_LiteralBoolean30 = nullptr;
				ForkNodePtr primechecker_checkIfPrime_ForkNumber = nullptr;
				CallBehaviorActionPtr primechecker_checkIfPrime_callPrintIsPrime = nullptr;
				ControlFlowPtr primechecker_checkIfPrime_ControlFlow31 = nullptr;
				ValueSpecificationActionPtr primechecker_checkIfPrime_initializeLoopVariable = nullptr;
					OutputPinPtr primechecker_checkIfPrime_initializeLoopVariable_result = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_initializeLoopVariable_result_LiteralUnlimitedNatural32 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_initializeLoopVariable_result_LiteralInteger33 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_initializeLoopVariable_LiteralInteger34 = nullptr;
				ControlFlowPtr primechecker_checkIfPrime_ControlFlow35 = nullptr;
				DecisionNodePtr primechecker_checkIfPrime_1_Or_0 = nullptr;
				CallBehaviorActionPtr primechecker_checkIfPrime_callIncrement = nullptr;
					OutputPinPtr primechecker_checkIfPrime_callIncrement_out_i = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callIncrement_out_i_LiteralUnlimitedNatural36 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callIncrement_out_i_LiteralInteger37 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callIncrement_out_i_LiteralInteger38 = nullptr;
					InputPinPtr primechecker_checkIfPrime_callIncrement_in_i = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callIncrement_in_i_LiteralUnlimitedNatural39 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callIncrement_in_i_LiteralInteger40 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callIncrement_in_i_LiteralInteger41 = nullptr;
				MergeNodePtr primechecker_checkIfPrime_MergeNumber = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow42 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow42_LiteralInteger43 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow42_LiteralBoolean44 = nullptr;
				CallBehaviorActionPtr primechecker_checkIfPrime_callDoPrimeCheck = nullptr;
					OutputPinPtr primechecker_checkIfPrime_callDoPrimeCheck_out_number = nullptr;
					OutputPinPtr primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime_LiteralUnlimitedNatural45 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime_LiteralInteger46 = nullptr;
					OutputPinPtr primechecker_checkIfPrime_callDoPrimeCheck_out_i = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callDoPrimeCheck_out_i_LiteralInteger47 = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callDoPrimeCheck_out_i_LiteralUnlimitedNatural48 = nullptr;
					InputPinPtr primechecker_checkIfPrime_callDoPrimeCheck_in_number = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callDoPrimeCheck_in_number_LiteralUnlimitedNatural49 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callDoPrimeCheck_in_number_LiteralInteger50 = nullptr;
					InputPinPtr primechecker_checkIfPrime_callDoPrimeCheck_in_i = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callDoPrimeCheck_in_i_LiteralInteger51 = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callDoPrimeCheck_in_i_LiteralUnlimitedNatural52 = nullptr;
				DecisionNodePtr primechecker_checkIfPrime_isNotPrime = nullptr;
				ControlFlowPtr primechecker_checkIfPrime_ControlFlow53 = nullptr;
				CallBehaviorActionPtr primechecker_checkIfPrime_callEnterNumber = nullptr;
					OutputPinPtr primechecker_checkIfPrime_callEnterNumber_value = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callEnterNumber_value_LiteralInteger54 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callEnterNumber_value_LiteralInteger55 = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callEnterNumber_value_LiteralUnlimitedNatural56 = nullptr;
				MergeNodePtr primechecker_checkIfPrime_MergeIsNotPrime = nullptr;
				MergeNodePtr primechecker_checkIfPrime_Merge_i = nullptr;
				ControlFlowPtr primechecker_checkIfPrime_ControlFlow57 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ControlFlow57_LiteralBoolean58 = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow59 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow59_LiteralBoolean60 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow59_LiteralInteger61 = nullptr;
				InitialNodePtr primechecker_checkIfPrime_InitialNode1 = nullptr;
				CallBehaviorActionPtr primechecker_checkIfPrime_callPrintIsNotPrime = nullptr;
				CallBehaviorActionPtr primechecker_checkIfPrime_callCheckIf_1_Or_0 = nullptr;
					InputPinPtr primechecker_checkIfPrime_callCheckIf_1_Or_0_in_number = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callCheckIf_1_Or_0_in_number_LiteralInteger62 = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callCheckIf_1_Or_0_in_number_LiteralUnlimitedNatural63 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callCheckIf_1_Or_0_in_number_LiteralInteger64 = nullptr;
					OutputPinPtr primechecker_checkIfPrime_callCheckIf_1_Or_0_result = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callCheckIf_1_Or_0_result_LiteralInteger65 = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callCheckIf_1_Or_0_result_LiteralInteger66 = nullptr;
						LiteralUnlimitedNaturalPtr primechecker_checkIfPrime_callCheckIf_1_Or_0_result_LiteralUnlimitedNatural67 = nullptr;
					OutputPinPtr primechecker_checkIfPrime_callCheckIf_1_Or_0_out_number = nullptr;
						LiteralIntegerPtr primechecker_checkIfPrime_callCheckIf_1_Or_0_out_number_LiteralInteger68 = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow69 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow69_LiteralBoolean70 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow69_LiteralInteger71 = nullptr;
				ActivityFinalNodePtr primechecker_checkIfPrime_FinalIsPrime = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow72 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow72_LiteralBoolean73 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow72_LiteralInteger74 = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow75 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow75_LiteralInteger76 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow75_LiteralBoolean77 = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow78 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow78_LiteralInteger79 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow78_LiteralBoolean80 = nullptr;
				ControlFlowPtr primechecker_checkIfPrime_ControlFlow81 = nullptr;
				MergeNodePtr primechecker_checkIfPrime_MergeControl = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow82 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow82_LiteralInteger83 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow82_LiteralBoolean84 = nullptr;
				ControlFlowPtr primechecker_checkIfPrime_ControlFlow85 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ControlFlow85_LiteralBoolean86 = nullptr;
				ControlFlowPtr primechecker_checkIfPrime_ControlFlow87 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ControlFlow87_LiteralBoolean88 = nullptr;
				ObjectFlowPtr primechecker_checkIfPrime_ObjectFlow89 = nullptr;
					LiteralIntegerPtr primechecker_checkIfPrime_ObjectFlow89_LiteralInteger90 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ObjectFlow89_LiteralBoolean91 = nullptr;
				ControlFlowPtr primechecker_checkIfPrime_ControlFlow92 = nullptr;
					LiteralBooleanPtr primechecker_checkIfPrime_ControlFlow92_LiteralBoolean93 = nullptr;
				ActivityFinalNodePtr primechecker_checkIfPrime_FinalIsNotPrime = nullptr;
				ControlFlowPtr primechecker_checkIfPrime_ControlFlow94 = nullptr;
			OpaqueBehaviorPtr primechecker_increment = nullptr;
				ParameterPtr primechecker_increment_in_i = nullptr;
				ParameterPtr primechecker_increment_out_i = nullptr;
			OpaqueBehaviorPtr primechecker_enterNumber = nullptr;
				ParameterPtr primechecker_enterNumber_value = nullptr;
			OpaqueBehaviorPtr primechecker_checkLoopCondition = nullptr;
				ParameterPtr primechecker_checkLoopCondition_number = nullptr;
				ParameterPtr primechecker_checkLoopCondition_in_i = nullptr;
				ParameterPtr primechecker_checkLoopCondition_out_i = nullptr;
				ParameterPtr primechecker_checkLoopCondition_conditionOk = nullptr;
			OpaqueBehaviorPtr primechecker_doPrimeCheck = nullptr;
				ParameterPtr primechecker_doPrimeCheck_number = nullptr;
				ParameterPtr primechecker_doPrimeCheck_isNotPrime = nullptr;
				ParameterPtr primechecker_doPrimeCheck_out_number = nullptr;
				ParameterPtr primechecker_doPrimeCheck_in_i = nullptr;
				ParameterPtr primechecker_doPrimeCheck_out_i = nullptr;
			OpaqueBehaviorPtr primechecker_printIsNotPrime = nullptr;
			OpaqueBehaviorPtr primechecker_checkIf_1_Or_0 = nullptr;
				ParameterPtr primechecker_checkIf_1_Or_0_result = nullptr;
				ParameterPtr primechecker_checkIf_1_Or_0_in_number = nullptr;
				ParameterPtr primechecker_checkIf_1_Or_0_out_number = nullptr;

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
