/*
 * InstanceValue.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include "InstanceValue.h"

#include "InstanceSpecification.h"

using namespace fuml::syntax::classification;

void InstanceValue::setInstance(
		const std::shared_ptr<fuml::syntax::classification::InstanceSpecification>& instance)
{
	this->instance = instance;
} // setInstance
