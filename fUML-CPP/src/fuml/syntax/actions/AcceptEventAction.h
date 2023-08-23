/*
 * AcceptEventAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_ACCEPTEVENTACTION_H_
#define FUML_SYNTAX_ACTIONS_ACCEPTEVENTACTION_H_

#include <fuml/syntax/fwd.h>
#include <fuml/syntax/actions/Action.h>

namespace fuml::syntax::actions
{
	class AcceptEventAction : public Action
	{
		public:
			bool isUnmarshall = false;
			OutputPinListPtr result = std::make_shared<OutputPinList>();
			TriggerListPtr trigger = std::make_shared<TriggerList>();

		public:
			void setIsUnmarshall(bool);
			void addTrigger(
					const TriggerPtr&);
			void addResult(const OutputPinPtr&);
	}; // AcceptEventAction
}

#endif /* FUML_SYNTAX_ACTIONS_ACCEPTEVENTACTION_H_ */
