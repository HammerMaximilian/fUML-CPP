/*
 * StartObjectBehaviorActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_STARTOBJECTBEHAVIORACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_STARTOBJECTBEHAVIORACTIONACTIVATION_H_

#include <fuml/semantics/actions/InvocationActionActivation.h>

namespace fuml::semantics::actions
{
	class StartObjectBehaviorActionActivation : public InvocationActionActivation
	{
		public:
			virtual ~StartObjectBehaviorActionActivation() = default;

			virtual void doAction();

	};
// StartObjectBehaviorActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_STARTOBJECTBEHAVIORACTIONACTIVATION_H_ */
