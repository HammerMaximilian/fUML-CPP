/*
 * AcceptEventAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_ACCEPTEVENTACTION_H_
#define UML_ACTIONS_ACCEPTEVENTACTION_H_

#include <uml/actions/Action.h>
#include <uml/fwd.h>

namespace uml::actions
{
	class AcceptEventAction : public Action
	{
		public:
			bool isUnmarshall = false;
			OutputPinListPtr result = std::make_shared<OutputPinList>();
			TriggerListPtr trigger = std::make_shared<TriggerList>();

		public:
			virtual ~AcceptEventAction() = default;

			void setIsUnmarshall(bool);
			void addTrigger(const TriggerPtr&);
			void addResult(const OutputPinPtr&);
	};
// AcceptEventAction
}

#endif /* UML_ACTIONS_ACCEPTEVENTACTION_H_ */
