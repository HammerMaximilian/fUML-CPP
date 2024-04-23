/*
 * CS_CallOperationActionActivationExtension.cpp
 *
 *  Created on: 23.04.2024
 *      Author: Maximilian
 */

#include <pscs/semantics/actions/CS_CallOperationActionActivation.h>

#include <pscs/semantics/fwd.h>

OutputPinListPtr CS_CallOperationActionActivation::getOfferingOutputPins()
{
	// Additional override of fuml::semantics::actions::CallActionActivation::getOfferingOutputPins()
	// Bypass behavior of CallActionActivation because when CS_CallOperationActionActivation::doAction()
	// is invoked instead of CallActionActivation's doAction() method,
	// this->nonStreamingOutputPins is never set.

	return ActionActivation::getOfferingOutputPins();
} // getOfferingOutputPins
