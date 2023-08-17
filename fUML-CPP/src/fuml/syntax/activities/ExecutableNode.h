/*
 * ExecutableNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_EXECUTABLENODE_H_
#define FUML_SYNTAX_ACTIVITIES_EXECUTABLENODE_H_

#include "ActivityGroup.h"

namespace fuml::syntax::activities
{
	class ExecutableNode : public fuml::syntax::activities::ActivityGroup
	{
		public:
			virtual ~ExecutableNode() = 0;
	}; // ExecutableNode
}

#endif /* FUML_SYNTAX_ACTIVITIES_EXECUTABLENODE_H_ */
