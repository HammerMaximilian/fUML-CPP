/*
 * CS_DefaultRequestPropagationStrategy.cpp
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#include <pscs/semantics/structuredclassifiers/CS_DefaultRequestPropagationStrategy.h>

#include <fuml/semantics/actions/SendSignalActionActivation.h>

using namespace pscs::semantics::structuredclassifiers;

ReferenceListPtr CS_DefaultRequestPropagationStrategy::select(const ReferenceListPtr& potentialTargets, const SemanticVisitorPtr& context)
{
    // returns all potential targets in the case where the context is a SendSignalActionActivation
    // returns the first potential target in the case where the context is anything else
    ReferenceListPtr selectedTargets(new ReferenceList());
    if (SendSignalActionActivationPtr sendSignalActionActivation = AS(SendSignalActionActivation, context))
    {
        for (const ReferencePtr& potentialTarget : *potentialTargets)
        {
            selectedTargets->push_back(potentialTarget);
        }
    }
    else
    {
        if (potentialTargets->size() >= 1)
        {
            selectedTargets->push_back(potentialTargets->at(0));
        }
    }
    return selectedTargets;
}
