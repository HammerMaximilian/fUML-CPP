/*
 * ForkNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIVITIES_FORKNODE_H_
#define UML_ACTIVITIES_FORKNODE_H_

#include <uml/activities/ControlNode.h>

namespace uml::activities
{
	class ForkNode : public ControlNode
	{
		public:
			virtual ~ForkNode() = default;
	};
// ForkNode
}

#endif /* UML_ACTIVITIES_FORKNODE_H_ */
