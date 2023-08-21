/*
 * CreateLinkAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "CreateLinkAction.h"
#include "LinkEndCreationData.h"

using namespace fuml::syntax::actions;

void CreateLinkAction::addEndData(
	const std::shared_ptr<LinkEndCreationData>& endData)
{
	LinkAction::addEndData(endData);
	this->endData->push_back(endData);
}
