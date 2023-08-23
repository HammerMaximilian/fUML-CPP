/*
 * FinalNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_FINALNODE_H_
#define FUML_SYNTAX_ACTIVITIES_FINALNODE_H_

#include <fuml/syntax/activities/ControlNode.h>
#include <memory>

namespace fuml::syntax::activities
{
	class FinalNode : public fuml::syntax::activities::ControlNode
	{
		public:
			virtual ~FinalNode() = 0;
	}; // FinalNode
}

using FinalNode = fuml::syntax::activities::FinalNode;
using FinalNodePtr = std::shared_ptr<FinalNode>;

#endif /* FUML_SYNTAX_ACTIVITIES_FINALNODE_H_ */
