/*
 * ClearAssociationActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_CLEARASSOCIATIONACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_CLEARASSOCIATIONACTIONACTIVATION_H_

#include <fuml/semantics/actions/ActionActivation.h>

namespace fuml::semantics::actions
{
	class ClearAssociationActionActivation : public ActionActivation
	{
		public:
			virtual ~ClearAssociationActionActivation() = default;

			virtual void doAction() override;

	}; // ClearAssociationActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_CLEARASSOCIATIONACTIONACTIVATION_H_ */
