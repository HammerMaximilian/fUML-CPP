/*
 * LoopNode.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/LoopNode.h>

void LoopNode::setIsTestedFirst(bool isTestedFirst)
{
	this->isTestedFirst = isTestedFirst;
} // setIsTestedFirst

void LoopNode::addTest(const ExecutableNodePtr& test)
{
	this->test->push_back(test);
} // addTest

void LoopNode::addBodyPart(const ExecutableNodePtr& bodyPart)
{
	this->bodyPart->push_back(bodyPart);
} // addBodyPart

void LoopNode::addLoopVariableInput(const InputPinPtr& loopVariableInput)
{
	StructuredActivityNode::addStructuredNodeInput(loopVariableInput);
	this->loopVariableInput->push_back(loopVariableInput);
} // addLoopVariableInput

void LoopNode::addLoopVariable(const OutputPinPtr& loopVariable)
{
	this->loopVariable->push_back(loopVariable);
} // addLoopVariable

void LoopNode::setDecider(const OutputPinPtr& decider)
{
	this->decider = decider;
} // setDecider

void LoopNode::addBodyOutput(const OutputPinPtr& bodyOutput)
{
	this->bodyOutput->push_back(bodyOutput);
} // addBodyOutput

void LoopNode::addResult(const OutputPinPtr& result)
{
	Action::addOutput(result);
	this->result->push_back(result);
} // addResult
