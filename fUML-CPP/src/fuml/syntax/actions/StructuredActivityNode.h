/*
 * StructuredActivityNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_STRUCTUREDACTIVITYNODE_H_
#define FUML_SYNTAX_ACTIONS_STRUCTUREDACTIVITYNODE_H_

#include <fuml/syntax/fwd.h>
#include <fuml/syntax/actions/Action.h>

namespace fuml::syntax::actions
{
	class StructuredActivityNode : public Action
	{
		public:
			ActivityNodeListPtr node = std::make_shared<ActivityNodeList>();
			ActivityPtr activity = nullptr;
			bool mustIsolate = false;
			ActivityEdgeListPtr edge = std::make_shared<ActivityEdgeList>();
			OutputPinListPtr structuredNodeOutput = std::make_shared<OutputPinList>();
			InputPinListPtr structuredNodeInput = std::make_shared<InputPinList>();

		private:
			std::weak_ptr<StructuredActivityNode> thisStructuredActivityNodePtr;

		public:
			virtual ~StructuredActivityNode() = default;
			void setThisStructuredActivityNodePtr(std::weak_ptr<StructuredActivityNode>);

			void setMustIsolate(bool);
			void addNode(
					const ActivityNodePtr&);
			void addEdge(
					const ActivityEdgePtr&);
			void addStructuredNodeOutput(
					const OutputPinPtr&);
			void addStructuredNodeInput(
					const InputPinPtr&);
			void _setContext(const ClassifierPtr&);
			void _setActivity(
					const ActivityPtr&);
	}; // StructuredActivityNode
}

#endif /* FUML_SYNTAX_ACTIONS_STRUCTUREDACTIVITYNODE_H_ */
