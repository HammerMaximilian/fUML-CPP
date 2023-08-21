/*
 * DestroyObjectAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "DestroyObjectAction.h"

using namespace fuml::syntax::actions;

void DestroyObjectAction::setIsDestroyLinks(bool isDestroyLinks)
{
	this->isDestroyLinks = isDestroyLinks;
} // setIsDestroyLinks

void DestroyObjectAction::setIsDestroyOwnedObjects(bool isDestroyOwnedObjects)
{
	this->isDestroyOwnedObjects = isDestroyOwnedObjects;
} // setIsDestroyOwnedObjects

void DestroyObjectAction::setTarget(
	const std::shared_ptr<InputPin>& target)
{
	Action::addInput(target);
	this->target = target;
} // setTarget
