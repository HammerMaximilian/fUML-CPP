/*
 * StructuredActivityNodeActivationExtension.h
 *
 *  Created on: 02.12.2025
 *      Author: maxs
 */

#ifndef FUML_EXTENSIONS_ACTIONS_STRUCTUREDACTIVITYNODEACTIVATIONEXTENSION_H_
#define FUML_EXTENSIONS_ACTIONS_STRUCTUREDACTIVITYNODEACTIVATIONEXTENSION_H_

#include <fuml/semantics/actions/StructuredActivityNodeActivation.h>

#include <fuml/extensions/fwd.h>

namespace fuml::extensions::actions
{
	class StructuredActivityNodeActivationExtension : virtual public StructuredActivityNodeActivation
	{
		public:
			VariableValueListPtr variableValues = std::make_shared<VariableValueList>();

		public:
			virtual ~StructuredActivityNodeActivationExtension() = default;

			virtual void initialize(const ActivityNodePtr&, const ActivityNodeActivationGroupPtr&) override;
			void createVariableValues();
			VariableValueListPtr getVariableValues();
	};
// StructuredActivityNodeActivationExtension
}

#endif /* FUML_EXTENSIONS_ACTIONS_STRUCTUREDACTIVITYNODEACTIVATIONEXTENSION_H_ */
