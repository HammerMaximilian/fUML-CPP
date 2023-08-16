/*
 * Association.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include "Association.h"

#include "fuml/syntax/classification/Property.h"

using namespace fuml::syntax::structuredclassifiers;

void Association::setThisPtr(std::weak_ptr<fuml::syntax::structuredclassifiers::Association> thisAssociationPtr)
{
	this->thisAssociationPtr = thisAssociationPtr;
	fuml::syntax::classification::Classifier::setThisPtr(thisAssociationPtr);
}

void Association::addOwnedEnd(const std::shared_ptr<fuml::syntax::classification::Property>& ownedEnd)
{
	fuml::syntax::classification::Classifier::addFeature(ownedEnd);
	fuml::syntax::commonstructure::Namespace::addOwnedMember(ownedEnd);

	this->ownedEnd->push_back(ownedEnd);
	ownedEnd->_setOwningAssociation(thisAssociationPtr.lock());

	this->_addMemberEnd(ownedEnd);
} // addOwnedEnd

void Association::addNavigableOwnedEnd(
	const std::shared_ptr<fuml::syntax::classification::Property>& navigableOwnedEnd)
{
	// Note: A navigable end must also be set as an owned end using
	// setOwnedEnd.

	this->navigableOwnedEnd->push_back(navigableOwnedEnd);
} // addNavigableOwnedEnd

void Association::addMemberEnd(const std::shared_ptr<fuml::syntax::classification::Property>& memberEnd)
{
	// Note: This operation should not be used for owned ends. The
	// operation addOwnedEnd should be used instead.

	this->addMember(memberEnd);
	this->_addMemberEnd(memberEnd);
} //addMemberEnd

void Association::_addMemberEnd(const std::shared_ptr<fuml::syntax::classification::Property>& memberEnd)
{
	this->memberEnd->push_back(memberEnd);
	memberEnd->_setAssociation(thisAssociationPtr.lock());

	if (memberEnd->type != nullptr)
	{
		this->endType->push_back(memberEnd->type);
	}

	if (this->memberEnd->size() == 2)
	{
		const std::shared_ptr<fuml::syntax::classification::Property>& opposite = this->memberEnd->at(0);
		memberEnd->_setOpposite(opposite);
		opposite->_setOpposite(memberEnd);
	} else if (this->memberEnd->size() > 2) {
		for (const std::shared_ptr<fuml::syntax::classification::Property>& end : *(this->memberEnd))
		{
			end->_setOpposite(nullptr);
		}
	}
} // _addMemberEnd
