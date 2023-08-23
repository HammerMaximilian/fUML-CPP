/*
 * ClearAssociationAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/ClearAssociationAction.h>

using namespace fuml::syntax::actions;

void ClearAssociationAction::setObject(const std::shared_ptr<InputPin>& object)
{
	Action::addInput(object);
	this->object = object;
} // setObject

void ClearAssociationAction::setAssociation(
	const std::shared_ptr<fuml::syntax::structuredclassifiers::Association>& association)
{
	this->association = association;
} // setAssociation
