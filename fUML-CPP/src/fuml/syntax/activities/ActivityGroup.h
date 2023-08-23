/*
 * ActivityGroup.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_ACTIVITYGROUP_H_
#define FUML_SYNTAX_ACTIVITIES_ACTIVITYGROUP_H_

#include <fuml/syntax/activities/ActivityNode.h>

namespace fuml::syntax::activities
{
	class ActivityGroup : public fuml::syntax::activities::ActivityNode
	{
		public:
			virtual ~ActivityGroup() = 0;
	}; // ActivityGroup
}

#endif /* FUML_SYNTAX_ACTIVITIES_ACTIVITYGROUP_H_ */
