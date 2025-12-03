/*
 * fwd.h
 *
 *  Created on: 02.12.2025
 *      Author: maxs
 */

#ifndef FUML_EXTENSIONS_FWD_H_
#define FUML_EXTENSIONS_FWD_H_

#include <vector>
#include <memory>

namespace fuml
{
	namespace extensions
	{
		namespace actions
		{
			class AddVariableValueActionActivation;
			class ClearVariableActionActivation;
			class ConditionalNodeActivationExtension;
			class LoopNodeActivationExtension;
			class ReadVariableActionActivation;
			class RemoveVariableValueActionActivation;
			class StructuredActivityNodeActivationExtension;
			class VariableActionActivation;
			class WriteVariableActionActivation;
		}

		namespace activities
		{
			class ActivityExecutionExtension;
			class CustomActivityExecution;
			class VariableValue;
		}

		namespace commonbehavior
		{
			class LIFOGetNextEventStrategy;
		}

		namespace loci
		{
			class LastChoiceStrategy;
			class RandomChoiceStrategy;
			class ExecutionFactoryExtension;
		}

		namespace structuredclassifiers
		{
			class SignatureBasedDispatchStrategy;
			class UMLConformingDispatchStrategy;
		}
	}
}

/*
 * Actions
 */
using AddVariableValueActionActivation = fuml::extensions::actions::AddVariableValueActionActivation;
using AddVariableValueActionActivationPtr = std::shared_ptr<AddVariableValueActionActivation>;
using ClearVariableActionActivation = fuml::extensions::actions::ClearVariableActionActivation;
using ClearVariableActionActivationPtr = std::shared_ptr<ClearVariableActionActivation>;
using ConditionalNodeActivationExtension = fuml::extensions::actions::ConditionalNodeActivationExtension;
using ConditionalNodeActivationExtensionPtr = std::shared_ptr<ConditionalNodeActivationExtension>;
using LoopNodeActivationExtension = fuml::extensions::actions::LoopNodeActivationExtension;
using LoopNodeActivationExtensionPtr = std::shared_ptr<LoopNodeActivationExtension>;
using ReadVariableActionActivation = fuml::extensions::actions::ReadVariableActionActivation;
using ReadVariableActionActivationPtr = std::shared_ptr<ReadVariableActionActivation>;
using RemoveVariableValueActionActivation = fuml::extensions::actions::RemoveVariableValueActionActivation;
using RemoveVariableValueActionActivationPtr = std::shared_ptr<RemoveVariableValueActionActivation>;
using StructuredActivityNodeActivationExtension = fuml::extensions::actions::StructuredActivityNodeActivationExtension;
using StructuredActivityNodeActivationExtensionPtr = std::shared_ptr<StructuredActivityNodeActivationExtension>;
using VariableActionActivation = fuml::extensions::actions::VariableActionActivation;
using VariableActionActivationPtr = std::shared_ptr<VariableActionActivation>;
using WriteVariableActionActivation = fuml::extensions::actions::WriteVariableActionActivation;
using WriteVariableActionActivationPtr = std::shared_ptr<WriteVariableActionActivation>;

using ActivityExecutionExtension = fuml::extensions::activities::ActivityExecutionExtension;
using ActivityExecutionExtensionPtr = std::shared_ptr<ActivityExecutionExtension>;
using CustomActivityExecution = fuml::extensions::activities::CustomActivityExecution;
using CustomActivityExecutionPtr = std::shared_ptr<CustomActivityExecution>;
using VariableValue = fuml::extensions::activities::VariableValue;
using VariableValuePtr = std::shared_ptr<VariableValue>;
using VariableValueList = std::vector<VariableValuePtr>;
using VariableValueListPtr = std::shared_ptr<VariableValueList>;

using LIFOGetNextEventStrategy = fuml::extensions::commonbehavior::LIFOGetNextEventStrategy;
using LIFOGetNextEventStrategyPtr = std::shared_ptr<LIFOGetNextEventStrategy>;

using LastChoiceStrategy = fuml::extensions::loci::LastChoiceStrategy;
using LastChoiceStrategyPtr = std::shared_ptr<LastChoiceStrategy>;
using RandomChoiceStrategy = fuml::extensions::loci::RandomChoiceStrategy;
using RandomChoiceStrategyPtr = std::shared_ptr<RandomChoiceStrategy>;
using ExecutionFactoryExtension = fuml::extensions::loci::ExecutionFactoryExtension;
using ExecutionFactoryExtensionPtr = std::shared_ptr<ExecutionFactoryExtension>;

using SignatureBasedDispatchStrategy = fuml::extensions::structuredclassifiers::SignatureBasedDispatchStrategy;
using SignatureBasedDispatchStrategyPtr = std::shared_ptr<SignatureBasedDispatchStrategy>;
using UMLConformingDispatchStrategy = fuml::extensions::structuredclassifiers::UMLConformingDispatchStrategy;
using UMLConformingDispatchStrategyPtr = std::shared_ptr<UMLConformingDispatchStrategy>;

#ifndef AS
	#define AS(T, SP) std::dynamic_pointer_cast<T>(SP)
#endif
#ifndef IS
	#define IS(T, SP) (std::dynamic_pointer_cast<T>(SP)!=nullptr)
#endif

#endif /* FUML_EXTENSIONS_FWD_H_ */
