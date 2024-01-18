/*
 * Activity.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIVITIES_ACTIVITY_H_
#define UML_ACTIVITIES_ACTIVITY_H_

#include <uml/commonbehavior/Behavior.h>
#include <uml/fwd.h>

namespace uml::activities
{
	class Activity : public uml::commonbehavior::Behavior
	{
		public:
			StructuredActivityNodeListPtr structuredNode = std::make_shared<StructuredActivityNodeList>();
			ActivityNodeListPtr node = std::make_shared<ActivityNodeList>();
			bool isReadOnly = false;
			ActivityEdgeListPtr edge = std::make_shared<ActivityEdgeList>();
			ActivityGroupListPtr group = std::make_shared<ActivityGroupList>();

		private:
			ActivityPtr_w thisActivityPtr;

		public:
			virtual ~Activity() = default;
			void setThisActivityPtr(ActivityPtr_w);

			void setIsReadOnly(bool);
			void addNode(const ActivityNodePtr&);
			void addStructuredNode(const StructuredActivityNodePtr&);
			void addGroup(const ActivityGroupPtr&);
			void addEdge(const ActivityEdgePtr&);
			virtual void _setContext(const BehavioredClassifierPtr&) override;
	};
// Activity
}

#endif /* UML_ACTIVITIES_ACTIVITY_H_ */
