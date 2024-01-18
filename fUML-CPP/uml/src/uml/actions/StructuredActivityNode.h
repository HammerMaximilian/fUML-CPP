/*
 * StructuredActivityNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_STRUCTUREDACTIVITYNODE_H_
#define UML_ACTIONS_STRUCTUREDACTIVITYNODE_H_

#include <uml/fwd.h>
#include <uml/actions/Action.h>

namespace uml::actions
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
			StructuredActivityNodePtr_w thisStructuredActivityNodePtr;

		public:
			virtual ~StructuredActivityNode() = default;
			void setThisStructuredActivityNodePtr(StructuredActivityNodePtr_w);

			void setMustIsolate(bool);
			void addNode(const ActivityNodePtr&);
			void addEdge(const ActivityEdgePtr&);
			void addStructuredNodeOutput(const OutputPinPtr&);
			void addStructuredNodeInput(const InputPinPtr&);
			void _setContext(const ClassifierPtr&);
			void _setActivity(const ActivityPtr&);
	};
// StructuredActivityNode
}

#endif /* UML_ACTIONS_STRUCTUREDACTIVITYNODE_H_ */
