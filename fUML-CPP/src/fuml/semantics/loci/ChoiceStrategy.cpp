/*
 * ChoiceStrategy.cpp
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#include "ChoiceStrategy.h"

using namespace fuml::semantics::loci;

ChoiceStrategy::~ChoiceStrategy()
{
}

std::string ChoiceStrategy::getName()
{
	// The name of a choice strategy is always "choice".

	return "choice";
} // getName
