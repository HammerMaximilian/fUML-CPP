/*
 * DestroyLinkActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_DESTROYLINKACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_DESTROYLINKACTIONACTIVATION_H_

#include <fuml/semantics/actions/WriteLinkActionActivation.h>

namespace fuml::semantics::actions
{
	class DestroyLinkActionActivation : public WriteLinkActionActivation
	{
		public:
			virtual ~DestroyLinkActionActivation() = default;

			virtual void doAction() override;
	};
// DestroyLinkActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_DESTROYLINKACTIONACTIVATION_H_ */
