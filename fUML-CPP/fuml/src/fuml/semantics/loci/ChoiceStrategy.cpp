/*
 * ChoiceStrategy.cpp
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/loci/ChoiceStrategy.h>

ChoiceStrategy::~ChoiceStrategy()
{
}

std::string ChoiceStrategy::getName()
{
	// The name of a choice strategy is always "choice".

	return "choice";
} // getName
