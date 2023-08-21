/*
 * StructuredActivityNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_STRUCTUREDACTIVITYNODE_H_
#define FUML_SYNTAX_ACTIONS_STRUCTUREDACTIVITYNODE_H_

#include "Action.h"
#include "fuml/syntax/activities/ActivityNodeList.h"
#include "fuml/syntax/activities/ActivityEdgeList.h"
#include "OutputPinList.h"
#include "InputPinList.h"

namespace fuml::syntax::actions
{
	class StructuredActivityNode : public fuml::syntax::actions::Action
	{
		public:
			std::shared_ptr<fuml::syntax::activities::ActivityNodeList> node = std::make_shared<fuml::syntax::activities::ActivityNodeList>();
			std::shared_ptr<fuml::syntax::activities::Activity> activity = nullptr;
			bool mustIsolate = false;
			std::shared_ptr<fuml::syntax::activities::ActivityEdgeList> edge = std::make_shared<fuml::syntax::activities::ActivityEdgeList>();
			std::shared_ptr<OutputPinList> structuredNodeOutput = std::make_shared<fuml::syntax::actions::OutputPinList>();
			std::shared_ptr<InputPinList> structuredNodeInput = std::make_shared<fuml::syntax::actions::InputPinList>();

		private:
			std::weak_ptr<StructuredActivityNode> thisStructuredActivityNodePtr;

		public:
			virtual void setThisPtr(std::weak_ptr<StructuredActivityNode>);

			void setMustIsolate(bool);
			void addNode(
					const std::shared_ptr<fuml::syntax::activities::ActivityNode>&);
			void addEdge(
					const std::shared_ptr<fuml::syntax::activities::ActivityEdge>&);
			void addStructuredNodeOutput(
					const std::shared_ptr<fuml::syntax::actions::OutputPin>&);
			void addStructuredNodeInput(
					const std::shared_ptr<fuml::syntax::actions::InputPin>&);
			void _setContext(const std::shared_ptr<fuml::syntax::classification::Classifier>&);
			void _setActivity(
					const std::shared_ptr<fuml::syntax::activities::Activity>&);
	}; // StructuredActivityNode
}

#endif /* FUML_SYNTAX_ACTIONS_STRUCTUREDACTIVITYNODE_H_ */
