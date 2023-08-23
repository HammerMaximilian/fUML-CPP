/*
 * ExceptionHandler.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_EXCEPTIONHANDLER_H_
#define FUML_SYNTAX_ACTIVITIES_EXCEPTIONHANDLER_H_

#include <fuml/syntax/commonstructure/Element.h>
#include <fuml/syntax/classification/ClassifierList.h>

namespace fuml::syntax::activities
{
	class ExecutableNode;
	class ObjectNode;
}

namespace fuml::syntax::activities
{
	class ExceptionHandler : public fuml::syntax::commonstructure::Element
	{
		public:
			/**
			 * An ObjectNode within the handlerBody. When the ExceptionHandler catches an
			 * exception, the exception token is placed on this ObjectNode, causing the
			 * handlerBody to execute.
			 */
			std::shared_ptr<fuml::syntax::activities::ObjectNode> exceptionInput;

			/**
			 * The Classifiers whose instances the ExceptionHandler catches as exceptions.
			 * If an exception occurs whose type is any exceptionType, the ExceptionHandler
			 * catches the exception and executes the handlerBody.
			 */
			std::shared_ptr<fuml::syntax::classification::ClassifierList> exceptionType = std::make_shared<fuml::syntax::classification::ClassifierList>();

			/**
			 * An ExecutableNode that is executed if the ExceptionHandler catches an
			 * exception.
			 */
			std::shared_ptr<fuml::syntax::activities::ExecutableNode> handlerBody;

			/**
			 * The ExecutableNode protected by the ExceptionHandler. If an exception
			 * propagates out of the protectedNode and has a type matching one of the
			 * exceptionTypes, then it is caught by this ExceptionHandler.
			 */
			std::shared_ptr<fuml::syntax::activities::ExecutableNode> protectedNode;

		public:
			void setExceptionInput(const std::shared_ptr<fuml::syntax::activities::ObjectNode>&);
			void addExceptionType(const std::shared_ptr<fuml::syntax::classification::Classifier>&);
			void setHandlerBody(const std::shared_ptr<fuml::syntax::activities::ExecutableNode>&);
	}; // ExceptionHandler
}

using ExceptionHandler = fuml::syntax::activities::ExceptionHandler;
using ExceptionHandlerPtr = std::shared_ptr<ExceptionHandler>;

#endif /* FUML_SYNTAX_ACTIVITIES_EXCEPTIONHANDLER_H_ */
