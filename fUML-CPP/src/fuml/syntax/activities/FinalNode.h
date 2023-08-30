/*
 * FinalNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_FINALNODE_H_
#define FUML_SYNTAX_ACTIVITIES_FINALNODE_H_

#include <fuml/syntax/activities/ControlNode.h>

namespace fuml::syntax::activities
{
	class FinalNode : public ControlNode
	{
		public:
			virtual ~FinalNode() = 0;
	};
// FinalNode
}

#endif /* FUML_SYNTAX_ACTIVITIES_FINALNODE_H_ */
