/*
 * Parameter.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/classification/Operation.h>
#include <fuml/syntax/classification/Parameter.h>

void Parameter::setDirection(ParameterDirectionKind direction)
{
	this->direction = direction;
} // setDirection

void Parameter::setIsStream(bool isStream)
{
	this->isStream = isStream;
} //setIsStream

void Parameter::_setOperation(const OperationPtr& operation)
{
	this->operation = operation;
} // _setOperation
