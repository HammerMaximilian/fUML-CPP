/*
 * CalcModelModel.h
 * 
 * Auto-generated file
 */

#ifndef CALCMODEL_MODEL_H
#define CALCMODEL_MODEL_H

#include <fuml/syntax/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace CalcModel
{
	class CalcModelModel : public fuml::environment::InMemoryModel
	{
		public:
		/*
		 * Model CalcModel
		 */
		PackagePtr CalcModel = nullptr;
			Class_Ptr CalcModel_PrimeChecker = nullptr;
				OpaqueBehaviorPtr CalcModel_PrimeChecker_fbNext = nullptr;
				OpaqueBehaviorPtr CalcModel_PrimeChecker_obEnterNumber = nullptr;
				PropertyPtr CalcModel_PrimeChecker_number = nullptr;
					LiteralIntegerPtr CalcModel_PrimeChecker_number_LiteralInteger0 = nullptr;
				OpaqueBehaviorPtr CalcModel_PrimeChecker_fbIsNotFinished = nullptr;
					ParameterPtr CalcModel_PrimeChecker_fbIsNotFinished_isNotFinished = nullptr;
				OpaqueBehaviorPtr CalcModel_PrimeChecker_fbPrintIsPrime = nullptr;
				OpaqueBehaviorPtr CalcModel_PrimeChecker_fbIsOdd = nullptr;
					ParameterPtr CalcModel_PrimeChecker_fbIsOdd_isOdd = nullptr;
						LiteralStringPtr CalcModel_PrimeChecker_fbIsOdd_isOdd_LiteralString1 = nullptr;
				ActivityPtr CalcModel_PrimeChecker_CheckIfPrime = nullptr;
					ParameterPtr CalcModel_PrimeChecker_CheckIfPrime_actInputNode = nullptr;
					ControlFlowPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow2 = nullptr;
						LiteralIntegerPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow2_next_call_To_Merge_weight = nullptr;
						LiteralBooleanPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow2_next_call_To_Merge_guard = nullptr;
					DecisionNodePtr CalcModel_PrimeChecker_CheckIfPrime_dn_IsOdd = nullptr;
					CallOperationActionPtr CalcModel_PrimeChecker_CheckIfPrime_coaNext = nullptr;
						InputPinPtr CalcModel_PrimeChecker_CheckIfPrime_coaNext_self = nullptr;
					CallOperationActionPtr CalcModel_PrimeChecker_CheckIfPrime_coa_enterNumber = nullptr;
						InputPinPtr CalcModel_PrimeChecker_CheckIfPrime_coa_enterNumber_self = nullptr;
					DecisionNodePtr CalcModel_PrimeChecker_CheckIfPrime_dn_divides = nullptr;
					ControlFlowPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow3 = nullptr;
						LiteralBooleanPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow3_isNotFinishedGuard = nullptr;
					ControlFlowPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow4 = nullptr;
						LiteralBooleanPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow4_isOddGuard = nullptr;
					ControlFlowPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow5 = nullptr;
						LiteralIntegerPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow5_Initial1_To_enterNumber_weight = nullptr;
						LiteralBooleanPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow5_Initial1_To_enterNumber_guard = nullptr;
					MergeNodePtr CalcModel_PrimeChecker_CheckIfPrime_Merge = nullptr;
					CallOperationActionPtr CalcModel_PrimeChecker_CheckIfPrime_coaDivides = nullptr;
						InputPinPtr CalcModel_PrimeChecker_CheckIfPrime_coaDivides_self = nullptr;
						OutputPinPtr CalcModel_PrimeChecker_CheckIfPrime_coaDivides_isDivisible = nullptr;
					CallOperationActionPtr CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished = nullptr;
						InputPinPtr CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished_self = nullptr;
						OutputPinPtr CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished_isNotFinished = nullptr;
					CallBehaviorActionPtr CalcModel_PrimeChecker_CheckIfPrime_cbaPrintNotPrime = nullptr;
					ControlFlowPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow6 = nullptr;
						LiteralBooleanPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow6_isNotOdd = nullptr;
					ControlFlowPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow7 = nullptr;
						LiteralIntegerPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow7__To_ActivityFinal1_weight = nullptr;
						LiteralBooleanPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow7__To_ActivityFinal1_guard = nullptr;
					CallBehaviorActionPtr CalcModel_PrimeChecker_CheckIfPrime_cbaPrintIsPrime = nullptr;
					ActivityFinalNodePtr CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal2 = nullptr;
					CallBehaviorActionPtr CalcModel_PrimeChecker_CheckIfPrime_cbaPrintNotPrime2 = nullptr;
					CallOperationActionPtr CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd = nullptr;
						InputPinPtr CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd_self = nullptr;
						OutputPinPtr CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd_isOdd = nullptr;
					ControlFlowPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow8 = nullptr;
						LiteralBooleanPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow8_Merge_To_coaDivides_guard = nullptr;
						LiteralIntegerPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow8_Merge_To_coaDivides_weight = nullptr;
					ControlFlowPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow9 = nullptr;
						LiteralBooleanPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow9_divides_To__guard = nullptr;
						LiteralIntegerPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow9_divides_To__weight = nullptr;
					ControlFlowPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow10 = nullptr;
						LiteralBooleanPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow10_divides_To_next_call_guard = nullptr;
						LiteralIntegerPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow10_divides_To_next_call_weight = nullptr;
					ObjectFlowPtr CalcModel_PrimeChecker_CheckIfPrime_ifIsNotFinished = nullptr;
					DecisionNodePtr CalcModel_PrimeChecker_CheckIfPrime_dn_isNotFinished = nullptr;
					ObjectFlowPtr CalcModel_PrimeChecker_CheckIfPrime_ifIsOdd = nullptr;
					ActivityFinalNodePtr CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal1 = nullptr;
					InitialNodePtr CalcModel_PrimeChecker_CheckIfPrime_Initial1 = nullptr;
					ControlFlowPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow11 = nullptr;
						LiteralBooleanPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow11__To_ActivityFinal2_guard = nullptr;
						LiteralIntegerPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow11__To_ActivityFinal2_weight = nullptr;
					ControlFlowPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow12 = nullptr;
						LiteralIntegerPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow12_isNotFinished_To__weight = nullptr;
						LiteralBooleanPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow12_isNotFinished_To__guard = nullptr;
					ControlFlowPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow13 = nullptr;
						LiteralIntegerPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow13_enterNumber_To_coaIsOdd_weight = nullptr;
						LiteralBooleanPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow13_enterNumber_To_coaIsOdd_guard = nullptr;
					ActivityFinalNodePtr CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal3 = nullptr;
					ControlFlowPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow14 = nullptr;
						LiteralIntegerPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow14__To_ActivityFinal3_weight = nullptr;
						LiteralBooleanPtr CalcModel_PrimeChecker_CheckIfPrime_ControlFlow14__To_ActivityFinal3_guard = nullptr;
					ObjectFlowPtr CalcModel_PrimeChecker_CheckIfPrime_ifDivides = nullptr;
				OperationPtr CalcModel_PrimeChecker_isNotFinished = nullptr;
					ParameterPtr CalcModel_PrimeChecker_isNotFinished_isNotFinished = nullptr;
				OpaqueBehaviorPtr CalcModel_PrimeChecker_fbDivides = nullptr;
					ParameterPtr CalcModel_PrimeChecker_fbDivides_isDivisible = nullptr;
						LiteralStringPtr CalcModel_PrimeChecker_fbDivides_isDivisible_LiteralString15 = nullptr;
				OperationPtr CalcModel_PrimeChecker_enterNumber = nullptr;
				OpaqueBehaviorPtr CalcModel_PrimeChecker_fbPrintNotPrime = nullptr;
				OperationPtr CalcModel_PrimeChecker_isOdd = nullptr;
					ParameterPtr CalcModel_PrimeChecker_isOdd_isOdd = nullptr;
				OperationPtr CalcModel_PrimeChecker_divides = nullptr;
					ParameterPtr CalcModel_PrimeChecker_divides_isDivisible = nullptr;
				OperationPtr CalcModel_PrimeChecker_next = nullptr;
				PropertyPtr CalcModel_PrimeChecker_divider = nullptr;
					LiteralIntegerPtr CalcModel_PrimeChecker_divider_LiteralInteger16 = nullptr;

		public:
			virtual ~CalcModelModel();
			static const std::shared_ptr<CalcModelModel>& Instance();

		private:
			CalcModelModel();
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

#endif /* CALCMODEL_MODEL_H */
