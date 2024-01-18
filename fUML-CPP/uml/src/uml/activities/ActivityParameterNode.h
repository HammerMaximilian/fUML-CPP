/*
 * ActivityParameterNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIVITIES_ACTIVITYPARAMETERNODE_H_
#define UML_ACTIVITIES_ACTIVITYPARAMETERNODE_H_

#include <uml/activities/ObjectNode.h>

namespace uml::activities
{
	class ActivityParameterNode : public ObjectNode
	{
		public:
			ParameterPtr parameter = nullptr;

		public:
			virtual ~ActivityParameterNode() = default;

			void setParameter(const ParameterPtr&);
	};
// ActivityParameterNode
}

#endif /* UML_ACTIVITIES_ACTIVITYPARAMETERNODE_H_ */
