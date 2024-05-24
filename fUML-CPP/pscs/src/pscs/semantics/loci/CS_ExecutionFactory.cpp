/*
 * CS_ExecutionFactory.cpp
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#include <pscs/semantics/loci/CS_ExecutionFactory.h>

#include <fuml/semantics/commonbehavior/CallEventBehavior.h>
#include <pscs/semantics/actions/CS_AcceptCallActionActivation.h>
#include <pscs/semantics/actions/CS_AcceptEventActionActivation.h>
#include <pscs/semantics/actions/CS_AddStructuralFeatureValueActionActivation.h>
#include <pscs/semantics/actions/CS_CallOperationActionActivation.h>
#include <pscs/semantics/actions/CS_ClearStructuralFeatureActionActivation.h>
#include <pscs/semantics/actions/CS_CreateLinkActionActivation.h>
#include <pscs/semantics/actions/CS_CreateObjectActionActivation.h>
#include <pscs/semantics/actions/CS_ReadSelfActionActivation.h>
#include <pscs/semantics/actions/CS_ReadExtentActionActivation.h>
#include <pscs/semantics/actions/CS_RemoveStructuralFeatureValueActionActivation.h>
#include <pscs/semantics/actions/CS_SendSignalActionActivation.h>
#include <pscs/semantics/classification/CS_InstanceValueEvaluation.h>
#include <pscs/semantics/commonbehavior/CS_CallEventExecution.h>
#include <pscs/semantics/fwd.h>
#include <pscs/semantics/values/CS_OpaqueExpressionEvaluation.h>
#include <uml/actions/AcceptCallAction.h>
#include <uml/actions/AcceptEventAction.h>
#include <uml/actions/AddStructuralFeatureValueAction.h>
#include <uml/actions/CallOperationAction.h>
#include <uml/actions/ClearStructuralFeatureAction.h>
#include <uml/actions/CreateLinkAction.h>
#include <uml/actions/CreateObjectAction.h>
#include <uml/actions/ReadExtentAction.h>
#include <uml/actions/ReadExtentAction.h>
#include <uml/actions/ReadSelfAction.h>
#include <uml/actions/RemoveStructuralFeatureValueAction.h>
#include <uml/actions/SendSignalAction.h>
#include <uml/classification/InstanceValue.h>
#include <uml/values/OpaqueExpression.h>

SemanticVisitorPtr CS_ExecutionFactory::instantiateVisitor(const ElementPtr& element)
{
    // Extends fUML semantics in the sense that newly introduced
    // semantic visitors are instantiated instead of fUML visitors
    SemanticVisitorPtr visitor;
    if (IS(ReadExtentAction, element))
    {
    	CS_ReadExtentActionActivationPtr newCS_ReadExtentActionActivation(new CS_ReadExtentActionActivation());
    	newCS_ReadExtentActionActivation->setThisActionActivationPtr(newCS_ReadExtentActionActivation);
        visitor = newCS_ReadExtentActionActivation;
    }
    else if (IS(AcceptCallAction, element))
    {
		CS_AcceptCallActionActivationPtr newCS_AcceptCallActionActivation(new CS_AcceptCallActionActivation());
		newCS_AcceptCallActionActivation->setThisAcceptEventActionActivationPtr(newCS_AcceptCallActionActivation);
		visitor = newCS_AcceptCallActionActivation;
    }
    else if (IS(AcceptEventAction, element))
    {
		CS_AcceptEventActionActivationPtr newCS_AcceptEventActionActivation(new CS_AcceptEventActionActivation());
		newCS_AcceptEventActionActivation->setThisAcceptEventActionActivationPtr(newCS_AcceptEventActionActivation);
		visitor = newCS_AcceptEventActionActivation;
    }
    else if (IS(AddStructuralFeatureValueAction, element))
    {
		CS_AddStructuralFeatureValueActionActivationPtr newCS_AddStructuralFeatureValueActionActivation(
			new CS_AddStructuralFeatureValueActionActivation());
		newCS_AddStructuralFeatureValueActionActivation->setThisActionActivationPtr(
			newCS_AddStructuralFeatureValueActionActivation);
		visitor = newCS_AddStructuralFeatureValueActionActivation;
    }
    else if (IS(ClearStructuralFeatureAction, element))
    {
		CS_ClearStructuralFeatureActionActivationPtr newCS_ClearStructuralFeatureActionActivation(
			new CS_ClearStructuralFeatureActionActivation());
		newCS_ClearStructuralFeatureActionActivation->setThisActionActivationPtr(
			newCS_ClearStructuralFeatureActionActivation);
		visitor = newCS_ClearStructuralFeatureActionActivation;
    }
    else if (IS(CreateLinkAction, element))
    {
		CS_CreateLinkActionActivationPtr newCS_CreateLinkActionActivation(new CS_CreateLinkActionActivation());
		newCS_CreateLinkActionActivation->setThisActionActivationPtr(newCS_CreateLinkActionActivation);
		visitor = newCS_CreateLinkActionActivation;
    }
    else if (IS(CreateObjectAction, element))
    {
		CS_CreateObjectActionActivationPtr newCS_CreateObjectActionActivation(new CS_CreateObjectActionActivation());
		newCS_CreateObjectActionActivation->setThisActionActivationPtr(newCS_CreateObjectActionActivation);
		visitor = newCS_CreateObjectActionActivation;
    }
    else if (IS(ReadSelfAction, element))
    {
		CS_ReadSelfActionActivationPtr newCS_ReadSelfActionActivation(new CS_ReadSelfActionActivation());
		newCS_ReadSelfActionActivation->setThisActionActivationPtr(newCS_ReadSelfActionActivation);
		visitor = newCS_ReadSelfActionActivation;
    }
    else if (IS(InstanceValue, element))
    {
        visitor.reset(new CS_InstanceValueEvaluation());
    }
    else if (IS(CallOperationAction, element))
    {
		CS_CallOperationActionActivationPtr newCS_CallOperationActionActivation(new CS_CallOperationActionActivation());
		newCS_CallOperationActionActivation->setThisActionActivationPtr(newCS_CallOperationActionActivation);
		visitor = newCS_CallOperationActionActivation;
    }
    else if (IS(SendSignalAction, element))
    {
		CS_SendSignalActionActivationPtr newCS_SendSignalActionActivation(new CS_SendSignalActionActivation());
		newCS_SendSignalActionActivation->setThisActionActivationPtr(newCS_SendSignalActionActivation);
		visitor = newCS_SendSignalActionActivation;
    }
    else if (IS(OpaqueExpression, element))
    {
        visitor.reset(new CS_OpaqueExpressionEvaluation());
    }
    else if (IS(CallEventBehavior, element))
    {
		CS_CallEventExecutionPtr newCS_CallEventExecution(new CS_CallEventExecution());
		newCS_CallEventExecution->setThisCallEventExecutionPtr(newCS_CallEventExecution);
		visitor = newCS_CallEventExecution;
    }
    else if (IS(RemoveStructuralFeatureValueAction, element))
    {
		CS_RemoveStructuralFeatureValueActionActivationPtr newCS_RemoveStructuralFeatureValueActionActivation(
			new CS_RemoveStructuralFeatureValueActionActivation());
		newCS_RemoveStructuralFeatureValueActionActivation->setThisActionActivationPtr(
			newCS_RemoveStructuralFeatureValueActionActivation);
		visitor = newCS_RemoveStructuralFeatureValueActionActivation;
    }
    else
    {
        visitor = ExecutionFactory::instantiateVisitor(element);
    }
    return visitor;
}
