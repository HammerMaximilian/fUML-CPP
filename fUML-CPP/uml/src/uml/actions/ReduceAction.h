/*
 * ReduceAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_REDUCEACTION_H_
#define UML_ACTIONS_REDUCEACTION_H_

#include <uml/actions/Action.h>

namespace uml::actions
{
	class ReduceAction : public Action
	{
		public:
			BehaviorPtr reducer = nullptr;
			OutputPinPtr result = nullptr;
			InputPinPtr collection = nullptr;
			bool isOrdered;

		public:
			virtual ~ReduceAction() = default;

			void setIsOrdered(bool);
			void setReducer(const BehaviorPtr&);
			void setCollection(const InputPinPtr&);
			void setResult(const OutputPinPtr&);
	};
// ReduceAction
}

#endif /* UML_ACTIONS_REDUCEACTION_H_ */
