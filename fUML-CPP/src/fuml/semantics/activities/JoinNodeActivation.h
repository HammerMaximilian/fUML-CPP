/*
 * JoinNodeActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_JOINNODEACTIVATION_H_
#define FUML_SEMANTICS_ACTIVITIES_JOINNODEACTIVATION_H_

#include <fuml/semantics/activities/ControlNodeActivation.h>

namespace fuml::semantics::activities
{
	class JoinNodeActivation : public ControlNodeActivation
	{
		public:
			virtual ~JoinNodeActivation() = default;

			virtual bool isReady() override;

	}; // JoinNodeActivation
}

#endif /* FUML_SEMANTICS_ACTIVITIES_JOINNODEACTIVATION_H_ */
