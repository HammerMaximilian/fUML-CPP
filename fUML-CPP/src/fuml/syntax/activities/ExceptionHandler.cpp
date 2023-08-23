/*
 * ExceptionHandler.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/activities/ExceptionHandler.h>
#include <memory>
#include <vector>

using namespace fuml::syntax::activities;

void ExceptionHandler::setExceptionInput(const ObjectNodePtr& exceptionInput) {
	this->exceptionInput = exceptionInput;
}

void ExceptionHandler::addExceptionType(const ClassifierPtr& exceptionType) {
	this->exceptionType->push_back(exceptionType);
}

void ExceptionHandler::setHandlerBody(const ExecutableNodePtr& handlerBody) {
	this->handlerBody = handlerBody;
}
