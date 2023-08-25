/*
 * CallActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_CALLACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_CALLACTIONACTIVATION_H_

#include <fuml/semantics/actions/InvocationActionActivation.h>

namespace fuml::semantics::actions
{
	class CallActionActivation : public InvocationActionActivation
	{
		public:
			ExecutionListPtr callExecutions = std::make_shared<ExecutionList>();
			bool isStreaming;
			OutputPinListPtr nonStreamingOutputPins = std::make_shared<OutputPinList>();
			ParameterListPtr nonStreamingOutputParameters = std::make_shared<ParameterList>();

		public:
			virtual ~CallActionActivation() = 0;

			virtual void initialize(
					const ActivityNodePtr&,
					const ActivityNodeActivationGroupPtr&) override;
			virtual bool isReady() override;
			virtual void doAction() override;
			virtual TokenListPtr completeAction() override;
			void completeCall(const ExecutionPtr&);
			void completeStreamingCall();
			virtual OutputPinListPtr getOfferingOutputPins() override;
			virtual ParameterListPtr getParameters() = 0;
			virtual ExecutionPtr getCallExecution() = 0;
			virtual void terminate() override;
			void removeCallExecution(const ExecutionPtr&);

	}; // CallActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_CALLACTIONACTIVATION_H_ */
