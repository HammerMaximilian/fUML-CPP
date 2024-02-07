/*
 * CS_DispatchOperationOfInterfaceStrategy.cpp
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#include <pscs/semantics/structuredclassifiers/CS_DispatchOperationOfInterfaceStrategy.h>

#include <uml/classification/Operation.h>
#include <uml/classification/Parameter.h>
#include <uml/simpleclassifiers/Interface.h>

using namespace pscs::semantics::structuredclassifiers;

bool CS_DispatchOperationOfInterfaceStrategy::operationsMatch(const OperationPtr& ownedOperation, const OperationPtr& baseOperation)
{
    // Override operationsMatch, in the case where baseOperation belongs
    // to an Interface.
    // In this case, ownedOperation matches baseOperation if it has the same name and signature
    // Otherwise, behaves like fUML RedefinitionBasedDispatchStrategy
    bool matches;
    if (InterfacePtr interface = std::dynamic_pointer_cast<Interface>(baseOperation->namespace_.lock()))
    {
        matches = baseOperation->name == ownedOperation->name;
        matches = matches && (baseOperation->ownedParameter->size() == ownedOperation->ownedParameter->size());
        ParameterListPtr ownedOperationParameters = ownedOperation->ownedParameter;
        ParameterListPtr baseOperationParameters = baseOperation->ownedParameter;
        unsigned int ownedOperationParametersSize = ownedOperationParameters->size();
        for (unsigned int i = 0; matches == true && i < ownedOperationParametersSize; i++)
        {
            ParameterPtr ownedParameter = ownedOperationParameters->at(i);
            ParameterPtr baseParameter = baseOperationParameters->at(i);
            matches = ownedParameter->type == baseParameter->type;
            matches = matches && (ownedParameter->lower == baseParameter->lower);
            matches = matches && (ownedParameter->upper == baseParameter->upper);
            matches = matches && (ownedParameter->direction == baseParameter->direction);
        }
    }
    else
    {
        matches = RedefinitionBasedDispatchStrategy::operationsMatch(ownedOperation, baseOperation);
    }
    return matches;
}
