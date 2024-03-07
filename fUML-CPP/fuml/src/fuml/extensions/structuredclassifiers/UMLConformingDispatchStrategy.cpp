/*
 * UMLConformingDispatchStrategy.cpp
 *
 *  Created on: 07.03.2024
 *      Author: Maximilian
 */

#include <fuml/extensions/structuredclassifiers/UMLConformingDispatchStrategy.h>
#include <uml/classification/Classifier.h>
#include <uml/classification/Operation.h>
#include <uml/classification/Parameter.h>
#include <uml/classification/ParameterDirectionKind.h>

using namespace fuml::extensions::structuredclassifiers;

bool UMLConformingDispatchStrategy::operationsMatch(const OperationPtr& ownedOperation, const OperationPtr& baseOperation)
{
    // Check if the owned operation is equal to or overrides the base operation.
    // In this context, an owned operation overrides a base operation if:
    //  - they have the same number of owned parameters and for each parameter the following holds:
    //      - direction, ordering and uniqueness are the same
    //      - the corresponding types are covariant, contravariant or invariant
    //      - the multiplicities are compatible depending on the parameter direction

    bool matches;
    if (ownedOperation == baseOperation)
    {
        matches = true;
    }
    else
    {
        matches = this->isConsistentWith(ownedOperation, baseOperation);
    }

    return matches;
} // operationsMatch

bool UMLConformingDispatchStrategy::isConsistentWith(const OperationPtr& ownedOperation, const OperationPtr& baseOperation)
{
    bool isConsistentWith = false;

    // NOTE: UML specification implies first checking if the context of baseOperation is valid
    // (i.e. is a direct or indirect base class of the owner of ownedOperation).
    // Here this is already implicitely done by only traversing base classes of ownedOperation's owner

    const ParameterListPtr& ownedOperationParameters = ownedOperation->ownedParameter;
    const ParameterListPtr& baseOperationParameters = baseOperation->ownedParameter;

    unsigned int ownedOperationParametersSize = ownedOperationParameters->size();

    isConsistentWith = baseOperationParameters->size() == ownedOperationParametersSize;

    for (unsigned int i = 0; isConsistentWith == true && i < ownedOperationParametersSize; i++)
    {
        const ParameterPtr& redefiningParameter = ownedOperationParameters->at(i);
        const ParameterPtr& redefinedParameter = baseOperationParameters->at(i);

        isConsistentWith = isConsistentWith && (redefiningParameter->isUnique == redefinedParameter->isUnique);
        isConsistentWith = isConsistentWith && (redefiningParameter->isOrdered == redefinedParameter->isOrdered);
        isConsistentWith = isConsistentWith && (redefiningParameter->direction == redefinedParameter->direction);

        ClassifierPtr redefiningParameterType = AS(Classifier, redefiningParameter->type);
        ClassifierPtr redefinedParameterType = AS(Classifier, redefinedParameter->type);
        isConsistentWith = isConsistentWith &&
        					(
        						this->conformsTo(redefiningParameterType, redefinedParameterType) ||
								this->conformsTo(redefinedParameterType, redefiningParameterType)
							);

        if(redefinedParameter->direction == ParameterDirectionKind::inout)
        {
            isConsistentWith = isConsistentWith &&
                                (
                                    this->compatibleWith(redefiningParameter, redefinedParameter) &&
                                    this->compatibleWith(redefinedParameter, redefiningParameter)
                                );
        }
        else if (redefinedParameter->direction == ParameterDirectionKind::in)
        {
            isConsistentWith = isConsistentWith && this->compatibleWith(redefinedParameter, redefiningParameter);
        }
        else // i.e. if((redefinedParameter->direction == ParameterDirectionKind::out) || (redefinedParameter->direction == ParameterDirectionKind::return_))
        {
            isConsistentWith = isConsistentWith && this->compatibleWith(redefiningParameter, redefinedParameter);
        }
    }

    return isConsistentWith;
}

bool UMLConformingDispatchStrategy::conformsTo(const ClassifierPtr& type, const ClassifierPtr& otherType)
{
    bool conformsTo = false;

    if(type == otherType)
    {
        conformsTo = true;
    }
    else
    {
        conformsTo = this->isSpecializationOf(type, otherType);
    }

    return conformsTo;
}

bool UMLConformingDispatchStrategy::compatibleWith(const MultiplicityElementPtr& self, const MultiplicityElementPtr& other)
{
    bool compatibleWith = (other->lower <= self->lower) && ((other->upper == -1) || (self->upper <= other->upper));

    return compatibleWith;
}
