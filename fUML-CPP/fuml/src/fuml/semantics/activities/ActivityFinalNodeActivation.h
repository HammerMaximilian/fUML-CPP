/*
 * ActivityFinalNodeActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_ACTIVITYFINALNODEACTIVATION_H_
#define FUML_SEMANTICS_ACTIVITIES_ACTIVITYFINALNODEACTIVATION_H_

#include <fuml/semantics/activities/ControlNodeActivation.h>

namespace fuml::semantics::activities
{
	class ActivityFinalNodeActivation : public ControlNodeActivation
	{
		public:
			virtual ~ActivityFinalNodeActivation() = default;

			virtual void fire(const TokenListPtr&) override;
	};
// ActivityFinalNodeActivation
}

#endif /* FUML_SEMANTICS_ACTIVITIES_ACTIVITYFINALNODEACTIVATION_H_ */
