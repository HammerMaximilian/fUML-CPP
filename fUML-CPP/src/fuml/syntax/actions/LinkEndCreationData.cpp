/*
 * LinkEndCreationData.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "LinkEndCreationData.h"

using namespace fuml::syntax::actions;

void LinkEndCreationData::setIsReplaceAll(bool isReplaceAll)
{
	this->isReplaceAll = isReplaceAll;
} // setEnd

void LinkEndCreationData::setInsertAt(const std::shared_ptr<InputPin>& insertAt)
{
	this->insertAt = insertAt;
} // setValue
