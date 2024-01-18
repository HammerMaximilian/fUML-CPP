/*
 * ActivityNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIVITIES_ACTIVITYNODE_H_
#define UML_ACTIVITIES_ACTIVITYNODE_H_

#include <uml/classification/RedefinableElement.h>
#include <uml/fwd.h>

namespace uml::activities
{
	class ActivityNode : public RedefinableElement
	{
		public:
			StructuredActivityNodePtr_w inStructuredNode;
			ActivityPtr_w activity;
			ActivityEdgeListPtr outgoing = std::make_shared<ActivityEdgeList>();
			ActivityEdgeListPtr incoming = std::make_shared<ActivityEdgeList>();

		public:
			virtual ~ActivityNode() = 0;

			virtual void _setActivity(const ActivityPtr&);
			void _setInStructuredNode(const StructuredActivityNodePtr&);
			void _addIncoming(const ActivityEdgePtr&);
			void _addOutgoing(const ActivityEdgePtr&);
	};
// ActivityNode
}

#endif /* UML_ACTIVITIES_ACTIVITYNODE_H_ */
