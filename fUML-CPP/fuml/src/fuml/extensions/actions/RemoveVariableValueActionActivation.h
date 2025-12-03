/*
 * RemoveVariableValueActionActivation.h
 *
 *  Created on: 02.12.2025
 *      Author: maxs
 */

#ifndef FUML_EXTENSIONS_ACTIONS_REMOVEVARIABLEVALUEACTIONACTIVATION_H_
#define FUML_EXTENSIONS_ACTIONS_REMOVEVARIABLEVALUEACTIONACTIVATION_H_

#include <fuml/extensions/actions/WriteVariableActionActivation.h>

namespace fuml::extensions::actions
{
	class RemoveVariableValueActionActivation : public WriteVariableActionActivation
	{
		public:
			virtual ~RemoveVariableValueActionActivation() = default;

			virtual void doAction() override;
	};
} // RemoveVariableValueActionActivation

#endif /* FUML_EXTENSIONS_ACTIONS_REMOVEVARIABLEVALUEACTIONACTIVATION_H_ */
