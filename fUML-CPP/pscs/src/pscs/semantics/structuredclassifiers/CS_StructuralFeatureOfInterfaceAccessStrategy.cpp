/*
 * CS_StructuralFeatureOfInterfaceAccessStrategy.cpp
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#include <pscs/semantics/structuredclassifiers/CS_StructuralFeatureOfInterfaceAccessStrategy.h>

using namespace pscs::semantics::structuredclassifiers;

CS_StructuralFeatureOfInterfaceAccessStrategy::~CS_StructuralFeatureOfInterfaceAccessStrategy()
{
}

std::string CS_StructuralFeatureOfInterfaceAccessStrategy::getName()
{
    // StructuralFeatureAccessStrategy are always named "structuralFeature"
    return "structuralFeature";
}
