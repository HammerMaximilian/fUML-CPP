/*
 * ActivityNodeList.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_ACTIVITYNODELIST_H_
#define FUML_SYNTAX_ACTIVITIES_ACTIVITYNODELIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::activities
{
	class ActivityNode;
	typedef std::vector<std::shared_ptr<fuml::syntax::activities::ActivityNode>> ActivityNodeList;
}

using ActivityNodeList = fuml::syntax::activities::ActivityNodeList;
using ActivityNodeListPtr = std::shared_ptr<ActivityNodeList>;

#endif /* FUML_SYNTAX_ACTIVITIES_ACTIVITYNODELIST_H_ */
