/*
 * CallEvent.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/commonbehavior/CallEvent.h>

void CallEvent::setOperation(const OperationPtr& operation)
{
	this->operation = operation;
}
