/*
 * Type.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include <uml/commonstructure/Type.h>

Type::~Type()
{
}

void Type::_setPackage(const PackagePtr& package)
{
	this->package = package;
}
