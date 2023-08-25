/*
 * Activity.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_ACTIVITY_H_
#define FUML_SYNTAX_ACTIVITIES_ACTIVITY_H_

#include <fuml/syntax/fwd.h>
#include <fuml/syntax/commonbehavior/Behavior.h>

namespace fuml::syntax::activities
{
	class Activity : public fuml::syntax::commonbehavior::Behavior
	{
		public:
			StructuredActivityNodeListPtr structuredNode = std::make_shared<StructuredActivityNodeList>();
			ActivityNodeListPtr node = std::make_shared<ActivityNodeList>();
			bool isReadOnly = false;
			ActivityEdgeListPtr edge = std::make_shared<ActivityEdgeList>();
			ActivityGroupListPtr group = std::make_shared<ActivityGroupList>();

		private:
			std::weak_ptr<Activity> thisActivityPtr;

		public:
			virtual ~Activity() = default;
			void setThisActivityPtr(std::weak_ptr<Activity>);

			void setIsReadOnly(bool);
			void addNode(
					const ActivityNodePtr&);
			void addStructuredNode(const StructuredActivityNodePtr&);
			void addGroup(const ActivityGroupPtr&);
			void addEdge(
					const ActivityEdgePtr&);
			virtual void _setContext(
					const BehavioredClassifierPtr&) override;
	}; // Activity
}

#endif /* FUML_SYNTAX_ACTIVITIES_ACTIVITY_H_ */
