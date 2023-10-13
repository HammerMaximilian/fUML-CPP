/*
 * AcceptEventActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_ACCEPTEVENTACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_ACCEPTEVENTACTIONACTIVATION_H_

#include <fuml/semantics/actions/ActionActivation.h>

namespace fuml::semantics::actions
{
	class AcceptEventActionActivation : public ActionActivation
	{
		public:
			AcceptEventActionEventAccepterPtr eventAccepter = nullptr;
			bool waiting = false;

		private:
			AcceptEventActionActivationPtr_w thisAcceptEventActionActivationPtr;

		public:
			virtual ~AcceptEventActionActivation() = default;
			void setThisAcceptEventActionActivationPtr(AcceptEventActionActivationPtr_w);

			virtual void initialize(const ActivityNodePtr&, const ActivityNodeActivationGroupPtr&) override;
			virtual void run() override;
			virtual void fire(const TokenListPtr&) override;
			virtual bool isReady() override;
			virtual void doAction() override;
			virtual void accept(const EventOccurrencePtr&);
			bool match(const EventOccurrencePtr&);
			virtual void terminate() override;

	};
// AcceptEventActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_ACCEPTEVENTACTIONACTIVATION_H_ */
