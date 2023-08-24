/*
 * AcceptCallAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_ACCEPTCALLACTION_H_
#define FUML_SYNTAX_ACTIONS_ACCEPTCALLACTION_H_

#include <fuml/syntax/fwd.h>
#include <fuml/syntax/actions/AcceptEventAction.h>

namespace fuml::syntax::actions
{
	class AcceptCallAction : public AcceptEventAction
	{
		public:
			OutputPinPtr returnInformation = nullptr;

		public:
			virtual ~AcceptCallAction() = default;
		
			void setReturnInformation(const OutputPinPtr&);
	}; // AcceptCallAction
}

#endif /* FUML_SYNTAX_ACTIONS_ACCEPTCALLACTION_H_ */
