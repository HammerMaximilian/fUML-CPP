/*
 * ElementImport.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include "ElementImport.h"

#include "Namespace.h"
#include "PackageableElement.h"

using namespace fuml::syntax::commonstructure;

void ElementImport::setAlias(std::string alias)
{
	this->alias = alias;
} // setAlias

void ElementImport::setVisibility(
	fuml::syntax::commonstructure::VisibilityKind visibility)
{
	this->visibility = visibility;
} // setVisibility

void ElementImport::setImportedElement(
	const std::shared_ptr<fuml::syntax::commonstructure::PackageableElement>& importedElement)
{
	this->importedElement = importedElement;
} // setImportedElement

void ElementImport::_setImportingNamespace(
	const std::shared_ptr<fuml::syntax::commonstructure::Namespace>& importingNamespace)
{
	this->importingNamespace = importingNamespace;
} // _setImportingNamespace
