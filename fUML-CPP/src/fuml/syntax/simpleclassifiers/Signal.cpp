/*
 * Signal.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include "Signal.h"

#include "fuml/syntax/classification/Property.h"

using namespace fuml::syntax::simpleclassifiers;

void Signal::addOwnedAttribute(
	const std::shared_ptr<fuml::syntax::classification::Property>& ownedAttribute)
{
	fuml::syntax::classification::Classifier::addAttribute(ownedAttribute);
	fuml::syntax::commonstructure::Namespace::addOwnedMember(ownedAttribute);

	this->ownedAttribute->push_back(ownedAttribute);
} // addOwnedAttribute
