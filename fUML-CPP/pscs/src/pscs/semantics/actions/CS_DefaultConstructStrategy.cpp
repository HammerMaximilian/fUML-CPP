/*
 * CS_DefaultConstructStrategy.cpp
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#include <pscs/semantics/actions/CS_DefaultConstructStrategy.h>

using namespace pscs::semantics::actions;

Object_Ptr CS_DefaultConstructStrategy::construct(const OperationPtr& constructor, const CS_ObjectPtr& context)
{
	throw "UnimplementedMethodException";
}

Object_Ptr CS_DefaultConstructStrategy::constructObject(const CS_ObjectPtr& context, const Class_Ptr& type)
{
	throw "UnimplementedMethodException";
}

void CS_DefaultConstructStrategy::addStructuralFeatureValue(const CS_ReferencePtr& context, const PropertyPtr& feature, const ValuePtr& value)
{
	throw "UnimplementedMethodException";
}

void CS_DefaultConstructStrategy::generateArrayPattern(const CS_ReferencePtr& context, const ConnectorPtr& connector)
{
	throw "UnimplementedMethodException";
}

ReferenceListPtr CS_DefaultConstructStrategy::getValuesFromConnectorEnd(const CS_ReferencePtr& context, const ConnectorEndPtr& end)
{
	throw "UnimplementedMethodException";
}

void CS_DefaultConstructStrategy::generateStarPattern(const CS_ReferencePtr& context, const ConnectorPtr& connector)
{
	throw "UnimplementedMethodException";
}

bool CS_DefaultConstructStrategy::canInstantiate(const PropertyPtr& p)
{
	throw "UnimplementedMethodException";
}

int CS_DefaultConstructStrategy::getCardinality(const ConnectorEndPtr& end)
{
	throw "UnimplementedMethodException";
}

bool CS_DefaultConstructStrategy::isArrayPattern(const ConnectorPtr& c)
{
	throw "UnimplementedMethodException";
}

bool CS_DefaultConstructStrategy::isStarPattern(const ConnectorPtr& c)
{
	throw "UnimplementedMethodException";
}

AssociationPtr CS_DefaultConstructStrategy::getDefaultAssociation()
{
	throw "UnimplementedMethodException";
}

Object_Ptr CS_DefaultConstructStrategy::instantiateInterface(const InterfacePtr& interface, const LocusPtr& locus)
{
	throw "UnimplementedMethodException";
}

Class_Ptr CS_DefaultConstructStrategy::getRealizingClass(const InterfacePtr& interface)
{
	throw "UnimplementedMethodException";
}

Class_Ptr CS_DefaultConstructStrategy::generateRealizingClass(const InterfacePtr& interface, std::string className)
{
	throw "UnimplementedMethodException";
}
