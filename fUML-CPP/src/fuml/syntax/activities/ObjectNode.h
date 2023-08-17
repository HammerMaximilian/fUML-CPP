/*
 * ObjectNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_OBJECTNODE_H_
#define FUML_SYNTAX_ACTIVITIES_OBJECTNODE_H_

#include "ActivityNode.h"

namespace fuml::syntax::activities
{
	class ObjectNode : public fuml::syntax::activities::ActivityNode
	{
		public:
			virtual ~ObjectNode() = 0;
	}; // ObjectNode
}

#endif /* FUML_SYNTAX_ACTIVITIES_OBJECTNODE_H_ */
