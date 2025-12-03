/*
 * ClearVariableActionActivation.h
 *
 *  Created on: 02.12.2025
 *      Author: maxs
 */

#ifndef FUML_EXTENSIONS_ACTIONS_CLEARVARIABLEACTIONACTIVATION_H_
#define FUML_EXTENSIONS_ACTIONS_CLEARVARIABLEACTIONACTIVATION_H_

#include <fuml/extensions/actions/VariableActionActivation.h>

namespace fuml::extensions::actions
{
	class ClearVariableActionActivation : public VariableActionActivation
	{
		public:
			virtual ~ClearVariableActionActivation() = default;

			virtual void doAction() override;
	};
} // ClearVariableActionActivation

#endif /* FUML_EXTENSIONS_ACTIONS_CLEARVARIABLEACTIONACTIVATION_H_ */
