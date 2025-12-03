/*
 * VariableActionActivation.h
 *
 *  Created on: 02.12.2025
 *      Author: maxs
 */

#ifndef FUML_EXTENSIONS_ACTIONS_VARIABLEACTIONACTIVATION_H_
#define FUML_EXTENSIONS_ACTIONS_VARIABLEACTIONACTIVATION_H_

#include <fuml/semantics/actions/ActionActivation.h>

#include <fuml/extensions/fwd.h>

namespace fuml::extensions::actions
{
	class VariableActionActivation : public ActionActivation
	{
		public:
			virtual ~VariableActionActivation() = 0;

			VariableValueListPtr getAccessibleVariableValues();
			VariableValuePtr getVariableValue(const VariablePtr&);
	};
} // VariableActionActivation

#endif /* FUML_EXTENSIONS_ACTIONS_VARIABLEACTIONACTIVATION_H_ */
