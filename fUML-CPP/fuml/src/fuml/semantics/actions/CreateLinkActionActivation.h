/*
 * CreateLinkActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_CREATELINKACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_CREATELINKACTIONACTIVATION_H_

#include <fuml/semantics/actions/WriteLinkActionActivation.h>

namespace fuml::semantics::actions
{
	class CreateLinkActionActivation : public WriteLinkActionActivation
	{
		public:
			virtual ~CreateLinkActionActivation() = default;

			virtual void doAction() override;
	};
// CreateLinkActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_CREATELINKACTIONACTIVATION_H_ */
