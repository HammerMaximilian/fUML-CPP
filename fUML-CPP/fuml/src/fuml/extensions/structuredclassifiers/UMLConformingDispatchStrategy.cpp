/*
 * UMLConformingDispatchStrategy.cpp
 *
 *  Created on: 07.03.2024
 *      Author: Maximilian
 */

#include <fuml/extensions/structuredclassifiers/UMLConformingDispatchStrategy.h>
#include <uml/structuredclassifiers/Class_.h>
#include <uml/classification/Operation.h>
#include <uml/classification/Parameter.h>
#include <uml/classification/ParameterDirectionKind.h>

using namespace fuml::extensions::structuredclassifiers;

bool UMLConformingDispatchStrategy::operationsMatch(const OperationPtr& ownedOperation, const OperationPtr& baseOperation)
{
    // Check if the owned operation is equal to or overrides the base operation.
    // In this context, an owned operation overrides a base operation if:
	//	- base operation is directly or indirectly redefined by owned operation
	//	- the class that owns base operation is equal to or a base class of the class that owns owned operation
    //  - they have the same number of owned parameters and for each parameter the following holds:
    //      - direction, ordering and uniqueness are the same
    //      - the corresponding types are covariant, contravariant or invariant
    //      - the multiplicities are compatible depending on the parameter direction

    bool matches = RedefinitionBasedDispatchStrategy::operationsMatch(ownedOperation, baseOperation);
    if (matches)
    {
        matches = this->isConsistentWith(ownedOperation, baseOperation);
    }

    return matches;
} // operationsMatch

bool UMLConformingDispatchStrategy::isConsistentWith(const OperationPtr& ownedOperation, const OperationPtr& baseOperation)
{
    bool isConsistentWith = false;

    isConsistentWith = this->conformsTo(ownedOperation->class_.lock(), baseOperation->class_.lock());

    const ParameterListPtr& ownedOperationParameters = ownedOperation->ownedParameter;
    const ParameterListPtr& baseOperationParameters = baseOperation->ownedParameter;

    unsigned int ownedOperationParametersSize = ownedOperationParameters->size();

    isConsistentWith = isConsistentWith && (baseOperationParameters->size() == ownedOperationParametersSize);

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
        unsigned int i = 1,
        			generalSize = type->general->size();

        while(!conformsTo && i <= generalSize)
        {
        	const ClassifierPtr& general = type->general->at(i - 1);
        	conformsTo = this->conformsTo(general, otherType);
        }
    }

    return conformsTo;
}

bool UMLConformingDispatchStrategy::compatibleWith(const MultiplicityElementPtr& self, const MultiplicityElementPtr& other)
{
    bool compatibleWith = (other->lower <= self->lower) && ((other->upper == -1) || (self->upper <= other->upper));

    return compatibleWith;
}
