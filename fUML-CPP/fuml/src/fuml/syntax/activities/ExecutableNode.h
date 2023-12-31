/*
 * ExecutableNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_EXECUTABLENODE_H_
#define FUML_SYNTAX_ACTIVITIES_EXECUTABLENODE_H_

#include <fuml/syntax/activities/ActivityGroup.h>

namespace fuml::syntax::activities
{
	class ExecutableNode : public ActivityGroup
	{
		public:
			ExceptionHandlerListPtr handler = std::make_shared<ExceptionHandlerList>();

		private:
			ExecutableNodePtr_w thisExecutableNodePtr;

		public:
			virtual ~ExecutableNode() = 0;
			void setThisExecutableNodePtr(ExecutableNodePtr_w);

			void addExceptionHandler(const ExceptionHandlerPtr&);
	};
// ExecutableNode
}

#endif /* FUML_SYNTAX_ACTIVITIES_EXECUTABLENODE_H_ */
