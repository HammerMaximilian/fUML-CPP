/*
 * PackageableElement.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include "PackageableElement.h"

#include "VisibilityKind.h"

using namespace fuml::syntax::commonstructure;

PackageableElement::PackageableElement()
{
	NamedElement::setVisibility(VisibilityKind::public_);
}

PackageableElement::~PackageableElement()
{
}
