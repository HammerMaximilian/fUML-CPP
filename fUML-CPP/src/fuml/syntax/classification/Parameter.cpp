/*
 * Parameter.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include "fuml/syntax/classification/Parameter.h"

#include "fuml/syntax/classification/Operation.h"

using namespace fuml::syntax::classification;

void Parameter::setDirection(
	fuml::syntax::classification::ParameterDirectionKind direction)
{
	this->direction = direction;
} // setDirection

void Parameter::setIsStream(bool isStream)
{
	this->isStream = isStream;
} //setIsStream

void Parameter::_setOperation(const std::shared_ptr<fuml::syntax::classification::Operation>& operation)
{
	this->operation = operation;
} // _setOperation
