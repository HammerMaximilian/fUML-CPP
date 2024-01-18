/*
 * CallAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_CALLACTION_H_
#define UML_ACTIONS_CALLACTION_H_

#include <uml/actions/InvocationAction.h>

namespace uml::actions
{
	class CallAction : public InvocationAction
	{
		public:
			bool isSynchronous = true;
			OutputPinListPtr result = std::make_shared<OutputPinList>();

		public:
			virtual ~CallAction() = 0;

			void addResult(const OutputPinPtr&);
	};
// CallAction
}

#endif /* UML_ACTIONS_CALLACTION_H_ */
