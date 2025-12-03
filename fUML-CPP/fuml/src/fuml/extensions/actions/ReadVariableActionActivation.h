/*
 * ReadVariableActionActivation.h
 *
 *  Created on: 02.12.2025
 *      Author: maxs
 */

#ifndef FUML_EXTENSIONS_ACTIONS_READVARIABLEACTIONACTIVATION_H_
#define FUML_EXTENSIONS_ACTIONS_READVARIABLEACTIONACTIVATION_H_

#include <fuml/extensions/actions/VariableActionActivation.h>

namespace fuml::extensions::actions
{
	class ReadVariableActionActivation : public VariableActionActivation
	{
		public:
			virtual ~ReadVariableActionActivation() = default;

			virtual void doAction() override;
	};
} // ReadVariableActionActivation

#endif /* FUML_EXTENSIONS_ACTIONS_READVARIABLEACTIONACTIVATION_H_ */
