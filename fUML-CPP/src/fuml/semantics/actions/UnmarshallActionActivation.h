/*
 * UnmarshallActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_UNMARSHALLACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_UNMARSHALLACTIONACTIVATION_H_

#include <fuml/semantics/actions/ActionActivation.h>

namespace fuml::semantics::actions
{
	class UnmarshallActionActivation : public ActionActivation
	{
		public:
			virtual ~UnmarshallActionActivation() = default;

			virtual void doAction() override;

	}; // UnmarshallActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_UNMARSHALLACTIONACTIVATION_H_ */
