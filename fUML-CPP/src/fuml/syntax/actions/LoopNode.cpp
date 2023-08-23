/*
 * LoopNode.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/LoopNode.h>
#include <memory>
#include <vector>

using namespace fuml::syntax::actions;

void LoopNode::setIsTestedFirst(bool isTestedFirst)
{
	this->isTestedFirst = isTestedFirst;
} // setIsTestedFirst

void LoopNode::addTest(
		const std::shared_ptr<fuml::syntax::activities::ExecutableNode>& test)
{
	this->test->push_back(test);
} // addTest

void LoopNode::addBodyPart(
		const std::shared_ptr<fuml::syntax::activities::ExecutableNode>& bodyPart)
{
	this->bodyPart->push_back(bodyPart);
} // addBodyPart

void LoopNode::addLoopVariableInput(
		const std::shared_ptr<fuml::syntax::actions::InputPin>& loopVariableInput) {
	StructuredActivityNode::addStructuredNodeInput(loopVariableInput);
	this->loopVariableInput->push_back(loopVariableInput);
} // addLoopVariableInput

void LoopNode::addLoopVariable(
		const std::shared_ptr<fuml::syntax::actions::OutputPin>& loopVariable) {
	this->loopVariable->push_back(loopVariable);
} // addLoopVariable

void LoopNode::setDecider(const std::shared_ptr<fuml::syntax::actions::OutputPin>& decider) {
	this->decider = decider;
} // setDecider

void LoopNode::addBodyOutput(
		const std::shared_ptr<fuml::syntax::actions::OutputPin>& bodyOutput) {
	this->bodyOutput->push_back(bodyOutput);
} // addBodyOutput

void LoopNode::addResult(const std::shared_ptr<fuml::syntax::actions::OutputPin>& result) {
	Action::addOutput(result);
	this->result->push_back(result);
} // addResult
