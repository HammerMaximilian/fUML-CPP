/*
 * ReadSelfAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_READSELFACTION_H_
#define FUML_SYNTAX_ACTIONS_READSELFACTION_H_

#include <memory>
#include "Action.h"

namespace fuml::syntax::actions
{
	class OutputPin;
}

namespace fuml::syntax::actions
{
	class ReadSelfAction : public Action
	{
		public:
			std::shared_ptr<OutputPin> result = nullptr;

		public:
			void setResult(const std::shared_ptr<OutputPin>&);
	}; // ReadSelfAction
}

#endif /* FUML_SYNTAX_ACTIONS_READSELFACTION_H_ */
