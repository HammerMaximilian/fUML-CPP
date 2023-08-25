/*
 * PinStreamingParameterListener.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_PINSTREAMINGPARAMETERLISTENER_H_
#define FUML_SEMANTICS_ACTIONS_PINSTREAMINGPARAMETERLISTENER_H_

#include <fuml/semantics/commonbehavior/StreamingParameterListener.h>

namespace fuml::semantics::actions
{
	class PinStreamingParameterListener : public StreamingParameterListener
	{
		public:
			PinActivationPtr nodeActivation = nullptr;

		public:
			virtual ~PinStreamingParameterListener() = default;

			virtual void post(const ValueListPtr&) override;
			virtual bool isTerminated() override;

	}; // PinStreamingParameterListener
}

#endif /* FUML_SEMANTICS_ACTIONS_PINSTREAMINGPARAMETERLISTENER_H_ */
