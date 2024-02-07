/*
 * fwd.h
 *
 *  Created on: 20.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_FWD_H_
#define PSCS_SEMANTICS_FWD_H_

#include <vector>
#include <memory>

namespace pscs
{
	namespace semantics
	{
		namespace actions
		{
			class CS_AcceptCallActionActivation;
			class CS_AcceptEventActionActivation;
			class CS_AddStructuralFeatureValueActionActivation;
			class CS_CallOperationActionActivation;
			class CS_ClearStructuralFeatureActionActivation;
			class CS_ConstructStrategy;
			class CS_CreateLinkActionActivation;
			class CS_CreateObjectActionActivation;
			class CS_DefaultConstructStrategy;
			class CS_ReadExtentActionActivation;
			class CS_ReadSelfActionActivation;
			class CS_RemoveStructuralFeatureValueActionActivation;
			class CS_SendSignalActionActivation;
		}

		namespace classification
		{
			class CS_InstanceValueEvaluation;
		}

		namespace commonbehavior
		{
			class CS_CallEventExecution;
			class CS_EventOccurrence;
		}

		namespace loci
		{
			class CS_ExecutionFactory;
			class CS_Executor;
			class CS_Locus;
		}

		namespace structuredclassifiers
		{
			class CS_DefaultRequestPropagationStrategy;
			class CS_DispatchOperationOfInterfaceStrategy;
			class CS_InteractionPoint;
			class CS_Link;
			class CS_NameBased_StructuralFeatureOfInterfaceAccessStrategy;
			class CS_Object;
			class CS_Reference;
			class CS_RequestPropagationStrategy;
			class CS_StructuralFeatureOfInterfaceAccessStrategy;
		}

		namespace values
		{
			class CS_OpaqueExpressionEvaluation;
		}
	}
}

/*
 * Actions
 */
using CS_AcceptCallActionActivation = pscs::semantics::actions::CS_AcceptCallActionActivation;
using CS_AcceptCallActionActivationPtr = std::shared_ptr<CS_AcceptCallActionActivation>;
using CS_AcceptEventActionActivation = pscs::semantics::actions::CS_AcceptEventActionActivation;
using CS_AcceptEventActionActivationPtr = std::shared_ptr<CS_AcceptEventActionActivation>;
using CS_AddStructuralFeatureValueActionActivation = pscs::semantics::actions::CS_AddStructuralFeatureValueActionActivation;
using CS_AddStructuralFeatureValueActionActivationPtr = std::shared_ptr<CS_AddStructuralFeatureValueActionActivation>;
using CS_CallOperationActionActivation = pscs::semantics::actions::CS_CallOperationActionActivation;
using CS_CallOperationActionActivationPtr = std::shared_ptr<CS_CallOperationActionActivation>;
using CS_ClearStructuralFeatureActionActivation = pscs::semantics::actions::CS_ClearStructuralFeatureActionActivation;
using CS_ClearStructuralFeatureActionActivationPtr = std::shared_ptr<CS_ClearStructuralFeatureActionActivation>;
using CS_ConstructStrategy = pscs::semantics::actions::CS_ConstructStrategy;
using CS_ConstructStrategyPtr = std::shared_ptr<CS_ConstructStrategy>;
using CS_CreateLinkActionActivation = pscs::semantics::actions::CS_CreateLinkActionActivation;
using CS_CreateLinkActionActivationPtr = std::shared_ptr<CS_CreateLinkActionActivation>;
using CS_CreateObjectActionActivation = pscs::semantics::actions::CS_CreateObjectActionActivation;
using CS_CreateObjectActionActivationPtr = std::shared_ptr<CS_CreateObjectActionActivation>;
using CS_DefaultConstructStrategy = pscs::semantics::actions::CS_DefaultConstructStrategy;
using CS_DefaultConstructStrategyPtr = std::shared_ptr<CS_DefaultConstructStrategy>;
using CS_ReadExtentActionActivation = pscs::semantics::actions::CS_ReadExtentActionActivation;
using CS_ReadExtentActionActivationPtr = std::shared_ptr<CS_ReadExtentActionActivation>;
using CS_ReadSelfActionActivation = pscs::semantics::actions::CS_ReadSelfActionActivation;
using CS_ReadSelfActionActivationPtr = std::shared_ptr<CS_ReadSelfActionActivation>;
using CS_RemoveStructuralFeatureValueActionActivation = pscs::semantics::actions::CS_RemoveStructuralFeatureValueActionActivation;
using CS_RemoveStructuralFeatureValueActionActivationPtr = std::shared_ptr<CS_RemoveStructuralFeatureValueActionActivation>;
using CS_SendSignalActionActivation = pscs::semantics::actions::CS_SendSignalActionActivation;
using CS_SendSignalActionActivationPtr = std::shared_ptr<CS_SendSignalActionActivation>;


