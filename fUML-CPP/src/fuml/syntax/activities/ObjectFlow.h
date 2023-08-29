/*
 * ObjectFlow.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_OBJECTFLOW_H_
#define FUML_SYNTAX_ACTIVITIES_OBJECTFLOW_H_

#include <fuml/syntax/activities/ActivityEdge.h>

namespace fuml::syntax::activities
{
	class ObjectFlow : public ActivityEdge
	{
		public:
			virtual ~ObjectFlow() = default;
	}; // ObjectFlow
}

#endif /* FUML_SYNTAX_ACTIVITIES_OBJECTFLOW_H_ */
