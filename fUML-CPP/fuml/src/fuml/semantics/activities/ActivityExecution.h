/*
 * ActivityExecution.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_ACTIVITYEXECUTION_H_
#define FUML_SEMANTICS_ACTIVITIES_ACTIVITYEXECUTION_H_

#include <fuml/semantics/commonbehavior/Execution.h>

namespace fuml::semantics::activities
{
	class ActivityExecution : public Execution
	{
		public:
			ActivityNodeActivationGroupPtr activationGroup = nullptr;
			bool isStreaming;

		protected:
			ActivityExecutionPtr_w thisActivityExecutionPtr;

		public:
			virtual ~ActivityExecution() = default;
			void setThisActivityExecutionPtr(ActivityExecutionPtr_w);

			virtual void execute() override;
			void complete();
			virtual ValuePtr copy() override;
			virtual ValuePtr new_() override;
			virtual void terminate() override;

	};
// ActivityExecution
}

#endif /* FUML_SEMANTICS_ACTIVITIES_ACTIVITYEXECUTION_H_ */
