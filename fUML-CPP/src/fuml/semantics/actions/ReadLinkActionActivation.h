/*
 * ReadLinkActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_READLINKACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_READLINKACTIONACTIVATION_H_

#include <fuml/semantics/actions/LinkActionActivation.h>

namespace fuml::semantics::actions
{
	class ReadLinkActionActivation : public LinkActionActivation
	{
		public:
			virtual ~ReadLinkActionActivation() = default;

			virtual void doAction() override;

	};
// ReadLinkActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_READLINKACTIONACTIVATION_H_ */
