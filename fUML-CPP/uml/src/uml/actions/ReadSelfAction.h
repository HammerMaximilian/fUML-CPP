/*
 * ReadSelfAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_READSELFACTION_H_
#define UML_ACTIONS_READSELFACTION_H_

#include <uml/actions/Action.h>

namespace uml::actions
{
	class ReadSelfAction : public Action
	{
		public:
			OutputPinPtr result = nullptr;

		public:
			virtual ~ReadSelfAction() = default;

			void setResult(const OutputPinPtr&);
	};
// ReadSelfAction
}

#endif /* UML_ACTIONS_READSELFACTION_H_ */
