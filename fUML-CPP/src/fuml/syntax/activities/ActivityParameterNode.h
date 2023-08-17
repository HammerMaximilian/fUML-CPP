/*
 * ActivityParameterNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_ACTIVITYPARAMETERNODE_H_
#define FUML_SYNTAX_ACTIVITIES_ACTIVITYPARAMETERNODE_H_

#include "ObjectNode.h"

namespace fuml::syntax::classification
{
	class Parameter;
}

namespace fuml::syntax::activities
{
	class ActivityParameterNode : public fuml::syntax::activities::ObjectNode
	{
		public:
			std::shared_ptr<fuml::syntax::classification::Parameter> parameter = nullptr;

		public:
			void setParameter(const std::shared_ptr<fuml::syntax::classification::Parameter>&);
	}; // ActivityParameterNode
}

#endif /* FUML_SYNTAX_ACTIVITIES_ACTIVITYPARAMETERNODE_H_ */
