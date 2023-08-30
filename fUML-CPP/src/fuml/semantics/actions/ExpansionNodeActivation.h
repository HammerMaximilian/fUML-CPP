/*
 * ExpansionNodeActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_EXPANSIONNODEACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_EXPANSIONNODEACTIVATION_H_

#include <fuml/semantics/activities/ObjectNodeActivation.h>

namespace fuml::semantics::actions
{
	class ExpansionNodeActivation : public ObjectNodeActivation
	{
		public:
			virtual ~ExpansionNodeActivation() = default;

			virtual void fire(const TokenListPtr&) override;
			virtual void receiveOffer() override;
			virtual bool isReady() override;
			ExpansionRegionActivationPtr getExpansionRegionActivation();

	};
// ExpansionNodeActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_EXPANSIONNODEACTIVATION_H_ */
