/*
 * ActivityEdge.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_ACTIVITYEDGE_H_
#define FUML_SYNTAX_ACTIVITIES_ACTIVITYEDGE_H_

#include <memory>
#include <fuml/syntax/classification/RedefinableElement.h>

namespace fuml::syntax::actions
{
	class StructuredActivityNode;
}
using StructuredActivityNode = fuml::syntax::actions::StructuredActivityNode;
using StructuredActivityNodePtr = std::shared_ptr<StructuredActivityNode>;

namespace fuml::syntax::activities
{
	class Activity;
	class ActivityNode;
}
using Activity = fuml::syntax::activities::Activity;
using ActivityPtr = std::shared_ptr<Activity>;
using ActivityNode = fuml::syntax::activities::ActivityNode;
using ActivityNodePtr = std::shared_ptr<ActivityNode>;

namespace fuml::syntax::values
{
	class ValueSpecification;
}
using ValueSpecification = fuml::syntax::values::ValueSpecification;
using ValueSpecificationPtr = std::shared_ptr<ValueSpecification>;

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
			virtual void setThisPtr(std::weak_ptr<ActivityEdge>);

			void setTarget(
					const ActivityNodePtr&);
			void setSource(
					const ActivityNodePtr&);
			void setGuard(const ValueSpecificationPtr&);
			void _setActivity(
					const ActivityPtr&);
			void _setInStructuredNode(
					const StructuredActivityNodePtr&);
	}; // ActivityEdge
}

using ActivityEdge = fuml::syntax::activities::ActivityEdge;
using ActivityEdgePtr = std::shared_ptr<ActivityEdge>;

#endif /* FUML_SYNTAX_ACTIVITIES_ACTIVITYEDGE_H_ */
