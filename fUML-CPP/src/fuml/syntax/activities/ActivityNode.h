/*
 * ActivityNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_ACTIVITYNODE_H_
#define FUML_SYNTAX_ACTIVITIES_ACTIVITYNODE_H_

#include "fuml/syntax/classification/RedefinableElement.h"

namespace fuml::syntax::activities
{
	class ActivityNode : public fuml::syntax::classification::RedefinableElement
	{
		public:
			virtual ~ActivityNode() = 0;
	}; // ActivityNode
}

#endif /* FUML_SYNTAX_ACTIVITIES_ACTIVITYNODE_H_ */
