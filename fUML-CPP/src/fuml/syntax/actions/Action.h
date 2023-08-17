/*
 * Action.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_ACTION_H_
#define FUML_SYNTAX_ACTIONS_ACTION_H_

#include "fuml/syntax/activities/ExecutableNode.h"

namespace fuml::syntax::actions
{
	class Action : public fuml::syntax::activities::ExecutableNode
	{
		public:
			virtual ~Action() = 0;
	}; // Action
}

#endif /* FUML_SYNTAX_ACTIONS_ACTION_H_ */
