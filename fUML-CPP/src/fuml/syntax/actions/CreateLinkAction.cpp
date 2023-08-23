/*
 * CreateLinkAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/CreateLinkAction.h>
#include <fuml/syntax/actions/LinkEndCreationData.h>
#include <vector>

using namespace fuml::syntax::actions;

void CreateLinkAction::addEndData(
	const std::shared_ptr<LinkEndCreationData>& endData)
{
	LinkAction::addEndData(endData);
	this->endData->push_back(endData);
}
