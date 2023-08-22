/*
 * Activity.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_ACTIVITY_H_
#define FUML_SYNTAX_ACTIVITIES_ACTIVITY_H_

#include "fuml/syntax/commonbehavior/Behavior.h"
#include "fuml/syntax/actions/StructuredActivityNodeList.h"
#include "ActivityNodeList.h"
#include "ActivityEdgeList.h"
#include "ActivityGroupList.h"

namespace fuml::syntax::activities
{
	class Activity : public fuml::syntax::commonbehavior::Behavior
	{
		public:
			std::shared_ptr<fuml::syntax::actions::StructuredActivityNodeList> structuredNode = std::make_shared<fuml::syntax::actions::StructuredActivityNodeList>();
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
					const std::shared_ptr<fuml::syntax::activities::ActivityNode>&);
			void addStructuredNode(const std::shared_ptr<fuml::syntax::actions::StructuredActivityNode>&);
			void addGroup(const std::shared_ptr<fuml::syntax::activities::ActivityGroup>&);
			void addEdge(
					const std::shared_ptr<fuml::syntax::activities::ActivityEdge>&);
			void _setContext(
					const std::shared_ptr<fuml::syntax::commonbehavior::BehavioredClassifier>&);
	}; // Activity
}

using Activity = fuml::syntax::activities::Activity;
using ActivityPtr = std::shared_ptr<Activity>;

#endif /* FUML_SYNTAX_ACTIVITIES_ACTIVITY_H_ */
