/*
 * FirstChoiceStrategy.cpp
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#include "FirstChoiceStrategy.h"

using namespace fuml::semantics::loci;

int FirstChoiceStrategy::choose(int size)
{
	// Always choose one.

	return 1;
} // choose
