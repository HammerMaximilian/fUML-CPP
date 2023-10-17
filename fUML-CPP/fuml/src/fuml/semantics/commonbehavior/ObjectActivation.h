/*
 * ObjectActivation.h
 *
 *  Created on: 24.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_OBJECTACTIVATION_H_
#define FUML_SEMANTICS_COMMONBEHAVIOR_OBJECTACTIVATION_H_

#include <fuml/semantics/fwd.h>
#include <fuml/syntax/fwd.h>
#include <utils/FumlObject.h>

namespace fuml::semantics::commonbehavior
{
	class ObjectActivation : public fuml::FumlObject
	{
		public:
			ClassifierBehaviorInvocationEventAccepterListPtr classifierBehaviorInvocations =
				std::make_shared<ClassifierBehaviorInvocationEventAccepterList>();
			EventAccepterListPtr waitingEventAccepters = std::make_shared<EventAccepterList>();
			EventOccurrenceListPtr eventPool = std::make_shared<EventOccurrenceList>();
			Object_Ptr object = nullptr;

		private:
			ObjectActivationPtr_w thisObjectActivationPtr;
			ObjectActivation_EventDispatchLoopExecutionPtr behavior;

		public:
			virtual ~ObjectActivation() = default;
			void setThisObjectActivationPtr(ObjectActivationPtr);

			void stop();
			void register_(const EventAccepterPtr&);
			void unregister(const EventAccepterPtr&);
			void dispatchNextEvent();
			EventOccurrencePtr getNextEvent();
			void send(const EventOccurrencePtr&);
			void startBehavior(const Class_Ptr&, const ParameterValueListPtr&);
			void _send(const ArrivalSignalPtr&);
			void _startObjectBehavior();
			static void _endIsolation();
			static void _beginIsolation();
	};
// ObjectActivation
}

#endif /* FUML_SEMANTICS_COMMONBEHAVIOR_OBJECTACTIVATION_H_ */
