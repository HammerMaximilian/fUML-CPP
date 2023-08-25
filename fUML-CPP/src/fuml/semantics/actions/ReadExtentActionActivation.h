/*
 * ReadExtentActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_READEXTENTACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_READEXTENTACTIONACTIVATION_H_

#include <fuml/semantics/actions/ActionActivation.h>

namespace fuml::semantics::actions
{
	class ReadExtentActionActivation : public ActionActivation
	{
		public:
			virtual ~ReadExtentActionActivation() = default;

			virtual void doAction() override;

	}; // ReadExtentActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_READEXTENTACTIONACTIVATION_H_ */
