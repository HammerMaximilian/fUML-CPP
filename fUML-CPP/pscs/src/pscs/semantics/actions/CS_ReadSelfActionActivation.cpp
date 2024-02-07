/*
 * CS_ReadSelfActionActivation.cpp
 *
 *  Created on: 01.02.2024
 *      Author: maha6913
 */

#include <pscs/semantics/actions/CS_ReadSelfActionActivation.h>

#include <pscs/semantics/fwd.h>
#include <pscs/semantics/structuredclassifiers/CS_Object.h>
#include <pscs/semantics/structuredclassifiers/CS_Reference.h>
#include <uml/actions/ReadSelfAction.h>

void CS_ReadSelfActionActivation::doAction()
{
    // Get the context object of the activity execution containing this
    // action activation and place a reference to it on the result output
    // pin.
    // Extends fUML semantics in the sense that the reference placed on
    // the result pin is a CS_Reference, not a Reference
    // Debug.println("[ReadSelfActionActivation] Start...");
    CS_ReferencePtr context(new CS_Reference());
    context->referent = this->getExecutionContext();

    if (CS_ObjectPtr cS_Object = AS(CS_Object, context->referent))
    {// i.e. alternatively, it can be an execution
        context->compositeReferent = cS_Object;
    }

    const OutputPinPtr& resultPin = (AS(ReadSelfAction, this->node))->result;
    this->putToken(resultPin, context);
}
