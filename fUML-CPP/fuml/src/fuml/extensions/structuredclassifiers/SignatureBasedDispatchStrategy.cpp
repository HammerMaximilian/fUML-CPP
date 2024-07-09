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
	return this->getMethod(object_, operation, false);
}

BehaviorPtr SignatureBasedDispatchStrategy::getMethod(const Object_Ptr& object_, const OperationPtr& operation, bool isExplicitBaseClassCall)
{
    // Find the member operation of a type of the given object_ that
    // is the same as or overrides the given operation. Then
    // return the method of that operation, if it has one, otherwise
    // return a CallEventBehavior as the effective method for the
    // matching operation.
    // [If there is more than one type with a matching operation, then
    // the first one is arbitrarily chosen.]

    BehaviorPtr method = nullptr;
    const Class_Ptr& operationClass = operation->class_.lock();

    unsigned int i = 1;
    unsigned int sizeOfTypes = object_->types->size();
    while (method == nullptr && i <= sizeOfTypes)
    {
        const Class_Ptr& type = object_->types->at(i - 1);

        if(isExplicitBaseClassCall)
        {
            // The operation call shall explicitly invoke a base class operation,
            // even if the operation is overridden by type (or a direct or indirect base class of type).
            // This behaves as if object_'s actual type was the type that owns operation,
            // if operationClass is a direct or indirect base class of type.

            if(operationClass != nullptr && this->isSpecializationOf(type, operationClass))
            {
                method = this->getMethod(operationClass, operation);
            }
        }
        else
        {
            method = this->getMethod(type, operation);
        }

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
            if (ownedOperation->method->empty())
            {
                method = DispatchStrategy::getMethod(nullptr, ownedOperation);
            }
            else
            {
                method = ownedOperation->method->at(0);
            }
        }
        i++;
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
            if(Class_Ptr baseClass = AS(Class_, general->at(i - 1)))
            {
                method = this->getMethod(baseClass, operation);
            }
            i++;
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
    	matches = this->isSpecializationOf(ownedOperation->class_.lock(), baseOperation->class_.lock());
        matches = matches && baseOperation->name == ownedOperation->name;
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
                	ClassifierPtr ownedOperationReturnType = AS(Classifier, ownedParameter->type);
                	ClassifierPtr baseOperationReturnType = AS(Classifier, baseParameter->type);

                    matches = ownedOperationReturnType &&
                            baseOperationReturnType &&
                            this->isSpecializationOf(ownedOperationReturnType, baseOperationReturnType);
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

bool SignatureBasedDispatchStrategy::isSpecializationOf(const ClassifierPtr& specializedType, const ClassifierPtr& generalType)
{
    bool isSpecialized = false;

    unsigned int i = 1;
    unsigned int sizeOfGeneral = specializedType->general->size();
    while (isSpecialized == false && i <= sizeOfGeneral)
    {
        const ClassifierPtr& directBase = specializedType->general->at(i - 1);
        isSpecialized = generalType == directBase;

        if(!isSpecialized)
        {
            isSpecialized = this->isSpecializationOf(directBase, generalType);
        }

        i++;
    }

    return isSpecialized;
} // isCovariant
