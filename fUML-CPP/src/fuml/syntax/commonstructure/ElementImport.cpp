/*
 * ElementImport.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include "ElementImport.h"

#include "Namespace.h"
#include "PackageableElement.h"

void ElementImport::setAlias(std::string alias)
{
	this->alias = alias;
} // setAlias

void ElementImport::setVisibility(VisibilityKind visibility)
{
	this->visibility = visibility;
} // setVisibility

void ElementImport::setImportedElement(
	const PackageableElementPtr& importedElement)
{
	this->importedElement = importedElement;
} // setImportedElement

void ElementImport::_setImportingNamespace(
	const NamespacePtr& importingNamespace)
{
	this->importingNamespace = importingNamespace;
} // _setImportingNamespace
