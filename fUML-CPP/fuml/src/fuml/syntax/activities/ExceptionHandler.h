/*
 * ExceptionHandler.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_EXCEPTIONHANDLER_H_
#define FUML_SYNTAX_ACTIVITIES_EXCEPTIONHANDLER_H_

#include <fuml/syntax/commonstructure/Element.h>
#include <fuml/syntax/fwd.h>

namespace fuml::syntax::activities
{
	class ExceptionHandler : public Element
	{
		public:
			/**
			 * An ObjectNode within the handlerBody. When the ExceptionHandler catches an
			 * exception, the exception token is placed on this ObjectNode, causing the
			 * handlerBody to execute.
			 */
			ObjectNodePtr exceptionInput;

			/**
			 * The Classifiers whose instances the ExceptionHandler catches as exceptions.
			 * If an exception occurs whose type is any exceptionType, the ExceptionHandler
			 * catches the exception and executes the handlerBody.
			 */
			ClassifierListPtr exceptionType = std::make_shared<ClassifierList>();

			/**
			 * An ExecutableNode that is executed if the ExceptionHandler catches an
			 * exception.
			 */
			ExecutableNodePtr handlerBody;

			/**
			 * The ExecutableNode protected by the ExceptionHandler. If an exception
			 * propagates out of the protectedNode and has a type matching one of the
			 * exceptionTypes, then it is caught by this ExceptionHandler.
			 */
			ExecutableNodePtr_w protectedNode;

		public:
			virtual ~ExceptionHandler() = default;

			void setExceptionInput(const ObjectNodePtr&);
			void addExceptionType(const ClassifierPtr&);
			void setHandlerBody(const ExecutableNodePtr&);
	};
// ExceptionHandler
}

#endif /* FUML_SYNTAX_ACTIVITIES_EXCEPTIONHANDLER_H_ */
