/*
 * CS_CreateObjectActionActivation.cpp
 *
 *  Created on: 01.02.2024
 *      Author: maha6913
 */

#include <pscs/semantics/actions/CS_CreateObjectActionActivation.h>

#include <fuml/semantics/loci/Locus.h>
#include <pscs/semantics/fwd.h>
#include <pscs/semantics/structuredclassifiers/CS_Object.h>
#include <pscs/semantics/structuredclassifiers/CS_Reference.h>
#include <uml/actions/CreateObjectAction.h>
#include <uml/structuredclassifiers/Class_.h>

void CS_CreateObjectActionActivation::doAction()
{
    // Create an object with the given classifier (which must be a class) as
    // its type, at the same locus as the action activation.
    // Place a reference to the object on the result pin of the action.
    // Extends fUML semantics in the sense that the reference placed
    // on the result pin is a CS_Reference (in the case where the instantiated object
    // is a CS_Object) not a Reference
    // Note that Locus.instantiate(Class) is extended in this specification
    // to produce a CS_Object instead of an Object in the case where the class
    // to be instantiated is not a behavior
    CreateObjectActionPtr action = AS(CreateObjectAction, this->node);
    ReferencePtr reference;
    Object_Ptr referent = this->getExecutionLocus()->instantiate(AS(Class_, action->classifier));
    if (CS_ObjectPtr cS_Object = AS(CS_Object, referent))
    {
        reference.reset(new CS_Reference());
        (AS(CS_Reference, reference))->compositeReferent = cS_Object;
    }
    else
    {
        reference.reset(new Reference());
    }
    reference->referent = referent;
    this->putToken(action->result, reference);
}
