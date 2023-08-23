/*
 * InstanceValue.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/classification/InstanceValue.h>

void InstanceValue::setInstance(
		const InstanceSpecificationPtr& instance)
{
	this->instance = instance;
} // setInstance
