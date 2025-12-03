/*
 * ConditionalNodeActivationExtension.h
 *
 *  Created on: 02.12.2025
 *      Author: maxs
 */

#ifndef FUML_EXTENSIONS_ACTIONS_CONDITIONALNODEACTIVATIONEXTENSION_H_
#define FUML_EXTENSIONS_ACTIONS_CONDITIONALNODEACTIVATIONEXTENSION_H_

#include <fuml/extensions/actions/StructuredActivityNodeActivationExtension.h>
#include <fuml/semantics/actions/ConditionalNodeActivation.h>

namespace fuml::extensions::actions
{
	class ConditionalNodeActivationExtension : virtual public StructuredActivityNodeActivationExtension, virtual public ConditionalNodeActivation
	{
		// This extension class only serves the purpose to extend ConditionalNodeActivation
		// by the semantics of Variables.
		public:
			virtual ~ConditionalNodeActivationExtension() = default;
	};
}

#endif /* FUML_EXTENSIONS_ACTIONS_CONDITIONALNODEACTIVATIONEXTENSION_H_ */
