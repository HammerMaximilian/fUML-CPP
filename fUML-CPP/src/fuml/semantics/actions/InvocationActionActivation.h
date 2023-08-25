/*
 * InvocationActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_INVOCATIONACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_INVOCATIONACTIONACTIVATION_H_

#include <fuml/semantics/actions/ActionActivation.h>

namespace fuml::semantics::actions
{
	class InvocationActionActivation : public ActionActivation
	{
		public:
			virtual ~InvocationActionActivation() = 0;
	}; // InvocationActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_INVOCATIONACTIONACTIVATION_H_ */
