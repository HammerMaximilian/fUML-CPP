/*
 * SignatureBasedDispatchStrategy.cpp
 *
 *  Created on: 08.01.2024
 *      Author: Maximilian
 */

#include <fuml/extensions/structuredclassifiers/SignatureBasedDispatchStrategy.h>
#include <fuml/semantics/structuredclassifiers/Object_.h>
#include <uml/classification/Parameter.h>
#include <uml/classification/Operation.h>
#include <uml/structuredclassifiers/Class_.h>

using namespace fuml::extensions::structuredclassifiers;

BehaviorPtr SignatureBasedDispatchStrategy::getMethod(const Object_Ptr& object_, const OperationPtr& operation)
{
    // Find the member operation of a type of the given object_ that
    // is the same as or overrides the given operation. Then
    // return the method of that operation, if it has one, otherwise
    // return a CallEventBehavior as the effective method for the
    // matching operation.
    // [If there is more than one type with a matching operation, then
    // the first one is arbitrarily chosen.]

    BehaviorPtr method = nullptr;
    unsigned int i = 1;
    unsigned int sizeOfTypes = object_->types->size();
    while (method == nullptr && i <= sizeOfTypes)
    {
        const Class_Ptr& type = object_->types->at(i - 1);
        method = this->getMethod(type, operation);
        i++;
    }

    return method;
} // getMethod

BehaviorPtr SignatureBasedDispatchStrategy::getMethod(const Class_Ptr& type, const OperationPtr& operation)
{
    BehaviorPtr method = nullptr;
    OperationListPtr ownedOperations = type->ownedOperation;

    // First, check if type owns or overrides the given operation.
    unsigned int i = 1;
    unsigned int sizeOfOwnedOperations = ownedOperations->size();
    while (method == nullptr && i <= sizeOfOwnedOperations)
    {
        const OperationPtr& ownedOperation = ownedOperations->at(i - 1);

        if(this->operationsMatch(ownedOperation, operation))
        {
            if (!ownedOperation->method->empty())
            {
                method = DispatchStrategy::getMethod(nullptr, ownedOperation);
            }
            else
            {
                method = ownedOperation->method->at(0);
            }
        }
    }

    // If type does not own or override the given operation directly,
    // check all of it's base classes.
    if(method == nullptr)
    {
        ClassifierListPtr general = type->general;

        i = 1;
        unsigned int sizeOfGeneral = general->size();
        while(method == nullptr && i <= sizeOfGeneral)
        {
        	const Class_Ptr baseClass = std::dynamic_pointer_cast<Class_>(general->at(i - 1));
            if(baseClass)
            {
                method = this->getMethod(baseClass, operation);
            }
        }
    }

    return method;
} // getMethod

bool SignatureBasedDispatchStrategy::operationsMatch(const OperationPtr& ownedOperation, const OperationPtr& baseOperation)
{
    // Check if the owned operation is equal to or overrides the base operation.
    // In this context, an owned operation overrides a base operation
    // if it has the same name and signature.

    bool matches;
    if (ownedOperation == baseOperation)
    {
        matches = true;
    }
    else
    {
        matches = baseOperation->name == ownedOperation->name;
        matches = matches && (baseOperation->ownedParameter->size() == ownedOperation->ownedParameter->size());
        ParameterListPtr ownedOperationParameters = ownedOperation->ownedParameter;
        ParameterListPtr baseOperationParameters = baseOperation->ownedParameter;
        unsigned int ownedOperationParametersSize = ownedOperationParameters->size();
        for (unsigned int i = 0; matches == true && i < ownedOperationParametersSize; i++)
        {
            const ParameterPtr& ownedParameter = ownedOperationParameters->at(i);
            const ParameterPtr& baseParameter = baseOperationParameters->at(i);

            if(ownedParameter->direction == ParameterDirectionKind::return_)
            {
                // NOTE: In this implementation, return types may be covariant classifiers.
                if (ownedParameter->type != baseParameter->type)
                {
                	ClassifierPtr ownedOperationReturnType = std::dynamic_pointer_cast<Classifier>(ownedParameter->type);
                	ClassifierPtr baseOperationReturnType = std::dynamic_pointer_cast<Classifier>(baseParameter->type);

                    matches = ownedOperationReturnType &&
                            baseOperationReturnType &&
                            this->isCovariant(ownedOperationReturnType, baseOperationReturnType);
                }
                else
                {
                    matches = true;
                }
            }
            else
            {
                matches = ownedParameter->type == baseParameter->type;
            }
            matches = matches && (ownedParameter->lower == baseParameter->lower);
            matches = matches && (ownedParameter->upper == baseParameter->upper);
            matches = matches && (ownedParameter->direction == baseParameter->direction);
        }
    }

    return matches;
} // operationsMatch

bool SignatureBasedDispatchStrategy::isCovariant(const ClassifierPtr& ownedOperationReturnType, const ClassifierPtr& baseOperationReturnType)
{
    bool isCovariant = false;

    unsigned int i = 1;
    unsigned int sizeOfGeneral = ownedOperationReturnType->general->size();
    while (isCovariant == false && i <= sizeOfGeneral)
    {
        const ClassifierPtr& baseType = ownedOperationReturnType->general->at(i - 1);
        isCovariant = baseOperationReturnType == baseType;

        if(!isCovariant)
        {
            isCovariant = this->isCovariant(baseType, baseOperationReturnType);
        }

        i++;
    }

    return isCovariant;
} // isCovariant
