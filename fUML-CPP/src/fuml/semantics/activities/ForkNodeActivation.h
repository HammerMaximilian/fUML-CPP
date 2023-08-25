/*
 * ForkNodeActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_FORKNODEACTIVATION_H_
#define FUML_SEMANTICS_ACTIVITIES_FORKNODEACTIVATION_H_

#include <fuml/semantics/activities/ControlNodeActivation.h>

namespace fuml::semantics::activities
{
	class ForkNodeActivation : public ControlNodeActivation
	{
		public:
			virtual ~ForkNodeActivation() = default;

			virtual void fire(const TokenListPtr&) override;
			virtual void terminate() override;

	}; // ForkNodeActivation
}

#endif /* FUML_SEMANTICS_ACTIVITIES_FORKNODEACTIVATION_H_ */
