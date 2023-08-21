/*
 * Action.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "Action.h"

#include "fuml/syntax/activities/Activity.h"
#include "OutputPin.h"
#include "InputPin.h"

using namespace fuml::syntax::actions;

Action::~Action()
{
}

void Action::setIsLocallyReentrant(bool isLocallyReentrant)
{
	this->isLocallyReentrant = isLocallyReentrant;
} // setIsLocallyReentrant

void Action::_setContext(const std::shared_ptr<fuml::syntax::classification::Classifier>& context)
{
	this->context = context;
} // _setContext

void Action::_setActivity(
	const std::shared_ptr<fuml::syntax::activities::Activity>& activity)
{
	fuml::syntax::activities::ActivityNode::_setActivity(activity);
	this->_setContext(activity);
} // _setActivity

void Action::addInput(const std::shared_ptr<fuml::syntax::actions::InputPin>& input)
{
	fuml::syntax::commonstructure::Element::addOwnedElement(input);
	this->input->push_back(input);
} // addInput

void Action::addOutput(const std::shared_ptr<fuml::syntax::actions::OutputPin>& output)
{
	fuml::syntax::commonstructure::Element::addOwnedElement(output);
	this->output->push_back(output);
} // addOutput
