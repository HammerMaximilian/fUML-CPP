/*
 * ReadIsClassifiedObjectActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_READISCLASSIFIEDOBJECTACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_READISCLASSIFIEDOBJECTACTIONACTIVATION_H_

#include <fuml/semantics/actions/ActionActivation.h>

namespace fuml::semantics::actions
{
	class ReadIsClassifiedObjectActionActivation : public ActionActivation
	{
		public:
			virtual ~ReadIsClassifiedObjectActionActivation() = default;

			virtual void doAction() override;

	};
// ReadIsClassifiedObjectActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_READISCLASSIFIEDOBJECTACTIONACTIVATION_H_ */
