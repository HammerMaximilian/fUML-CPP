/*
 * LinkEndDestructionData.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/LinkEndDestructionData.h>

void LinkEndDestructionData::setIsDestroyDuplicates(bool isDestroyDuplicates)
{
	this->isDestroyDuplicates = isDestroyDuplicates;
} // setIsDestroyDuplicates

void LinkEndDestructionData::setDestroyAt(const InputPinPtr& destroyAt)
{
	this->destroyAt = destroyAt;
} // setDestroyAt
