/*
 * CallOperationActionActivationExtension.cpp
 *
 *  Created on: 17.01.2024
 *      Author: maha6913
 */

#include <fuml/semantics/actions/CallOperationActionActivation.h>

#include <uml/actions/CallOperationAction.h>
#include <uml/packages/Stereotype.h>

bool CallOperationActionActivation::isExplicitBaseClassCall(const CallOperationActionPtr& callOperationAction)
{
    const StereotypeListPtr& appliedStereotypes = callOperationAction->appliedStereotype;
    unsigned int i = 0;
    unsigned int appliedStereotypesSize = appliedStereotypes->size();
    bool isExplicitBaseClassCall = false;

    while (i < appliedStereotypesSize && !isExplicitBaseClassCall)
    {
        const StereotypePtr& s = appliedStereotypes->at(i);
        if (s->name == "ExplicitBaseClassCall")
        {
            isExplicitBaseClassCall = true;
        }
    }
    return isExplicitBaseClassCall;
}
