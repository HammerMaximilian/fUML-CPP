/*
 * ExecutableNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIVITIES_EXECUTABLENODE_H_
#define UML_ACTIVITIES_EXECUTABLENODE_H_

#include <uml/activities/ActivityGroup.h>

namespace uml::activities
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

#endif /* UML_ACTIVITIES_EXECUTABLENODE_H_ */
