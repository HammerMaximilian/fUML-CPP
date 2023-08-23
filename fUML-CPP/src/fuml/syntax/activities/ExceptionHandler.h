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

namespace fuml::syntax::classification
{
	class Classifier;
}
using Classifier = fuml::syntax::classification::Classifier;
using ClassifierPtr = std::shared_ptr<Classifier>;

namespace fuml::syntax::activities
{
	class ExecutableNode;
	class ObjectNode;
}
using ExecutableNode = fuml::syntax::activities::ExecutableNode;
using ExecutableNodePtr = std::shared_ptr<ExecutableNode>;
using ObjectNode = fuml::syntax::activities::ObjectNode;
using ObjectNodePtr = std::shared_ptr<ObjectNode>;

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
			ExecutableNodePtr protectedNode;

		public:
			void setExceptionInput(const ObjectNodePtr&);
			void addExceptionType(const ClassifierPtr&);
			void setHandlerBody(const ExecutableNodePtr&);
	}; // ExceptionHandler
}

using ExceptionHandler = fuml::syntax::activities::ExceptionHandler;
using ExceptionHandlerPtr = std::shared_ptr<ExceptionHandler>;

#endif /* FUML_SYNTAX_ACTIVITIES_EXCEPTIONHANDLER_H_ */