/*
 * Classification
 */
using CS_InstanceValueEvaluation = pscs::semantics::classification::CS_InstanceValueEvaluation;
using CS_InstanceValueEvaluationPtr = std::shared_ptr<CS_InstanceValueEvaluation>;

/*
 * CommonBehavior
 */
using CS_CallEventExecution = pscs::semantics::commonbehavior::CS_CallEventExecution;
using CS_CallEventExecutionPtr = std::shared_ptr<CS_CallEventExecution>;
using CS_EventOccurrence = pscs::semantics::commonbehavior::CS_EventOccurrence;
using CS_EventOccurrencePtr = std::shared_ptr<CS_EventOccurrence>;
using CS_EventOccurrencePtr_w = std::weak_ptr<CS_EventOccurrence>;

/*
 * Loci
 */
using CS_ExecutionFactory = pscs::semantics::loci::CS_ExecutionFactory;
using CS_ExecutionFactoryPtr = std::shared_ptr<CS_ExecutionFactory>;
using CS_Executor = pscs::semantics::loci::CS_Executor;
using CS_ExecutorPtr = std::shared_ptr<CS_Executor>;
using CS_Locus = pscs::semantics::loci::CS_Locus;
using CS_LocusPtr = std::shared_ptr<CS_Locus>;

/*
 * StructuredClassifiers
 */
using CS_DefaultRequestPropagationStrategy = pscs::semantics::structuredclassifiers::CS_DefaultRequestPropagationStrategy;
using CS_DefaultRequestPropagationStrategyPtr = std::shared_ptr<CS_DefaultRequestPropagationStrategy>;
using CS_DispatchOperationOfInterfaceStrategy = pscs::semantics::structuredclassifiers::CS_DispatchOperationOfInterfaceStrategy;
using CS_DispatchOperationOfInterfaceStrategyPtr = std::shared_ptr<CS_DispatchOperationOfInterfaceStrategy>;
using CS_InteractionPoint = pscs::semantics::structuredclassifiers::CS_InteractionPoint;
using CS_InteractionPointPtr = std::shared_ptr<CS_InteractionPoint>;
using CS_InteractionPointPtr_w = std::weak_ptr<CS_InteractionPoint>;
using CS_Link = pscs::semantics::structuredclassifiers::CS_Link;
using CS_LinkPtr = std::shared_ptr<CS_Link>;
using CS_LinkList = std::vector<CS_LinkPtr>;
using CS_LinkListPtr = std::shared_ptr<CS_LinkList>;
using CS_NameBased_StructuralFeatureOfInterfaceAccessStrategy = pscs::semantics::structuredclassifiers::CS_NameBased_StructuralFeatureOfInterfaceAccessStrategy;
using CS_NameBased_StructuralFeatureOfInterfaceAccessStrategyPtr = std::shared_ptr<CS_NameBased_StructuralFeatureOfInterfaceAccessStrategy>;
using CS_Object = pscs::semantics::structuredclassifiers::CS_Object;
using CS_ObjectPtr = std::shared_ptr<CS_Object>;
using CS_ObjectPtr_w = std::weak_ptr<CS_Object>;
using CS_ObjectList = std::vector<CS_ObjectPtr>;
using CS_ObjectListPtr = std::shared_ptr<CS_ObjectList>;
using CS_Reference = pscs::semantics::structuredclassifiers::CS_Reference;
using CS_ReferencePtr = std::shared_ptr<CS_Reference>;
using CS_RequestPropagationStrategy = pscs::semantics::structuredclassifiers::CS_RequestPropagationStrategy;
using CS_RequestPropagationStrategyPtr = std::shared_ptr<CS_RequestPropagationStrategy>;
using CS_StructuralFeatureOfInterfaceAccessStrategy = pscs::semantics::structuredclassifiers::CS_StructuralFeatureOfInterfaceAccessStrategy;
using CS_StructuralFeatureOfInterfaceAccessStrategyPtr = std::shared_ptr<CS_StructuralFeatureOfInterfaceAccessStrategy>;

/*
 * Values
 */
using CS_OpaqueExpressionEvaluation = pscs::semantics::values::CS_OpaqueExpressionEvaluation;
using CS_OpaqueExpressionEvaluationPtr = std::shared_ptr<CS_OpaqueExpressionEvaluation>;

#define AS(T, SP) std::dynamic_pointer_cast<T>(SP)
#define IS(T, SP) (std::dynamic_pointer_cast<T>(SP)!=nullptr)

#endif /* PSCS_SEMANTICS_FWD_H_ */
