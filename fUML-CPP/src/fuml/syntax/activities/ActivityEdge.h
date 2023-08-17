/*
 * ActivityEdge.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_ACTIVITYEDGE_H_
#define FUML_SYNTAX_ACTIVITIES_ACTIVITYEDGE_H_

#include "fuml/syntax/classification/RedefinableElement.h"

namespace fuml::syntax::activities
{
	class ActivityEdge : public fuml::syntax::classification::RedefinableElement
	{
		public:
			virtual ~ActivityEdge() = 0;
	}; // ActivityEdge
}

#endif /* FUML_SYNTAX_ACTIVITIES_ACTIVITYEDGE_H_ */
