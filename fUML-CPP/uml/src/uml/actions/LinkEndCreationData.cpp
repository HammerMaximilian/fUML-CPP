/*
 * LinkEndCreationData.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <uml/actions/LinkEndCreationData.h>

void LinkEndCreationData::setIsReplaceAll(bool isReplaceAll)
{
	this->isReplaceAll = isReplaceAll;
} // setEnd

void LinkEndCreationData::setInsertAt(const InputPinPtr& insertAt)
{
	this->insertAt = insertAt;
} // setValue
