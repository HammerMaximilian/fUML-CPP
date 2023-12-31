/*
 * ForkNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_FORKNODE_H_
#define FUML_SYNTAX_ACTIVITIES_FORKNODE_H_

#include <fuml/syntax/activities/ControlNode.h>

namespace fuml::syntax::activities
{
	class ForkNode : public ControlNode
	{
		public:
			virtual ~ForkNode() = default;
	};
// ForkNode
}

#endif /* FUML_SYNTAX_ACTIVITIES_FORKNODE_H_ */
