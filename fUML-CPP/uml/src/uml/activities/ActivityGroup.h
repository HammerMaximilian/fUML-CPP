/*
 * ActivityGroup.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIVITIES_ACTIVITYGROUP_H_
#define UML_ACTIVITIES_ACTIVITYGROUP_H_

#include <uml/activities/ActivityNode.h>

namespace uml::activities
{
	class ActivityGroup : public uml::activities::ActivityNode
	{
		public:
			virtual ~ActivityGroup() = 0;
	};
// ActivityGroup
}

#endif /* UML_ACTIVITIES_ACTIVITYGROUP_H_ */
