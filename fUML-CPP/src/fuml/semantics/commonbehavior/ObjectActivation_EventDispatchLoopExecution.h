/*
 * ObjectActivation_EventDispatchLoopExecution.h
 *
 *  Created on: 24.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_OBJECTACTIVATION_EVENTDISPATCHLOOPEXECUTION_H_
#define FUML_SEMANTICS_COMMONBEHAVIOR_OBJECTACTIVATION_EVENTDISPATCHLOOPEXECUTION_H_

#include <fuml/semantics/commonbehavior/Execution.h>

namespace fuml::semantics::commonbehavior
{
	class ObjectActivation_EventDispatchLoopExecution : public Execution
	{
		public:
			ObjectActivationPtr self = nullptr;
			int signalCound = 0;

		public:
			ObjectActivation_EventDispatchLoopExecution(const ObjectNodeActivationPtr&);

			void _startObjectBehavior();
			void _send(const ArrivalSignalPtr&);
			virtual void execute() override;
			virtual ValuePtr new_() override;
			virtual std::string toString() override;
	}; //
}

#endif /* FUML_SEMANTICS_COMMONBEHAVIOR_OBJECTACTIVATION_EVENTDISPATCHLOOPEXECUTION_H_ */
