/*
 * TestIdentityActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_TESTIDENTITYACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_TESTIDENTITYACTIONACTIVATION_H_

#include <fuml/semantics/actions/ActionActivation.h>

namespace fuml::semantics::actions
{
	class TestIdentityActionActivation : public ActionActivation
	{
		public:
			virtual ~TestIdentityActionActivation() = default;

			virtual void doAction() override;

	}; // TestIdentityActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_TESTIDENTITYACTIONACTIVATION_H_ */
