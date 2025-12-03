/*
 * WriteVariableActionActivation.h
 *
 *  Created on: 02.12.2025
 *      Author: maxs
 */

#ifndef FUML_EXTENSIONS_ACTIONS_WRITEVARIABLEACTIONACTIVATION_H_
#define FUML_EXTENSIONS_ACTIONS_WRITEVARIABLEACTIONACTIVATION_H_

#include <fuml/extensions/actions/VariableActionActivation.h>

namespace fuml::extensions::actions
{
	class WriteVariableActionActivation : public VariableActionActivation
	{
		public:
			virtual ~WriteVariableActionActivation() = 0;

			int position(const ValuePtr&, const ValueListPtr&, int);
	};
} // WriteVariableActionActivation

#endif /* FUML_EXTENSIONS_ACTIONS_WRITEVARIABLEACTIONACTIVATION_H_ */
