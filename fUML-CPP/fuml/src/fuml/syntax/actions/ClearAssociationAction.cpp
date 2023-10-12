/*
 * ClearAssociationAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/ClearAssociationAction.h>

void ClearAssociationAction::setObject(const InputPinPtr& object)
{
	Action::addInput(object);
	this->object = object;
} // setObject

void ClearAssociationAction::setAssociation(const AssociationPtr& association)
{
	this->association = association;
} // setAssociation
