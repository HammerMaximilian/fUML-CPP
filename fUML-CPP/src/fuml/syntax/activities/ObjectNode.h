/*
 * ObjectNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_OBJECTNODE_H_
#define FUML_SYNTAX_ACTIVITIES_OBJECTNODE_H_

#include <fuml/syntax/activities/ActivityNode.h>
#include <fuml/syntax/commonstructure/TypedElement.h>
#include <memory>

namespace fuml::syntax::activities
{
	class ObjectNode :
		virtual public ActivityNode,
		virtual public TypedElement
	{
		public:
			virtual ~ObjectNode() = 0;
	}; // ObjectNode
}

using ObjectNode = fuml::syntax::activities::ObjectNode;
using ObjectNodePtr = std::shared_ptr<ObjectNode>;

#endif /* FUML_SYNTAX_ACTIVITIES_OBJECTNODE_H_ */
