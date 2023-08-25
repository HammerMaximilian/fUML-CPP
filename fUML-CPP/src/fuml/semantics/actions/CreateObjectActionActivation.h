/*
 * CreateObjectActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_CREATEOBJECTACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_CREATEOBJECTACTIONACTIVATION_H_

#include <fuml/semantics/actions/ActionActivation.h>

namespace fuml::semantics::actions
{
	class CreateObjectActionActivation : public ActionActivation
	{
		public:
			virtual ~CreateObjectActionActivation() = default;

			virtual void doAction() override;

	}; // CreateObjectActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_CREATEOBJECTACTIONACTIVATION_H_ */
