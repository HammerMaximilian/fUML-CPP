/*
 * ActivityNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_ACTIVITYNODE_H_
#define FUML_SYNTAX_ACTIVITIES_ACTIVITYNODE_H_

#include <fuml/syntax/activities/ActivityEdgeList.h>
#include <fuml/syntax/classification/RedefinableElement.h>
#include <memory>

namespace fuml::syntax::actions
{
	class StructuredActivityNode;
}
using StructuredActivityNode = fuml::syntax::actions::StructuredActivityNode;
using StructuredActivityNodePtr = std::shared_ptr<StructuredActivityNode>;

namespace fuml::syntax::activities
{
	class Activity;
	class ActivityEdge;
}
using Activity = fuml::syntax::activities::Activity;
using ActivityPtr = std::shared_ptr<Activity>;
using ActivityEdge = fuml::syntax::activities::ActivityEdge;
using ActivityEdgePtr = std::shared_ptr<ActivityEdge>;

namespace fuml::syntax::activities
{
	class ActivityNode : public RedefinableElement
	{
		public:
			StructuredActivityNodePtr inStructuredNode = nullptr;
			ActivityPtr activity = nullptr;
			ActivityEdgeListPtr outgoing = std::make_shared<ActivityEdgeList>();
			ActivityEdgeListPtr incoming = std::make_shared<ActivityEdgeList>();

		public:
			virtual ~ActivityNode() = 0;

			void _setActivity(
					const ActivityPtr&);
			void _setInStructuredNode(
					const StructuredActivityNodePtr&);
			void _addIncoming(
					const ActivityEdgePtr&);
			void _addOutgoing(
					const ActivityEdgePtr&);
	}; // ActivityNode
}

using ActivityNode = fuml::syntax::activities::ActivityNode;
using ActivityNodePtr = std::shared_ptr<ActivityNode>;

#endif /* FUML_SYNTAX_ACTIVITIES_ACTIVITYNODE_H_ */
