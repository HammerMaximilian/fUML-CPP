/*
 * FinalNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIVITIES_FINALNODE_H_
#define UML_ACTIVITIES_FINALNODE_H_

#include <uml/activities/ControlNode.h>

namespace uml::activities
{
	class FinalNode : public ControlNode
	{
		public:
			virtual ~FinalNode() = 0;
	};
// FinalNode
}

#endif /* UML_ACTIVITIES_FINALNODE_H_ */
