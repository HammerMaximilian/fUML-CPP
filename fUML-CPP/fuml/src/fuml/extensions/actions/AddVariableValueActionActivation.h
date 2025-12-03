/*
 * AddVariableValueActionActivation.h
 *
 *  Created on: 02.12.2025
 *      Author: maxs
 */

#ifndef FUML_EXTENSIONS_ACTIONS_ADDVARIABLEVALUEACTIONACTIVATION_H_
#define FUML_EXTENSIONS_ACTIONS_ADDVARIABLEVALUEACTIONACTIVATION_H_

#include <fuml/extensions/actions/WriteVariableActionActivation.h>

namespace fuml::extensions::actions
{
	class AddVariableValueActionActivation : public WriteVariableActionActivation
	{
		public:
			virtual ~AddVariableValueActionActivation() = default;

			virtual void doAction() override;
	};
} // AddVariableValueActionActivation

#endif /* FUML_EXTENSIONS_ACTIONS_ADDVARIABLEVALUEACTIONACTIVATION_H_ */
