/*
 * LoopNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_LOOPNODE_H_
#define FUML_SYNTAX_ACTIONS_LOOPNODE_H_

#include <fuml/syntax/actions/InputPinList.h>
#include <fuml/syntax/actions/OutputPinList.h>
#include <fuml/syntax/actions/StructuredActivityNode.h>
#include <fuml/syntax/activities/ExecutableNodeList.h>
#include <memory>

namespace fuml::syntax::actions
{
	class LoopNode : public fuml::syntax::actions::StructuredActivityNode
	{
		public:
			bool isTestedFirst = false;
			std::shared_ptr<fuml::syntax::actions::OutputPin> decider = nullptr;
			std::shared_ptr<fuml::syntax::activities::ExecutableNodeList> test = std::make_shared<fuml::syntax::activities::ExecutableNodeList>();
			std::shared_ptr<fuml::syntax::actions::OutputPinList> bodyOutput = std::make_shared<fuml::syntax::actions::OutputPinList>();
			std::shared_ptr<fuml::syntax::actions::InputPinList> loopVariableInput = std::make_shared<fuml::syntax::actions::InputPinList>();
			std::shared_ptr<fuml::syntax::activities::ExecutableNodeList> bodyPart = std::make_shared<fuml::syntax::activities::ExecutableNodeList>();
			std::shared_ptr<fuml::syntax::actions::OutputPinList> result = std::make_shared<fuml::syntax::actions::OutputPinList>();
			std::shared_ptr<fuml::syntax::actions::OutputPinList> loopVariable = std::make_shared<fuml::syntax::actions::OutputPinList>();
			std::shared_ptr<fuml::syntax::activities::ExecutableNodeList> setupPart = std::make_shared<fuml::syntax::activities::ExecutableNodeList>();

		public:
			void setIsTestedFirst(bool);
			void addTest(
					const std::shared_ptr<fuml::syntax::activities::ExecutableNode>&);
			void addBodyPart(
					const std::shared_ptr<fuml::syntax::activities::ExecutableNode>&);
			void addLoopVariableInput(
					const std::shared_ptr<fuml::syntax::actions::InputPin>&);
			void addLoopVariable(
					const std::shared_ptr<fuml::syntax::actions::OutputPin>&);
			void setDecider(const std::shared_ptr<fuml::syntax::actions::OutputPin>&);
			void addBodyOutput(
					const std::shared_ptr<fuml::syntax::actions::OutputPin>&);
			void addResult(const std::shared_ptr<fuml::syntax::actions::OutputPin>&);
	}; // LoopNode
}

using LoopNode = fuml::syntax::actions::LoopNode;
using LoopNodePtr = std::shared_ptr<LoopNode>;

#endif /* FUML_SYNTAX_ACTIONS_LOOPNODE_H_ */
