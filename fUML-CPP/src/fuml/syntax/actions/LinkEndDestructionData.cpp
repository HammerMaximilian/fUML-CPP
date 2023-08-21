/*
 * LinkEndDestructionData.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "LinkEndDestructionData.h"

using namespace fuml::syntax::actions;

void LinkEndDestructionData::setIsDestroyDuplicates(bool isDestroyDuplicates)
{
	this->isDestroyDuplicates = isDestroyDuplicates;
} // setIsDestroyDuplicates

void LinkEndDestructionData::setDestroyAt(const std::shared_ptr<InputPin>& destroyAt)
{
	this->destroyAt = destroyAt;
} // setDestroyAt
