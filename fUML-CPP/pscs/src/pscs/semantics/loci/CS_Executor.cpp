/*
 * CS_Executor.cpp
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#include <pscs/semantics/loci/CS_Executor.h>

#include <pscs/semantics/fwd.h>
#include <fuml/Debug.h>
#include <uml/structuredclassifiers/Class_.h>
#include <fuml/semantics/loci/Locus.h>
#include <pscs/semantics/structuredclassifiers/CS_Object.h>
#include <pscs/semantics/structuredclassifiers/CS_Reference.h>

ReferencePtr CS_Executor::start(const Class_Ptr& type, const ParameterValueListPtr& inputs)
{
    // Instantiate the given class and start any behavior of the resulting
    // object.
    // (The behavior of an object includes any classifier behaviors for an
    // active object or the class of the object itself, if that is a
    // behavior.)
    // fUML semantics is extended in the sense that when the instantiated object
    // is a CS_Object, a CS_Reference is returned (instead of a Reference)
    fuml::Debug::println("[start] Starting " + type->name + "...");
    Object_Ptr object_ = this->locus.lock()->instantiate(type);
    fuml::Debug::println("[start] Object = " + object_->toString());
    object_->startBehavior(type, inputs);
    ReferencePtr reference;
    if (CS_ObjectPtr cS_Object = AS(CS_Object, object_))
    {
        reference.reset(new CS_Reference());
        AS(CS_Reference, reference)->compositeReferent = cS_Object;
    }
    else
    {
        reference.reset(new Reference());
    }
    reference->referent = object_;
    return reference;
}
