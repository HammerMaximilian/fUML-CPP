/*
 * RaiseExceptionActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_RAISEEXCEPTIONACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_RAISEEXCEPTIONACTIONACTIVATION_H_

#include <fuml/semantics/actions/ActionActivation.h>

namespace fuml::semantics::actions
{
	class RaiseExceptionActionActivation : public ActionActivation
	{
		public:
			virtual ~RaiseExceptionActionActivation() = default;

			virtual void doAction() override;

	}; // RaiseExceptionActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_RAISEEXCEPTIONACTIONACTIVATION_H_ */
