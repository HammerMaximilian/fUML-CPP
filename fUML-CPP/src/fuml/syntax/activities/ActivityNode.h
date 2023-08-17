/*
 * ActivityNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_ACTIVITYNODE_H_
#define FUML_SYNTAX_ACTIVITIES_ACTIVITYNODE_H_

#include "fuml/syntax/classification/RedefinableElement.h"
#include "ActivityEdgeList.h"

namespace fuml::syntax::actions
{
	class StructuredActivityNode;
}
namespace fuml::syntax::activities
{
	class Activity;
}

namespace fuml::syntax::activities
{
	class ActivityNode : public fuml::syntax::classification::RedefinableElement
	{
		public:
			std::shared_ptr<fuml::syntax::actions::StructuredActivityNode> inStructuredNode = nullptr;
			std::shared_ptr<fuml::syntax::activities::Activity> activity = nullptr;
			std::shared_ptr<fuml::syntax::activities::ActivityEdgeList> outgoing = std::make_shared<fuml::syntax::activities::ActivityEdgeList>();
			std::shared_ptr<fuml::syntax::activities::ActivityEdgeList> incoming = std::make_shared<fuml::syntax::activities::ActivityEdgeList>();

		public:
			virtual ~ActivityNode() = 0;

			void _setActivity(
					const std::shared_ptr<fuml::syntax::activities::Activity>&);
			void _setInStructuredNode(
					const std::shared_ptr<fuml::syntax::actions::StructuredActivityNode>&);
			void _addIncoming(
					const std::shared_ptr<fuml::syntax::activities::ActivityEdge>&);
			void _addOutgoing(
					const std::shared_ptr<fuml::syntax::activities::ActivityEdge>&);
	}; // ActivityNode
}

#endif /* FUML_SYNTAX_ACTIVITIES_ACTIVITYNODE_H_ */
