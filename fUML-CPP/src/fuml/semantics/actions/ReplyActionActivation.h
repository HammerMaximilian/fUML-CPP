/*
 * ReplyActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_REPLYACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_REPLYACTIONACTIVATION_H_

#include <fuml/semantics/actions/ActionActivation.h>

namespace fuml::semantics::actions
{
	class ReplyActionActivation : public ActionActivation
	{
		public:
			virtual ~ReplyActionActivation() = default;

			virtual void doAction();

	}; // ReplyActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_REPLYACTIONACTIVATION_H_ */
