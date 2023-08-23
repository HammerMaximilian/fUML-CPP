/*
 * DestroyLinkAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/DestroyLinkAction.h>
#include <fuml/syntax/actions/LinkEndDestructionData.h>
#include <vector>

using namespace fuml::syntax::actions;

void DestroyLinkAction::addEndData(
	const std::shared_ptr<LinkEndDestructionData>& endData)
{
	LinkAction::addEndData(endData);
	this->endData->push_back(endData);
}
