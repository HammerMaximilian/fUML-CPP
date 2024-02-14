/*
 * CS_DefaultConstructStrategy.cpp
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#include <pscs/semantics/actions/CS_DefaultConstructStrategy.h>

#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <pscs/semantics/structuredclassifiers/CS_Object.h>
#include <pscs/semantics/structuredclassifiers/CS_Link.h>
#include <pscs/semantics/structuredclassifiers/CS_Reference.h>
#include <pscs/semantics/structuredclassifiers/CS_InteractionPoint.h>
#include <uml/classification/Operation.h>
#include <uml/classification/Property.h>
#include <uml/structuredclassifiers/Class_.h>
#include <pscs/semantics/values/CS_OpaqueExpressionEvaluation.h>
#include <fuml/semantics/simpleclassifiers/FeatureValue.h>
#include <uml/structuredclassifiers/Connector.h>
#include <uml/structuredclassifiers/ConnectorEnd.h>
#include <uml/structuredclassifiers/Association.h>
#include <uml/simpleclassifiers/Interface.h>
#include <uml/simpleclassifiers/InterfaceRealization.h>
#include <uml/values/ValueSpecification.h>
#include <uml/structuredclassifiers/Port.h>

using namespace pscs::semantics::actions;

Object_Ptr CS_DefaultConstructStrategy::construct(const OperationPtr& constructor, const CS_ObjectPtr& context)
{
    locus = context->locus;
    return this->constructObject(context, AS(Class_, constructor->type));
}

Object_Ptr CS_DefaultConstructStrategy::constructObject(const CS_ObjectPtr& context, const Class_Ptr& type)
{
    CS_ReferencePtr referenceToContext(new CS_Reference());
    referenceToContext->referent = context;
    referenceToContext->compositeReferent = context;

    // FIXME detect infinite recursive instantiation
    const PropertyListPtr& allAttributes = type->attribute;

    // Instantiate ports and parts
    for (const PropertyPtr& p : *allAttributes)
    {
        if (p->defaultValue != nullptr)
        {
        	const ValueSpecificationPtr& defaultValueSpecification = p->defaultValue;
            EvaluationPtr evaluation = AS(Evaluation, context->locus->factory->instantiateVisitor(defaultValueSpecification));
            evaluation->specification = defaultValueSpecification;
            evaluation->locus = context->locus;
            if (CS_OpaqueExpressionEvaluationPtr cS_OpaqueExpressionEvaluation = AS(CS_OpaqueExpressionEvaluation, evaluation))
            {
                ValueListPtr evaluations = cS_OpaqueExpressionEvaluation->executeExpressionBehavior();
                for (const ValuePtr& _evaluation : *evaluations)
                {
                    this->addStructuralFeatureValue(referenceToContext, p, _evaluation);
                }
            }
            else
            {
                ValuePtr defaultValue = evaluation->evaluate();
                this->addStructuralFeatureValue(referenceToContext, p, defaultValue);
            }
        }
        else if (this->canInstantiate(p))
        {
            int j = 1,
            	lowerOfP = p->lower;
            while (j <= lowerOfP)
            {
                Object_Ptr value;
                // if p is a Port typed by an Interface
                // creates an Object without type, but with FeatureValues corresponding to
                // structural features of the interface.
                PortPtr port = AS(Port, p);
                InterfacePtr interface_ = AS(Interface, p->type);
                if (p != nullptr && interface_ != nullptr)
                {
						value = this->instantiateInterface(interface_, locus);
						this->addStructuralFeatureValue(referenceToContext, p, value);
                }
                else
                {
                	Class_Ptr typeOfP = AS(Class_, p->type);
                    value = context->locus->instantiate(typeOfP);
                    // TODO account for existing constructors
                    value = this->constructObject(AS(CS_Object, value), typeOfP);
                    this->addStructuralFeatureValue(referenceToContext, p, value);
                    if (typeOfP->isActive)
                    {
                        value->startBehavior(typeOfP, ParameterValueListPtr(new ParameterValueList()));
                    }
                }
                j++;
            }
        }
    }
    // Instantiate connectors
    const NamedElementListPtr& allMembers = type->member();
    for (const NamedElementPtr& member : *allMembers)
    {
        if (ConnectorPtr connector = AS(Connector, member))
        {
            if (this->isArrayPattern(connector))
            {
                this->generateArrayPattern(referenceToContext, connector);
            }
            else if (this->isStarPattern(connector))
            {
                this->generateStarPattern(referenceToContext, connector);
            }
        }
    }
    return referenceToContext->referent;
}

void CS_DefaultConstructStrategy::addStructuralFeatureValue(const CS_ReferencePtr& context, const PropertyPtr& feature, const ValuePtr& value)
{
    FeatureValuePtr featureValue = context->getFeatureValue(feature);
    if (featureValue != nullptr)
    {
        const ValueListPtr& values = featureValue->values;
        if (PortPtr port = AS(Port, feature))
        {
            // insert an interaction point
            CS_InteractionPointPtr interactionPoint(new CS_InteractionPoint());
			interactionPoint->definingPort = port,
			interactionPoint->referent = AS(CS_Object, value),
			interactionPoint->owner = context;

            values->push_back(interactionPoint);
        }
        else if (CS_ObjectPtr cS_Object = AS(CS_Object, value))
        {
            // insert a reference
            CS_ReferencePtr reference(new CS_Reference());
			reference->compositeReferent = cS_Object,
			reference->referent = cS_Object;

            values->push_back(reference);
        }
        else
        {
            values->push_back(value);
        }
    }
}

void CS_DefaultConstructStrategy::generateArrayPattern(const CS_ReferencePtr& context, const ConnectorPtr& connector)
{
    const ConnectorEndPtr& end1 = connector->end->at(0);
    const ConnectorEndPtr& end2 = connector->end->at(1);
    ReferenceListPtr end1Values = this->getValuesFromConnectorEnd(context, end1);
    ReferenceListPtr end2Values = this->getValuesFromConnectorEnd(context, end2);
    unsigned int end1ValueSize = end1Values->size();
    for (unsigned int i = 0; i < end1ValueSize; i++)
    {
        CS_LinkPtr link(new CS_Link());
        link->setThisLinkPtr(link);

        if (connector->type == nullptr)
        {
            link->type = this->getDefaultAssociation();
        }
        else
        {
            link->type = connector->type;
        }
        ValueListPtr valuesForEnd1(new ValueList());
        valuesForEnd1->push_back(end1Values->at(i));

        ValueListPtr valuesForEnd2(new ValueList());
        valuesForEnd2->push_back(end2Values->at(i));

        link->setFeatureValue(link->type->ownedEnd->at(0), valuesForEnd1, -1);
        link->setFeatureValue(link->type->ownedEnd->at(1), valuesForEnd2, -1);
        link->addTo(context->referent->locus);
    }
}

ReferenceListPtr CS_DefaultConstructStrategy::getValuesFromConnectorEnd(const CS_ReferencePtr& context, const ConnectorEndPtr& end)
{
    ReferenceListPtr endValues(new ReferenceList());
    if (end->partWithPort != nullptr)
    {
        FeatureValuePtr valueForPart = context->getFeatureValue(end->partWithPort);
        if (valueForPart != nullptr)
        {
        	const ValueListPtr& valuesOfValueForPart = valueForPart->values;
            for (const ValuePtr& value : *valuesOfValueForPart)
            {
                ReferencePtr reference = AS(Reference, value);
                FeatureValuePtr valueForPort = reference->getFeatureValue(AS(Port, end->role));
                if (valueForPort != nullptr)
                {
                	const ValueListPtr& valuesOfValueForPort = valueForPort->values;
                    for (const ValuePtr& value_2 : *valuesOfValueForPort)
                    {
                        endValues->push_back(AS(Reference, value_2));
                    }
                }
            }
        }
    }
    else
    {
        FeatureValuePtr valueForRole = context->getFeatureValue(AS(StructuralFeature, end->role));
        if (valueForRole != nullptr)
        {
        	const ValueListPtr& values = valueForRole->values;
            for (const ValuePtr& value : *values)
            {
                endValues->push_back(AS(Reference, value));
            }
        }
    }
    return endValues;
}

void CS_DefaultConstructStrategy::generateStarPattern(const CS_ReferencePtr& context, const ConnectorPtr& connector)
{
    const ConnectorEndPtr& end1 = connector->end->at(0);
    const ConnectorEndPtr& end2 = connector->end->at(1);
    ReferenceListPtr end1Values = this->getValuesFromConnectorEnd(context, end1);
    ReferenceListPtr end2Values = this->getValuesFromConnectorEnd(context, end2);
    unsigned int end1ValueSize = end1Values->size();
    for (unsigned int i = 0; i < end1ValueSize; i++)
    {
        unsigned int end2ValueSize = end2Values->size();
        for (unsigned int j = 0; j < end2ValueSize; j++)
        {
            CS_LinkPtr link(new CS_Link());
            link->setThisLinkPtr(link);

            if (connector->type == nullptr)
            {
                link->type = this->getDefaultAssociation();
            }
            else
            {
                link->type = connector->type;
            }
            ValueListPtr valuesForEnd1(new ValueList());
            valuesForEnd1->push_back(end1Values->at(i));

            ValueListPtr valuesForEnd2(new ValueList());
            valuesForEnd2->push_back(end2Values->at(j));

            link->setFeatureValue(link->type->ownedEnd->at(0), valuesForEnd1, -1);
            link->setFeatureValue(link->type->ownedEnd->at(1), valuesForEnd2, -1);
            link->addTo(context->referent->locus);
        }
    }
}

bool CS_DefaultConstructStrategy::canInstantiate(const PropertyPtr& p)
{
    // Instantiate is possible if:
    // - p is composite
    // - p is typed
    // - This type is a Class and it is not abstract
    // - Or p is a Port and the type is an Interface
    if (p->isComposite)
    {
        if (p->type != nullptr)
        {
            if (Class_Ptr class_ = AS(Class_, p->type))
            {
                return !class_->isAbstract;
            }
            else if (IS(Interface, p->type))
            {
                return IS(Port, p);
            }
        }
    }
    return false;
}

int CS_DefaultConstructStrategy::getCardinality(const ConnectorEndPtr& end)
{
    int lowerOfRole = AS(Property, end->role)->lower;
    if (lowerOfRole == 0)
    {
        return 0;
    }
    else if (end->partWithPort == nullptr)
    {
        return lowerOfRole;
    }
    else
    {
        int lowerOfPart = end->partWithPort->lower;
        return lowerOfRole * lowerOfPart;
    }
}

bool CS_DefaultConstructStrategy::isArrayPattern(const ConnectorPtr& c)
{
    // This is an array pattern if:
    // - c is binary
    // - lower bound of the two connector ends is 1
    // - Cardinality of ends are equals
    if (c->end->size() == 2)
    {
        if (c->end->at(0)->lower == 1)
        {
            if (c->end->at(1)->lower == 1)
            {
                if (this->canInstantiate(AS(Property, c->end->at(0)->role)) && this->canInstantiate(AS(Property, c->end->at(1)->role)))
                {
                    int cardinality1 = this->getCardinality(c->end->at(0));
                    int cardinality2 = this->getCardinality(c->end->at(1));
                    return cardinality1 == cardinality2;
                }
            }
        }
    }
    return false;
}

bool CS_DefaultConstructStrategy::isStarPattern(const ConnectorPtr& c)
{
    // This is an array pattern if:
    // - c is binary
    // - lower bound of end1 equals cardinality of end1
    // - lower bound of end2 equals cardinality of end2
    if (c->end->size() == 2)
    {
        if (this->canInstantiate(AS(Property, c->end->at(0)->role)) && this->canInstantiate(AS(Property, c->end->at(1)->role)))
        {
            int cardinalityOfEnd1 = this->getCardinality(c->end->at(0));
            int lowerBoundofEnd1 = c->end->at(0)->lower;
            if (cardinalityOfEnd1 == lowerBoundofEnd1)
            {
                int cardinalityOfEnd2 = this->getCardinality(c->end->at(1));
                int lowerBoundofEnd2 = c->end->at(1)->lower;
                return cardinalityOfEnd2 == lowerBoundofEnd2;
            }
        }
    }
    return false;
}

AssociationPtr CS_DefaultConstructStrategy::getDefaultAssociation()
{
    // Computes an returns an Association with two untyped owned ends,
    // with multiplicity [*]->
    // This association can be used to type links instantiated from untyped connectors
    if (defaultAssociation == nullptr)
    {
        this->defaultAssociation.reset(new Association());
        this->defaultAssociation->setName("DefaultGeneratedAssociation");
        PropertyPtr end1(new Property());
        end1->setName("x");
        end1->setLower(0);
        end1->setUpper(-1);
        end1->setIsOrdered(true);
        end1->setIsUnique(true);
        this->defaultAssociation->addOwnedEnd(end1);
        PropertyPtr end2(new Property());
        end2->setName("y");
        end2->setLower(0);
        end2->setUpper(-1);
        end2->setIsOrdered(true);
        end2->setIsUnique(true);
        defaultAssociation->addOwnedEnd(end2);
    }
    return defaultAssociation;
}

Object_Ptr CS_DefaultConstructStrategy::instantiateInterface(const InterfacePtr& interface, const LocusPtr& locus)
{
    Class_Ptr realizingClass = this->getRealizingClass(interface);
    Object_Ptr object_ = locus->instantiate(realizingClass);
    return object_;
}

Class_Ptr CS_DefaultConstructStrategy::getRealizingClass(const InterfacePtr& interface)
{
    Class_Ptr realizingClass = nullptr;
    // TODO For cached RealizingClasses, search based on InterfaceRealizations rather than name
    std::string realizingClassName = interface->qualifiedName + "GeneratedRealizingClass";
    unsigned int i = 1,
    			realizingClassesSize = this->generatedRealizingClasses->size();
    while (i <= realizingClassesSize && realizingClass == nullptr)
    {
        const Class_Ptr& cddRealizingClass = this->generatedRealizingClasses->at(i - 1);
        if (cddRealizingClass->name == realizingClassName)
        {
            realizingClass = cddRealizingClass;
        }
        i++;
    }
    if (realizingClass == nullptr)
    {
        realizingClass = this->generateRealizingClass(interface, realizingClassName);
        this->generatedRealizingClasses->push_back(realizingClass);
    }
    return realizingClass;
}

Class_Ptr CS_DefaultConstructStrategy::generateRealizingClass(const InterfacePtr& interface, std::string className)
{
    Class_Ptr realizingClass(new Class_());
    realizingClass->setName(className);

    InterfaceRealizationPtr realization(new InterfaceRealization());
	realization->contract = interface,
	realization->implementingClassifier = realizingClass;

    realizingClass->addInterfaceRealization(realization);
    // TODO Deal with structural features of the interface
    // TODO Make a test case for reading/writing structural features of an interface
    return realizingClass;
}
