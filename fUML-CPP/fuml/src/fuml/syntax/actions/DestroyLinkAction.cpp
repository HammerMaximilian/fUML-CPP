/*
 * DestroyLinkAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/DestroyLinkAction.h>
#include <fuml/syntax/actions/LinkEndDestructionData.h>

void DestroyLinkAction::addEndData(const LinkEndDestructionDataPtr& endData)
{
	LinkAction::addEndData(endData);
	this->endData->push_back(endData);
}
