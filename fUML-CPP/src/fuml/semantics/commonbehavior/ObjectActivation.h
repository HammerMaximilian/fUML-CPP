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
	class ObjectActivtion : public utils::FumlObject
	{
		public:
			ClassifierBehaviorInvocationEventAccepterListPtr classifierBehaviorInvocations = std::make_shared<ClassifierBehaviorInvocationEventAccepterList>();
			EventAccepterListPtr waitingEventAccepter = std::make_shared<EventAccepterList>();
			EventOccurrenceListPtr eventPool = std::make_shared<EventOccurrenceList>();
			Object_Ptr object = nullptr;

		private:
			std::weak_ptr<ObjectActivation> thisObjectActivationPtr;
			ObjectActivation_EventDispatchLoopExecution behavior;

		public:
			virtual ~ObjectActivtion() = default;
			void setThisObjectActivationPtr(std::weak_ptr<ObjectActivation>); // TODO: Hier "ObjectActivation_EventDispatchLoopExecution behavior" initialisieren und thisPtr als Konstruktor-Parameter übergeben

			void stop();
			void register_(const EventAccepterPtr&);
			void unregister(const EventAccepterPtr&);
			void dispatchNextEvent();
			EventOccurrencePtr getNextEvent();
			void send (const EventOccurrencePtr&);
			void startBehavior(
					const Class_Ptr&,
					const ParameterValueListPtr&);
			void _send(const ArrivalSignalPtr&);
			void _startObjectBehavior();
			static void _endIsolation();
			static void _beginIsolation();
	}; // ObjectActivtion
}

#endif /* FUML_SEMANTICS_COMMONBEHAVIOR_OBJECTACTIVATION_H_ */
