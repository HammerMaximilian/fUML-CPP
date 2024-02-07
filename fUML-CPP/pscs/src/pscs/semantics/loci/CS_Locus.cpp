/*
 * CS_Locus.cpp
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#include <pscs/semantics/loci/CS_Locus.h>

#include <pscs/semantics/fwd.h>
#include <pscs/semantics/structuredclassifiers/CS_Object.h>
#include <uml/commonbehavior/Behavior.h>

Object_Ptr CS_Locus::instantiate(const Class_Ptr& type)
{
    // Extends fUML semantics by instantiating a CS_Object
    // in the case where type is not a Behavior.
    // Otherwise behaves like in fUML
    Object_Ptr object_;
    if (IS(Behavior, type))
    {
        object_ = Locus::instantiate(type);
    }
    else
    {
        object_.reset(new CS_Object());
        object_->types->push_back(type);
        object_->createFeatureValues();
        this->add(object_);
    }
    return object_;
}
