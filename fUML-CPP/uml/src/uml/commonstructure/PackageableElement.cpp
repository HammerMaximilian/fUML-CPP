/*
 * PackageableElement.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include <uml/commonstructure/PackageableElement.h>
#include <uml/commonstructure/VisibilityKind.h>

PackageableElement::PackageableElement()
{
	NamedElement::setVisibility(VisibilityKind::public_);
}

PackageableElement::~PackageableElement()
{
}
