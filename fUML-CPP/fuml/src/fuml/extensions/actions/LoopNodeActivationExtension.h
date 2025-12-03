/*
 * LoopNodeActivationExtension.h
 *
 *  Created on: 02.12.2025
 *      Author: maxs
 */

#ifndef FUML_EXTENSIONS_ACTIONS_LOOPNODEACTIVATIONEXTENSION_H_
#define FUML_EXTENSIONS_ACTIONS_LOOPNODEACTIVATIONEXTENSION_H_

#include <fuml/extensions/actions/StructuredActivityNodeActivationExtension.h>
#include <fuml/semantics/actions/LoopNodeActivation.h>

namespace fuml::extensions::actions
{
	class LoopNodeActivationExtension : virtual public StructuredActivityNodeActivationExtension, virtual public LoopNodeActivation
	{
		// This extension class only serves the purpose to extend LoopNodeActivation
		// by the semantics of Variables.
		public:
			virtual ~LoopNodeActivationExtension() = default;
	};
}

#endif /* FUML_EXTENSIONS_ACTIONS_LOOPNODEACTIVATIONEXTENSION_H_ */
