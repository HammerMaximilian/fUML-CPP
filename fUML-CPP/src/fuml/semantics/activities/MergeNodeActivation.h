/*
 * MergeNodeActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_MERGENODEACTIVATION_H_
#define FUML_SEMANTICS_ACTIVITIES_MERGENODEACTIVATION_H_

#include <fuml/semantics/activities/ControlNodeActivation.h>

namespace fuml::semantics::activities
{
	class MergeNodeActivation : public ControlNodeActivation
	{
		public:
			virtual ~MergeNodeActivation() = default;

	}; // MergeNodeActivation
}

#endif /* FUML_SEMANTICS_ACTIVITIES_MERGENODEACTIVATION_H_ */
