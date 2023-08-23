/*
 * ActivityParameterNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_ACTIVITYPARAMETERNODE_H_
#define FUML_SYNTAX_ACTIVITIES_ACTIVITYPARAMETERNODE_H_

#include <fuml/syntax/activities/ObjectNode.h>
#include <memory>

namespace fuml::syntax::classification
{
	class Parameter;
}
using Parameter = fuml::syntax::classification::Parameter;
using ParameterPtr = std::shared_ptr<Parameter>;

namespace fuml::syntax::activities
{
	class ActivityParameterNode : public ObjectNode
	{
		public:
			ParameterPtr parameter = nullptr;

		public:
			void setParameter(const ParameterPtr&);
	}; // ActivityParameterNode
}

using ActivityParameterNode = fuml::syntax::activities::ActivityParameterNode;
using ActivityParameterNodePtr = std::shared_ptr<ActivityParameterNode>;

#endif /* FUML_SYNTAX_ACTIVITIES_ACTIVITYPARAMETERNODE_H_ */
