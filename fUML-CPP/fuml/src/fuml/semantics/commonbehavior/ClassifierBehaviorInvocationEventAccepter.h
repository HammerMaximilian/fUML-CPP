/*
 * ClassifierBehaviorInvocationEventAccepter.h
 *
 *  Created on: 24.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_CLASSIFIERBEHAVIORINVOCATIONEVENTACCEPTER_H_
#define FUML_SEMANTICS_COMMONBEHAVIOR_CLASSIFIERBEHAVIORINVOCATIONEVENTACCEPTER_H_

#include <fuml/semantics/commonbehavior/EventAccepter.h>
#include <fuml/syntax/fwd.h>

namespace fuml::semantics::commonbehavior
{
	class ClassifierBehaviorInvocationEventAccepter : public EventAccepter
	{
		public:
			ExecutionPtr execution = nullptr;
			Class_Ptr classifier = nullptr;
			ObjectActivationPtr objectActivation = nullptr;

		private:
			ClassifierBehaviorInvocationEventAccepterPtr_w thisClassifierBehaviorInvocationEventAccepterPtr;

		public:
			virtual ~ClassifierBehaviorInvocationEventAccepter() = default;
			void setThisClassifierBehaviorInvocationEventAccepterPtr(
				ClassifierBehaviorInvocationEventAccepterPtr_w);

			void invokeBehavior(const Class_Ptr&, const ParameterValueListPtr&);
			virtual bool match(const EventOccurrencePtr&) override;
			virtual void accept(const EventOccurrencePtr&) override;
			void terminate();
	};
// ClassifierBehaviorInvocationEventAccepter
}

#endif /* FUML_SEMANTICS_COMMONBEHAVIOR_CLASSIFIERBEHAVIORINVOCATIONEVENTACCEPTER_H_ */
