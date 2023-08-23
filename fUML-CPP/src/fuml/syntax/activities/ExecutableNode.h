/*
 * ExecutableNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_EXECUTABLENODE_H_
#define FUML_SYNTAX_ACTIVITIES_EXECUTABLENODE_H_

#include <fuml/syntax/activities/ActivityGroup.h>
#include <fuml/syntax/activities/ExceptionHandlerList.h>
#include <memory>

namespace fuml::syntax::activities
{
	class ExceptionHandler;
}
using ExceptionHandler = fuml::syntax::activities::ExceptionHandler;
using ExceptionHandlerPtr = std::shared_ptr<ExceptionHandler>;

namespace fuml::syntax::activities
{
	class ExecutableNode : public ActivityGroup
	{
		public:
			ExceptionHandlerListPtr handler = std::make_shared<ExceptionHandlerList>();

		private:
			std::weak_ptr<ExecutableNode> thisExecutableNodePtr;

		public:
			virtual ~ExecutableNode() = 0;
			virtual void setThisPtr(std::weak_ptr<ExecutableNode>);

			void addExceptionHandler(const ExceptionHandlerPtr&);
	}; // ExecutableNode
}

using ExecutableNode = fuml::syntax::activities::ExecutableNode;
using ExecutableNodePtr = std::shared_ptr<ExecutableNode>;

#endif /* FUML_SYNTAX_ACTIVITIES_EXECUTABLENODE_H_ */
