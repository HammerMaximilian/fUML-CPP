/*
 * CallEventExecution.h
 *
 *  Created on: 24.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_CALLEVENTEXECUTION_H_
#define FUML_SEMANTICS_COMMONBEHAVIOR_CALLEVENTEXECUTION_H_

#include <fuml/semantics/commonbehavior/Execution.h>

namespace fuml::semantics::commonbehavior
{
	class CallEventExecution : public Execution
	{
		public:
			bool callerSuspended = false;

		private:
			CallEventExecutionPtr_w thisCallEventExecutionPtr;

		public:
			virtual ~CallEventExecution() = default;
			void setThisCallEventExecutionPtr(CallEventExecutionPtr_w);

			bool isCallerSuspended();
			void setCallerSuspended(bool);
			void suspendCaller();
			void releaseCaller();
			virtual void execute() override;
			void makeCall();
			virtual EventOccurrencePtr createEventOccurrence();
			OperationPtr getOperation();
			ParameterValueListPtr getInputParameterValues();
			void setOutputParameterValues(const ParameterValueListPtr&);
			virtual ValuePtr new_() override;
			virtual ValuePtr copy() override;
			void wait_();
	};
// CallEventExecution
}

#endif /* FUML_SEMANTICS_COMMONBEHAVIOR_CALLEVENTEXECUTION_H_ */
