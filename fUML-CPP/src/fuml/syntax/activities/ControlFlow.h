/*
 * ControlFlow.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_CONTROLFLOW_H_
#define FUML_SYNTAX_ACTIVITIES_CONTROLFLOW_H_

#include <ActivityEdge.h>

namespace fuml::syntax::activities
{
	class ControlFlow : public ActivityEdge
	{
	}; // ControlFlow
}

using ControlFlow = fuml::syntax::activities::ControlFlow;
using ControlFlowPtr = std::shared_ptr<ControlFlow>;

#endif /* FUML_SYNTAX_ACTIVITIES_CONTROLFLOW_H_ */
