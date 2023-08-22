/*
 * ObjectFlow.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_OBJECTFLOW_H_
#define FUML_SYNTAX_ACTIVITIES_OBJECTFLOW_H_

#include "ActivityEdge.h"

namespace fuml::syntax::activities
{
	class ObjectFlow : public fuml::syntax::activities::ActivityEdge
	{
	}; // ObjectFlow
}

using ObjectFlow = fuml::syntax::activities::ObjectFlow;
using ObjectFlowPtr = std::shared_ptr<ObjectFlow>;

#endif /* FUML_SYNTAX_ACTIVITIES_OBJECTFLOW_H_ */
