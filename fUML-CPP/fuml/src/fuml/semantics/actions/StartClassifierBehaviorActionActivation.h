/*
 * StartClassifierBehaviorActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_STARTCLASSIFIERBEHAVIORACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_STARTCLASSIFIERBEHAVIORACTIONACTIVATION_H_

#include <fuml/semantics/actions/ActionActivation.h>

namespace fuml::semantics::actions
{
	class StartClassifierBehaviorActionActivation : public ActionActivation
	{
		public:
			virtual ~StartClassifierBehaviorActionActivation() = default;

			virtual void doAction();

	};
// StartClassifierBehaviorActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_STARTCLASSIFIERBEHAVIORACTIONACTIVATION_H_ */
