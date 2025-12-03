/*
 * ExecutionFactoryExtension.cpp
 *
 *  Created on: 02.12.2025
 *      Author: maxs
 */

#include <fuml/extensions/loci/ExecutionFactoryExtension.h>

#include <fuml/extensions/fwd.h>
#include <fuml/extensions/actions/AddVariableValueActionActivation.h>
#include <fuml/extensions/actions/ClearVariableActionActivation.h>
#include <fuml/extensions/actions/ConditionalNodeActivationExtension.h>
#include <fuml/extensions/actions/LoopNodeActivationExtension.h>
#include <fuml/extensions/actions/ReadVariableActionActivation.h>
#include <fuml/extensions/actions/RemoveVariableValueActionActivation.h>
#include <fuml/extensions/actions/StructuredActivityNodeActivationExtension.h>
#include <fuml/extensions/activities/ActivityExecutionExtension.h>
#include <uml/actions/AddVariableValueAction.h>
#include <uml/actions/ClearVariableAction.h>
#include <uml/actions/ConditionalNode.h>
#include <uml/actions/LoopNode.h>
#include <uml/actions/ReadVariableAction.h>
#include <uml/actions/RemoveVariableValueAction.h>
#include <uml/actions/StructuredActivityNode.h>
#include <uml/activities/Activity.h>

SemanticVisitorPtr ExecutionFactoryExtension::instantiateVisitor(const ElementPtr& element)
{
	// Extends fUML semantics in the sense that newly introduced
	// semantic visitors are instantiated instead of fUML visitors.

	SemanticVisitorPtr visitor = nullptr;

	if (IS(Activity, element))
	{
		ActivityExecutionExtensionPtr newActivityExecution(new ActivityExecutionExtension());
		newActivityExecution->setThisActivityExecutionPtr(newActivityExecution);
		visitor = newActivityExecution;
	}
	else if (IS(ConditionalNode, element))
	{
		ConditionalNodeActivationExtensionPtr newConditionalNodeActivation(new ConditionalNodeActivationExtension());
		newConditionalNodeActivation->setThisConditionalNodeActivationPtr(newConditionalNodeActivation);
		visitor = newConditionalNodeActivation;
	}

	else if (IS(LoopNode, element))
	{
		LoopNodeActivationExtensionPtr newLoopNodeActivation(new LoopNodeActivationExtension());
		newLoopNodeActivation->setThisLoopNodeActivationPtr(newLoopNodeActivation);
		visitor = newLoopNodeActivation;
	}

	// Note: Since ConditionalNode, LoopNode and ExpansionRegion are
	// subclasses of StructuredActivityNode, element must be tested
	// against the three subclasses before the superclass.
	else if (IS(StructuredActivityNode, element))
	{
		StructuredActivityNodeActivationExtensionPtr newStructuredActivityNodeActivation(new StructuredActivityNodeActivationExtension());
		newStructuredActivityNodeActivation->setThisStructuredActivityNodeActivationPtr(
			newStructuredActivityNodeActivation);
		visitor = newStructuredActivityNodeActivation;
	}

	else if(IS(AddVariableValueAction, element))
	{
		AddVariableValueActionActivationPtr newAddVariableValueActionActivation(new AddVariableValueActionActivation());
		newAddVariableValueActionActivation->setThisActionActivationPtr(newAddVariableValueActionActivation);
		visitor = newAddVariableValueActionActivation;
	}

	else if(IS(ClearVariableAction, element))
	{
		ClearVariableActionActivationPtr newClearVariableActionActivation(new ClearVariableActionActivation());
		newClearVariableActionActivation->setThisActionActivationPtr(newClearVariableActionActivation);
		visitor = newClearVariableActionActivation;
	}

	else if(IS(ReadVariableAction, element))
	{
		ReadVariableActionActivationPtr newReadVariableActionActivation(new ReadVariableActionActivation());
		newReadVariableActionActivation->setThisActionActivationPtr(newReadVariableActionActivation);
		visitor = newReadVariableActionActivation;
	}

	else if(IS(RemoveVariableValueAction, element))
	{
		RemoveVariableValueActionActivationPtr newRemoveVariableValueActionActivation(new RemoveVariableValueActionActivation());
		newRemoveVariableValueActionActivation->setThisActionActivationPtr(newRemoveVariableValueActionActivation);
		visitor = newRemoveVariableValueActionActivation;
	}

	else
	{
		visitor = ExecutionFactory::instantiateVisitor(element);
	}

	return visitor;
}
