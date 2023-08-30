/*
 * ActivityEdge.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_ACTIVITYEDGE_H_
#define FUML_SYNTAX_ACTIVITIES_ACTIVITYEDGE_H_

#include <fuml/syntax/classification/RedefinableElement.h>

namespace fuml::syntax::activities
{
	class ActivityEdge : public fuml::syntax::classification::RedefinableElement
	{
		public:
			ActivityPtr activity = nullptr;
			ActivityNodePtr source = nullptr;
			ActivityNodePtr target = nullptr;
			ValueSpecificationPtr guard = nullptr;
			StructuredActivityNodePtr inStructuredNode = nullptr;

		private:
			std::weak_ptr<ActivityEdge> thisActivityEdgePtr;

		public:
			virtual ~ActivityEdge() = 0;
			void setThisActivityEdgePtr(std::weak_ptr<ActivityEdge>);

			void setTarget(const ActivityNodePtr&);
			void setSource(const ActivityNodePtr&);
			void setGuard(const ValueSpecificationPtr&);
			void _setActivity(const ActivityPtr&);
			void _setInStructuredNode(const StructuredActivityNodePtr&);
	};
// ActivityEdge
}

#endif /* FUML_SYNTAX_ACTIVITIES_ACTIVITYEDGE_H_ */
