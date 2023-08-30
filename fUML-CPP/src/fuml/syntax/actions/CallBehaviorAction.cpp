/*
 * CallBehaviorAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/CallBehaviorAction.h>

void CallBehaviorAction::setBehavior(const BehaviorPtr& behavior)
{
	this->behavior = behavior;
} // setBehavior
