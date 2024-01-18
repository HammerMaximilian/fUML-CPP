/*
 * CallBehaviorAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <uml/actions/CallBehaviorAction.h>

void CallBehaviorAction::setBehavior(const BehaviorPtr& behavior)
{
	this->behavior = behavior;
} // setBehavior
