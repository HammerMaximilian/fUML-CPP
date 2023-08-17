/*
 * CallEvent.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "CallEvent.h"

using namespace fuml::syntax::commonbehavior;

void CallEvent::setOperation(const std::shared_ptr<fuml::syntax::classification::Operation>& operation)
{
	this->operation = operation;
}
