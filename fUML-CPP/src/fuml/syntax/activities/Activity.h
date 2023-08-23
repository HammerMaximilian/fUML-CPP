/*
 * Activity.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_ACTIVITY_H_
#define FUML_SYNTAX_ACTIVITIES_ACTIVITY_H_

#include <fuml/syntax/actions/StructuredActivityNodeList.h>
#include <fuml/syntax/activities/ActivityEdgeList.h>
#include <fuml/syntax/activities/ActivityGroupList.h>
#include <fuml/syntax/activities/ActivityNodeList.h>
#include <fuml/syntax/commonbehavior/Behavior.h>
#include <memory>

namespace fuml::syntax::activities
{
	class Activity : public fuml::syntax::commonbehavior::Behavior
	{
		public:
			StructuredActivityNodeListPtr structuredNode = std::make_shared<fuml::syntax::actions::StructuredActivityNodeList>();
			std::shared_ptr<ActivityNodeList> node = std::make_shared<ActivityNodeList>();
			bool isReadOnly = false;
			std::shared_ptr<ActivityEdgeList> edge = std::make_shared<ActivityEdgeList>();
			std::shared_ptr<ActivityGroupList> group = std::make_shared<ActivityGroupList>();

		private:
			std::weak_ptr<Activity> thisActivityPtr;

		public:
			virtual void setThisPtr(std::weak_ptr<fuml::syntax::activities::Activity>);

			void setIsReadOnly(bool);
			void addNode(
					const ActivityNodePtr&);
			void addStructuredNode(const StructuredActivityNodePtr&);
			void addGroup(const ActivityGroupPtr&);
			void addEdge(
					const ActivityEdgePtr&);
			void _setContext(
					const BehavioredClassifierPtr&);
	}; // Activity
}

using Activity = fuml::syntax::activities::Activity;
using ActivityPtr = std::shared_ptr<Activity>;

#endif /* FUML_SYNTAX_ACTIVITIES_ACTIVITY_H_ */
