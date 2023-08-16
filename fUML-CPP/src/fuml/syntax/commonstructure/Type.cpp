/*
 * Type.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include "Type.h"
#include "fuml/syntax/packages/Package.h"

using namespace fuml::syntax::commonstructure;

Type::~Type()
{
}

void Type::_setPackage(const std::shared_ptr<fuml::syntax::packages::Package>& package)
{
	this->package = package;
}
