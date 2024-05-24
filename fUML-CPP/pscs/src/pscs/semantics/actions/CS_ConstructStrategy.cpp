/*
 * CS_ConstructStrategy.cpp
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#include <pscs/semantics/actions/CS_ConstructStrategy.h>

using namespace pscs::semantics::actions;

CS_ConstructStrategy::~CS_ConstructStrategy()
{
}

std::string CS_ConstructStrategy::getName()
{
    // a CS_ConstructionStrategy is always named "constructStrategy"
    return "constructStrategy";
}
