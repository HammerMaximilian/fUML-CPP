/*
 * ControlNodeActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_CONTROLNODEACTIVATION_H_
#define FUML_SEMANTICS_ACTIVITIES_CONTROLNODEACTIVATION_H_

#include <fuml/semantics/activities/ActivityNodeActivation.h>

namespace fuml::semantics::activities
{
	class ControlNodeActivation : public ActivityNodeActivation
	{
		public:
			virtual ~ControlNodeActivation() = 0;

			virtual void fire(const TokenListPtr&) override;

	};
// ControlNodeActivation
}

#endif /* FUML_SEMANTICS_ACTIVITIES_CONTROLNODEACTIVATION_H_ */
