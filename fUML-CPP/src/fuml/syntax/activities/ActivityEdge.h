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
namespace fuml::syntax::activities
{
	class Activity;
	class ActivityNode;
}
namespace fuml::syntax::values
{
	class ValueSpecification;
}

namespace fuml::syntax::activities
{
	class ActivityEdge : public fuml::syntax::classification::RedefinableElement
	{
		public:
			std::shared_ptr<Activity> activity = nullptr;
			std::shared_ptr<ActivityNode> source = nullptr;
			std::shared_ptr<ActivityNode> target = nullptr;
			std::shared_ptr<fuml::syntax::values::ValueSpecification> guard = nullptr;
			std::shared_ptr<fuml::syntax::actions::StructuredActivityNode> inStructuredNode = nullptr;

		private:
			std::weak_ptr<ActivityEdge> thisActivityEdgePtr;

		public:
			virtual ~ActivityEdge() = 0;
			virtual void setThisPtr(std::weak_ptr<ActivityEdge>);

			void setTarget(
					const std::shared_ptr<fuml::syntax::activities::ActivityNode>&);
			void setSource(
					const std::shared_ptr<fuml::syntax::activities::ActivityNode>&);
			void setGuard(const std::shared_ptr<fuml::syntax::values::ValueSpecification>&);
			void _setActivity(
					const std::shared_ptr<fuml::syntax::activities::Activity>&);
			void _setInStructuredNode(
					const std::shared_ptr<fuml::syntax::actions::StructuredActivityNode>&);
	}; // ActivityEdge
}

using ActivityEdge = fuml::syntax::activities::ActivityEdge;
using ActivityEdgePtr = std::shared_ptr<ActivityEdge>;

#endif /* FUML_SYNTAX_ACTIVITIES_ACTIVITYEDGE_H_ */
