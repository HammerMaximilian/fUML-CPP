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
#include <pscs/semantics/actions/CS_ReadExtentActionActivation.h>
#include <pscs/semantics/actions/CS_ReadSelfActionActivation.h>
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
        visitor.reset(new CS_ReadExtentActionActivation());
    }
    else if (IS(AcceptCallAction, element))
    {
        visitor.reset(new CS_AcceptCallActionActivation());
    }
    else if (IS(AcceptEventAction, element))
    {
        visitor.reset(new CS_AcceptEventActionActivation());
    }
    else if (IS(AddStructuralFeatureValueAction, element))
    {
        visitor.reset(new CS_AddStructuralFeatureValueActionActivation());
    }
    else if (IS(ClearStructuralFeatureAction, element))
    {
        visitor.reset(new CS_ClearStructuralFeatureActionActivation());
    }
    else if (IS(CreateLinkAction, element))
    {
        visitor.reset(new CS_CreateLinkActionActivation());
    }
    else if (IS(CreateObjectAction, element))
    {
        visitor.reset(new CS_CreateObjectActionActivation());
    }
    else if (IS(ReadSelfAction, element))
    {
        visitor.reset(new CS_ReadSelfActionActivation());
    }
    else if (IS(InstanceValue, element))
    {
        visitor.reset(new CS_InstanceValueEvaluation());
    }
    else if (IS(CallOperationAction, element))
    {
        visitor.reset(new CS_CallOperationActionActivation());
    }
    else if (IS(SendSignalAction, element))
    {
        visitor.reset(new CS_SendSignalActionActivation());
    }
    else if (IS(OpaqueExpression, element))
    {
        visitor.reset(new CS_OpaqueExpressionEvaluation());
    }
    else if (IS(CallEventBehavior, element))
    {
        visitor.reset(new CS_CallEventExecution());
    }
    else if (IS(RemoveStructuralFeatureValueAction, element))
    {
        visitor.reset(new CS_RemoveStructuralFeatureValueActionActivation());
    }
    else
    {
        visitor = ExecutionFactory::instantiateVisitor(element);
    }
    return visitor;
}
