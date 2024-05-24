/*
 * CS_ReadExtentActionActivation.cpp
 *
 *  Created on: 01.02.2024
 *      Author: maha6913
 */

#include <pscs/semantics/actions/CS_ReadExtentActionActivation.h>

#include <fuml/semantics/loci/Locus.h>
#include <pscs/semantics/fwd.h>
#include <pscs/semantics/structuredclassifiers/CS_Object.h>
#include <pscs/semantics/structuredclassifiers/CS_Reference.h>
#include <uml/actions/ReadExtentAction.h>

void CS_ReadExtentActionActivation::doAction()
{
    // Get the extent, at the current execution locus, of the classifier
    // (which must be a class) identified in the action.
    // Place references to the resulting set of objects on the result pin.
    // Extends default fUML semantics in the sense that produced tokens contain
    // CS_References instead of References, in the case where the object is a
    // CS_Object
    ReadExtentActionPtr action = AS(ReadExtentAction, this->node);
    ExtensionalValueListPtr objects = this->getExecutionLocus()->getExtent(action->classifier);

    ValueListPtr references(new ValueList());
    for (const ValuePtr& object : *objects)
    {
        ReferencePtr reference;
        if (CS_ObjectPtr cS_Object = AS(CS_Object, object))
        {
            reference.reset(new CS_Reference());
            (AS(CS_Reference, reference))->compositeReferent = cS_Object;
        }
        else
        {
            reference.reset(new Reference());
        }
        reference->referent = AS(Object_, object);
        references->push_back(reference);
    }
    this->putTokens(action->result, references);
}
