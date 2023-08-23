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

void ExceptionHandler::setExceptionInput(const std::shared_ptr<fuml::syntax::activities::ObjectNode>& exceptionInput) {
	this->exceptionInput = exceptionInput;
}

void ExceptionHandler::addExceptionType(const std::shared_ptr<fuml::syntax::classification::Classifier>& exceptionType) {
	this->exceptionType->push_back(exceptionType);
}

void ExceptionHandler::setHandlerBody(const std::shared_ptr<fuml::syntax::activities::ExecutableNode>& handlerBody) {
	this->handlerBody = handlerBody;
}
