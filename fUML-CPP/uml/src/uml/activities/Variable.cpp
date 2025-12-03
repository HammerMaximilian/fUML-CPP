/*
 * Variable.cpp
 *
 *  Created on: 01.12.2025
 *      Author: maxs
 */

#include <uml/activities/Variable.h>

void Variable::_setActivityScope(const ActivityPtr& activityScope)
{
	this->activityScope = activityScope;
} // _setActivityScope

void Variable::_setScope(const StructuredActivityNodePtr& scope)
{
	this->scope = scope;
} // _setScope
