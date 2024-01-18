/*
 * Action.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <uml/actions/Action.h>
#include <uml/actions/InputPin.h>
#include <uml/actions/OutputPin.h>
#include <uml/activities/Activity.h>

Action::~Action()
{
}

void Action::setIsLocallyReentrant(bool isLocallyReentrant)
{
	this->isLocallyReentrant = isLocallyReentrant;
} // setIsLocallyReentrant

void Action::_setContext(const ClassifierPtr& context)
{
	this->context = context;
} // _setContext

void Action::_setActivity(const ActivityPtr& activity)
{
	ActivityNode::_setActivity(activity);
	this->_setContext(activity);
} // _setActivity

void Action::addInput(const InputPinPtr& input)
{
	Element::addOwnedElement(input);
	this->input->push_back(input);
} // addInput

void Action::addOutput(const OutputPinPtr& output)
{
	Element::addOwnedElement(output);
	this->output->push_back(output);
} // addOutput
