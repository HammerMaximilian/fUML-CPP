/*
 * ActivityGroupList.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_ACTIVITYGROUPLIST_H_
#define FUML_SYNTAX_ACTIVITIES_ACTIVITYGROUPLIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::activities
{
	class ActivityGroup;
	typedef std::vector<std::shared_ptr<fuml::syntax::activities::ActivityGroup>> ActivityGroupList;
}

using ActivityGroupList = fuml::syntax::activities::ActivityGroupList;
using ActivityGroupListPtr = std::shared_ptr<ActivityGroupList>;

#endif /* FUML_SYNTAX_ACTIVITIES_ACTIVITYGROUPLIST_H_ */
