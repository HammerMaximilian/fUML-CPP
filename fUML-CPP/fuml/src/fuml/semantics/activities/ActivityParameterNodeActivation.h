/*
 * ActivityParameterNodeActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_ACTIVITYPARAMETERNODEACTIVATION_H_
#define FUML_SEMANTICS_ACTIVITIES_ACTIVITYPARAMETERNODEACTIVATION_H_

#include <fuml/semantics/activities/ObjectNodeActivation.h>

namespace fuml::semantics::activities
{
	class ActivityParameterNodeActivation : public ObjectNodeActivation
	{
		private:
			ActivityParameterNodeActivationPtr_w thisActivityParameterNodeActivationPtr;

		public:
			virtual ~ActivityParameterNodeActivation() = default;
			void setThisActivityParameterNodeActivationPtr(ActivityParameterNodeActivationPtr_w);

			virtual void run() override;
			virtual void fire(const TokenListPtr&) override;
			virtual void clearTokens() override;

	};
// ActivityParameterNodeActivation
}

#endif /* FUML_SEMANTICS_ACTIVITIES_ACTIVITYPARAMETERNODEACTIVATION_H_ */
