/*
 * ActivityEdgeList.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_ACTIVITYEDGELIST_H_
#define FUML_SYNTAX_ACTIVITIES_ACTIVITYEDGELIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::activities
{
	class ActivityEdge;
	typedef std::vector<std::shared_ptr<fuml::syntax::activities::ActivityEdge>> ActivityEdgeList;
}

using ActivityEdgeList = fuml::syntax::activities::ActivityEdgeList;
using ActivityEdgeListPtr = std::shared_ptr<ActivityEdgeList>;

#endif /* FUML_SYNTAX_ACTIVITIES_ACTIVITYEDGELIST_H_ */
