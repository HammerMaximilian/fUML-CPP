/*
 * PackageImport.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include "PackageImport.h"

#include "Namespace.h"
#include "VisibilityKind.h"
#include "fuml/syntax/packages/Package.h"

using namespace fuml::syntax::commonstructure;

void PackageImport::setVisibility(
	fuml::syntax::commonstructure::VisibilityKind visibility)
{
	this->visibility = visibility;
} // setVisibility

void PackageImport::setImportedPackage(
	const std::shared_ptr<fuml::syntax::packages::Package>& importedPackage)
{
	this->importedPackage = importedPackage;
} // setImportedPackage

void PackageImport::_setImportingNamespace(
	const std::shared_ptr<fuml::syntax::commonstructure::Namespace>& importingNamespace)
{
	this->importingNamespace = importingNamespace;
} // _setImportingNamespace
