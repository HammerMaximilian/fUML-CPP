/*
 * PackageImport.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include <fuml/syntax/commonstructure/PackageImport.h>

void PackageImport::setVisibility(VisibilityKind visibility)
{
	this->visibility = visibility;
} // setVisibility

void PackageImport::setImportedPackage(const PackagePtr& importedPackage)
{
	this->importedPackage = importedPackage;
} // setImportedPackage

void PackageImport::_setImportingNamespace(const NamespacePtr& importingNamespace)
{
	this->importingNamespace = importingNamespace;
} // _setImportingNamespace
