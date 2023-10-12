/*
 * PackageableElement.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include <fuml/syntax/commonstructure/PackageableElement.h>
#include <fuml/syntax/commonstructure/VisibilityKind.h>

PackageableElement::PackageableElement()
{
	NamedElement::setVisibility(VisibilityKind::public_);
}

PackageableElement::~PackageableElement()
{
}
