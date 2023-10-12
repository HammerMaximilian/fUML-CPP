/*
 * LoopNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_LOOPNODE_H_
#define FUML_SYNTAX_ACTIONS_LOOPNODE_H_

#include <fuml/syntax/actions/StructuredActivityNode.h>
#include <fuml/syntax/fwd.h>

namespace fuml::syntax::actions
{
	class LoopNode : public StructuredActivityNode
	{
		public:
			bool isTestedFirst = false;
			OutputPinPtr decider = nullptr;
			ExecutableNodeListPtr test = std::make_shared<ExecutableNodeList>();
			OutputPinListPtr bodyOutput = std::make_shared<OutputPinList>();
			InputPinListPtr loopVariableInput = std::make_shared<InputPinList>();
			ExecutableNodeListPtr bodyPart = std::make_shared<ExecutableNodeList>();
			OutputPinListPtr result = std::make_shared<OutputPinList>();
			OutputPinListPtr loopVariable = std::make_shared<OutputPinList>();
			ExecutableNodeListPtr setupPart = std::make_shared<ExecutableNodeList>();

		public:
			virtual ~LoopNode() = default;

			void setIsTestedFirst(bool);
			void addTest(const ExecutableNodePtr&);
			void addBodyPart(const ExecutableNodePtr&);
			void addLoopVariableInput(const InputPinPtr&);
			void addLoopVariable(const OutputPinPtr&);
			void setDecider(const OutputPinPtr&);
			void addBodyOutput(const OutputPinPtr&);
			void addResult(const OutputPinPtr&);
	};
// LoopNode
}

#endif /* FUML_SYNTAX_ACTIONS_LOOPNODE_H_ */
