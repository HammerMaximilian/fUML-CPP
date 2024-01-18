/*
 * ActivityEdge.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIVITIES_ACTIVITYEDGE_H_
#define UML_ACTIVITIES_ACTIVITYEDGE_H_

#include <uml/classification/RedefinableElement.h>

namespace uml::activities
{
	class ActivityEdge : public uml::classification::RedefinableElement
	{
		public:
			ActivityPtr_w activity;
			ActivityNodePtr source = nullptr;
			ActivityNodePtr target = nullptr;
			ValueSpecificationPtr guard = nullptr;
			StructuredActivityNodePtr_w inStructuredNode;

		private:
			ActivityEdgePtr_w thisActivityEdgePtr;

		public:
			virtual ~ActivityEdge() = 0;
			void setThisActivityEdgePtr(ActivityEdgePtr_w);

			void setTarget(const ActivityNodePtr&);
			void setSource(const ActivityNodePtr&);
			void setGuard(const ValueSpecificationPtr&);
			void _setActivity(const ActivityPtr&);
			void _setInStructuredNode(const StructuredActivityNodePtr&);
	};
// ActivityEdge
}

#endif /* UML_ACTIVITIES_ACTIVITYEDGE_H_ */
