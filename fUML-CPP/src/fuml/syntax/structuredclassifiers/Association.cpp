/*
 * Association.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/classification/Property.h>
#include <fuml/syntax/structuredclassifiers/Association.h>

void Association::setThisAssociationPtr(std::weak_ptr<Association> thisAssociationPtr)
{
	this->thisAssociationPtr = thisAssociationPtr;
	Classifier::setThisClassifierPtr(thisAssociationPtr);
}

void Association::addOwnedEnd(const PropertyPtr& ownedEnd)
{
	Classifier::addFeature(ownedEnd);
	Namespace::addOwnedMember(ownedEnd);

	this->ownedEnd->push_back(ownedEnd);
	ownedEnd->_setOwningAssociation(thisAssociationPtr.lock());

	this->_addMemberEnd(ownedEnd);
} // addOwnedEnd

void Association::addNavigableOwnedEnd(const PropertyPtr& navigableOwnedEnd)
{
	// Note: A navigable end must also be set as an owned end using
	// setOwnedEnd.

	this->navigableOwnedEnd->push_back(navigableOwnedEnd);
} // addNavigableOwnedEnd

void Association::addMemberEnd(const PropertyPtr& memberEnd)
{
	// Note: This operation should not be used for owned ends. The
	// operation addOwnedEnd should be used instead.

	this->addMember(memberEnd);
	this->_addMemberEnd(memberEnd);
} //addMemberEnd

void Association::_addMemberEnd(const PropertyPtr& memberEnd)
{
	this->memberEnd->push_back(memberEnd);
	memberEnd->_setAssociation(thisAssociationPtr.lock());

	if (memberEnd->type != nullptr)
	{
		this->endType->push_back(memberEnd->type);
	}

	if (this->memberEnd->size() == 2)
	{
		const PropertyPtr& opposite = this->memberEnd->at(0);
		memberEnd->_setOpposite(opposite);
		opposite->_setOpposite(memberEnd);
	}
	else if (this->memberEnd->size() > 2)
	{
		for (const PropertyPtr& end : *(this->memberEnd))
		{
			end->_setOpposite(nullptr);
		}
	}
} // _addMemberEnd
