/*
 * CS_RequestPropagationStrategy.cpp
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#include <pscs/semantics/structuredclassifiers/CS_RequestPropagationStrategy.h>

using namespace pscs::semantics::structuredclassifiers;

CS_RequestPropagationStrategy::~CS_RequestPropagationStrategy()
{
}

std::string CS_RequestPropagationStrategy::getName()
{
    // a CS_RequestPropagationStrategy are always named "requestPropagation"
    return "requestPropagation";
}
