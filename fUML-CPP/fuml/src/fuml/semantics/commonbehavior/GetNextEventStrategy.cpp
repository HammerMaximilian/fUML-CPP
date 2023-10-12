/*
 * GetNextEventStrategy.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/commonbehavior/GetNextEventStrategy.h>

GetNextEventStrategy::~GetNextEventStrategy()
{
}

std::string GetNextEventStrategy::getName()
{
	// Get next event strategies are always named "getNextEvent".

	return "getNextEvent";
} // getName
