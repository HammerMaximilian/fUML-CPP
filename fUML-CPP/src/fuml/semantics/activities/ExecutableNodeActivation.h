/*
 * ExecutableNodeActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_EXECUTABLENODEACTIVATION_H_
#define FUML_SEMANTICS_ACTIVITIES_EXECUTABLENODEACTIVATION_H_

#include <fuml/semantics/activities/ActivityNodeActivation.h>

namespace fuml::semantics::activities
{
	class ExecutableNodeActivation : public ActivityNodeActivation
	{
		public:
			virtual ~ExecutableNodeActivation() = 0;

			void propagateException(const ValuePtr&);
			ExceptionHandlerListPtr getMatchingExceptionHandlers(const ValuePtr&);
			virtual void handle(const ValuePtr&, const ExceptionHandlerPtr&);

	};
// ExecutableNodeActivation
}

#endif /* FUML_SEMANTICS_ACTIVITIES_EXECUTABLENODEACTIVATION_H_ */
