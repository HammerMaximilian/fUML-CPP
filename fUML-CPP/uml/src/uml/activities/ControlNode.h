/*
 * ControlNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIVITIES_CONTROLNODE_H_
#define UML_ACTIVITIES_CONTROLNODE_H_

#include <uml/activities/ActivityNode.h>

namespace uml::activities
{
	class ControlNode : public ActivityNode
	{
		public:
			virtual ~ControlNode() = 0;
	};
// ControlNode
}

#endif /* UML_ACTIVITIES_CONTROLNODE_H_ */
