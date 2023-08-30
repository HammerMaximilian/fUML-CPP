/*
 * ReadSelfActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_READSELFACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_READSELFACTIONACTIVATION_H_

#include <fuml/semantics/actions/ActionActivation.h>

namespace fuml::semantics::actions
{
	class ReadSelfActionActivation : public ActionActivation
	{
		public:
			virtual ~ReadSelfActionActivation() = default;

			virtual void doAction() override;

	};
// ReadSelfActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_READSELFACTIONACTIVATION_H_ */
