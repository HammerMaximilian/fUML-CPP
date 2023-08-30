/*
 * ReduceActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_REDUCEACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_REDUCEACTIONACTIVATION_H_

#include <fuml/semantics/actions/ActionActivation.h>

namespace fuml::semantics::actions
{
	class ReduceActionActivation : public ActionActivation
	{
		public:
			ExecutionPtr currentExecution = nullptr;

		public:
			virtual ~ReduceActionActivation() = default;

			virtual void doAction() override;
			virtual void terminate() override;

	}; // ReduceActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_REDUCEACTIONACTIVATION_H_ */
