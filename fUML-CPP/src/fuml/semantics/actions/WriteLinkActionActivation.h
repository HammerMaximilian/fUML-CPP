/*
 * WriteLinkActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_WRITELINKACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_WRITELINKACTIONACTIVATION_H_

#include <fuml/semantics/actions/LinkActionActivation.h>

namespace fuml::semantics::actions
{
	class WriteLinkActionActivation : public LinkActionActivation
	{
		public:
			virtual ~WriteLinkActionActivation() = 0;
	}; // WriteLinkActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_WRITELINKACTIONACTIVATION_H_ */
