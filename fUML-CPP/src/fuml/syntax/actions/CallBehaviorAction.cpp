/*
 * CallBehaviorAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "CallBehaviorAction.h"

using namespace fuml::syntax::actions;

void CallBehaviorAction::setBehavior(
	const std::shared_ptr<fuml::syntax::commonbehavior::Behavior>& behavior)
{
	this->behavior = behavior;
} // setBehavior
